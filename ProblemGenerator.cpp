#include "ProblemGenerator.h"
#include "UTF_8.h"

ProblemGenerator::ProblemGenerator(QWidget *parent)
    : QMainWindow(parent)
    , timer(new QTimer(this))
{
    ui.setupUi(this);
    resize(520, 320);
    setWindowFlags(Qt::FramelessWindowHint | windowFlags() | Qt::WindowSystemMenuHint | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint);
    setAttribute(Qt::WA_TranslucentBackground);//windows transparent
    QGraphicsDropShadowEffect* shadowEffect = new QGraphicsDropShadowEffect;
    shadowEffect->setBlurRadius(20); // 模糊半径
    shadowEffect->setColor(QColor(0, 0, 0, 180));
    shadowEffect->setOffset(0, 0);
    ui.background->setGraphicsEffect(shadowEffect);
    //add qss
    QFile file(":/ProblemGenerator.qss");
    if (file.open(QFile::ReadOnly))
    {
        qApp->setStyleSheet(file.readAll());
        file.close();
    }

    Connect_Init(); UI_Init();
    m_filepath = QCoreApplication::applicationDirPath();
    m_cachePath = QStandardPaths::writableLocation(QStandardPaths::CacheLocation);
}

void ProblemGenerator::Connect_Init()
{
    connect(ui.closeBtn, &QPushButton::clicked, this, &ProblemGenerator::close);
    connect(ui.miniBtn, &QPushButton::clicked, this, &ProblemGenerator::showMinimized);
    connect(timer, &QTimer::timeout, this, [this]() { ui.Remind->clear(); });
    connect(ui.get_colNum, &QLineEdit::textChanged, this, [this](const QString& text) {
        bool ok;
        int value = text.toInt(&ok);
        if (ok) colNum = value;
        });
    connect(ui.get_marginNum, &QLineEdit::textChanged, this, [this](const QString& text) {
        bool ok;
        int value = text.toInt(&ok);
        if (ok) marginNum = value;
        });
    connect(ui.posRtn, &QRadioButton::toggled, this, [this](bool checked) {
        posRtn = checked ? 1 : 0;
        });
    connect(ui.borderRtn, &QRadioButton::toggled, this, [this](bool checked) {
        borderRtn = checked ? 1 : 0;
        });
    connect(ui.portraitRtn, &QRadioButton::toggled, this, [this](bool checked) {
        portraitRtn = checked ? 1 : 0;
        });
    connect(ui.ansRtn, &QRadioButton::toggled, this, [this](bool checked) {
        ansRtn = checked ? 1 : 0;
        });
}
void ProblemGenerator::UI_Init()
{
    ui.pages->setCurrentIndex(0);
    QRegularExpression re_maxNum(R"(^(?:[1-9]\d{0,4}|100000)$)");
    ui.get_maxNum->setValidator(new QRegularExpressionValidator(re_maxNum, ui.get_maxNum));
    /*QRegularExpression re_segNum(R"(^[1-5]$)");
    ui.get_segNum->setValidator(new QRegularExpressionValidator(re_segNum, ui.get_segNum));
    QRegularExpression re_totNum(R"(^(?:[1-9]\d{0,4}|100000)$)");
    ui.get_totNum->setValidator(new QRegularExpressionValidator(re_totNum, ui.get_totNum));*/
    QRegularExpression re_minAns(R"(^-?(?:0|[1-9]\d{0,4}|100000)$)");
    ui.get_minAns->setValidator(new QRegularExpressionValidator(re_minAns, ui.get_minAns));
    QRegularExpression re_maxAns(R"(^-?(?:0|[1-9]\d{0,4}|100000)$)");
    ui.get_maxAns->setValidator(new QRegularExpressionValidator(re_maxAns, ui.get_maxAns));
    QRegularExpression re_colNum(R"(^(?:[1-9]|[12]\d|30)$)");
    ui.get_colNum->setValidator(new QRegularExpressionValidator(re_colNum, ui.get_colNum));
    loadConfigFromCache();
}
void ProblemGenerator::getNums(){
    maxNum = ui.get_maxNum->text().toInt();
    minAns = ui.get_minAns->text().toInt();
    maxAns = ui.get_maxAns->text().toInt();
    segNum = ui.get_segNum->text();
	marginNum = ui.get_marginNum->text().toInt();
    totNum = ui.get_totNum->text();
    colNum = ui.get_colNum->text().toInt();
    posRtn = ui.posRtn->isChecked();
    borderRtn = ui.borderRtn->isChecked();
    portraitRtn = ui.portraitRtn->isChecked();
    ansRtn = ui.ansRtn->isChecked();
    total = 0;
    QStringList totList = totNum.split(',', Qt::SkipEmptyParts);
    QStringList segList = segNum.split(',', Qt::SkipEmptyParts); 
	qDebug() << totList << segList; 
    if (totList.size() != segList.size()) {
        showMsg(QString(u8"请检查生成条件！"));
        return;
    }
    if (totList.isEmpty()) {
        showMsg(QString(u8"未设置题目数！"));
        return;
    }
    for (int i = 0; i < totList.size(); ++i) {
        bool ok1, ok2;
        int tot = totList[i].toInt(&ok1);
        int seg = segList[i].toInt(&ok2);
        total += tot;

        if (!ok1 || !ok2 || tot <= 0 || seg <= 0) {
            showMsg(QString(u8"第 %1 段参数无效（需为正整数）").arg(i + 1));
            total = 0;
            return;
        }
    }
}
void ProblemGenerator::showMsg(QString msg) {
    ui.Remind->setText(msg);
    if (timer->isActive()) {
        timer->stop();
    }
    timer->start(1500);
}

void ProblemGenerator::on_saveTxtBtn_clicked()
{
    QString text = "";
    if (questions.empty()) { showMsg(QString(u8"题目集为空，请确认是否已点击生成键")); return; }
    for (int i=0;i<total;i++)
    {
        text += questions[i];
        if (ansRtn)  text += ans[i];
        text += "\n";
    }

    QString fileName = QFileDialog::getSaveFileName(
        nullptr, 
        QString(u8"保存文本文件"),
        "Problems.txt",
        "Text Files (*.txt);;All Files (*)"
    );

    if (fileName.isEmpty())  return;

    if (!fileName.endsWith(".txt", Qt::CaseInsensitive)) {
        fileName += ".txt";
    }

    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::warning(nullptr, QString(u8"错误"), QString(u8"无法保存文件！"));
        showMsg(QString("保存失败"));
        return;
    }

    QTextStream out(&file);
    out.setEncoding(QStringConverter::Utf8); 
    out << text;
    file.close();
}
void ProblemGenerator::on_viewPdfBtn_clicked()
{
    generatePdfOrPrint(colNum, total / colNum + (total % colNum != 0), 0);
}
void ProblemGenerator::on_savePdfBtn_clicked(){
    generatePdfOrPrint(colNum, total / colNum + (total % colNum != 0), 1);
}
void ProblemGenerator::on_generatorBtn_clicked(){
    getNums();
    QVector<QString>().swap(questions);
    QVector<QString>().swap(ans);
    QStringList totList = totNum.split(',', Qt::SkipEmptyParts);
    QStringList segList = segNum.split(',', Qt::SkipEmptyParts);
    if (totList.size() != segList.size()) {
        showMsg(QString(u8"请检查生成条件！"));
        return;
    }
    if (totList.isEmpty()) {
        showMsg(QString(u8"未设置题目数！"));
        return;
    }
    for (int i = 0; i < totList.size(); ++i) {
        int tot = totList[i].toInt();
        int seg = segList[i].toInt();
        for (int j = 0; j < tot; ++j) {
            QString question = generateQuestion(seg);
            if (question.isEmpty()) {
                showMsg(QString(u8"第 %1 段第 %2 题生成失败，请检查条件是否合法")
                    .arg(i + 1).arg(j + 1));
                return;
            }
        }
    }
    showMsg(QString(u8"已成功生成"));
}
void ProblemGenerator::on_saveBtn_clicked()
{
    getNums();

    QString cachePath = QStandardPaths::writableLocation(QStandardPaths::CacheLocation);
    QString filePath = cachePath + "/data.txt";

    QDir dir(cachePath);
    if (!dir.exists()) {
        dir.mkpath(".");
    }

    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qWarning() << "Failed to open config file for writing:" << filePath;
        return;
    }

    QTextStream out(&file);
    out << edition << " "
        << maxNum << " "
        << minAns << " "
        << maxAns << " "
        << colNum << " "
        << marginNum << " "
        << segNum << " "
        << totNum << " "
        << posRtn << " "
        << borderRtn << " "
        << portraitRtn << " "
        << ansRtn;
    file.close();

    qDebug() << "Saved config to cache:" << filePath;
    showMsg(QString(u8"已保存"));
}
ProblemGenerator::~ProblemGenerator()
{}


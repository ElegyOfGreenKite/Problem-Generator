/********************************************************************************
** Form generated from reading UI file 'ProblemGenerator.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROBLEMGENERATOR_H
#define UI_PROBLEMGENERATOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProblemGeneratorClass
{
public:
    QWidget *centralWidget;
    QLabel *background;
    QPushButton *miniBtn;
    QPushButton *closeBtn;
    QStackedWidget *pages;
    QWidget *editPage;
    QLineEdit *get_maxNum;
    QLabel *maxNum;
    QLabel *segNum;
    QLineEdit *get_segNum;
    QLabel *totNum;
    QLineEdit *get_totNum;
    QLabel *colNum;
    QLineEdit *get_colNum;
    QPushButton *saveTxtBtn;
    QPushButton *viewPdfBtn;
    QPushButton *savePdfBtn;
    QPushButton *saveBtn;
    QPushButton *generatorBtn;
    QLabel *marginNum;
    QLineEdit *get_marginNum;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QCheckBox *posRtn;
    QCheckBox *borderRtn;
    QCheckBox *portraitRtn;
    QCheckBox *ansRtn;
    QLabel *ansRange;
    QLineEdit *get_minAns;
    QLabel *blh;
    QLineEdit *get_maxAns;
    QWidget *previewPage;
    QLabel *Remind;

    void setupUi(QMainWindow *ProblemGeneratorClass)
    {
        if (ProblemGeneratorClass->objectName().isEmpty())
            ProblemGeneratorClass->setObjectName("ProblemGeneratorClass");
        ProblemGeneratorClass->resize(586, 384);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ProblemGenerator.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ProblemGeneratorClass->setWindowIcon(icon);
        ProblemGeneratorClass->setStyleSheet(QString::fromUtf8("outline: none;"));
        centralWidget = new QWidget(ProblemGeneratorClass);
        centralWidget->setObjectName("centralWidget");
        background = new QLabel(centralWidget);
        background->setObjectName("background");
        background->setGeometry(QRect(10, 10, 500, 300));
        background->setMinimumSize(QSize(500, 300));
        background->setMaximumSize(QSize(500, 300));
        background->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color:white;\n"
"	border-radius:5px;\n"
"}"));
        miniBtn = new QPushButton(background);
        miniBtn->setObjectName("miniBtn");
        miniBtn->setGeometry(QRect(440, 0, 30, 30));
        miniBtn->setMinimumSize(QSize(30, 30));
        miniBtn->setMaximumSize(QSize(30, 30));
        miniBtn->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"    font-size: 19px;\n"
"    color:black;\n"
"    background-color:white;\n"
"	border-radius:0px;\n"
"	border:0px solid white;\n"
"	padding-bottom:5px;\n"
"} \n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background:#F3F3F3;\n"
"}\n"
""));
        closeBtn = new QPushButton(background);
        closeBtn->setObjectName("closeBtn");
        closeBtn->setGeometry(QRect(470, 0, 30, 30));
        closeBtn->setMinimumSize(QSize(30, 30));
        closeBtn->setMaximumSize(QSize(30, 30));
        closeBtn->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"    font-size: 19px;\n"
"    color:black;\n"
"    background-color:white;\n"
"	border-radius:0px;\n"
"	border-top-right-radius:5px;\n"
"	border:0px solid white;\n"
"	padding-bottom:5px;\n"
"} \n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background:#ff6464;\n"
"    color:white;\n"
"}\n"
""));
        pages = new QStackedWidget(centralWidget);
        pages->setObjectName("pages");
        pages->setGeometry(QRect(20, 30, 481, 271));
        pages->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color:transparent;\n"
"}"));
        editPage = new QWidget();
        editPage->setObjectName("editPage");
        editPage->setStyleSheet(QString::fromUtf8(""));
        get_maxNum = new QLineEdit(editPage);
        get_maxNum->setObjectName("get_maxNum");
        get_maxNum->setGeometry(QRect(100, 10, 151, 31));
        get_maxNum->setLayoutDirection(Qt::LeftToRight);
        get_maxNum->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:0px;\n"
"border:none;\n"
"border-bottom:0.5px solid #C8C8C8;\n"
"font:10pt;"));
        get_maxNum->setAlignment(Qt::AlignCenter);
        maxNum = new QLabel(editPage);
        maxNum->setObjectName("maxNum");
        maxNum->setGeometry(QRect(20, 10, 61, 31));
        maxNum->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:0px;\n"
"border:none;\n"
"font-size:14px;\n"
"color:gray;"));
        segNum = new QLabel(editPage);
        segNum->setObjectName("segNum");
        segNum->setGeometry(QRect(20, 45, 81, 31));
        segNum->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:0px;\n"
"border:none;\n"
"font-size:14px;\n"
"color:gray;"));
        get_segNum = new QLineEdit(editPage);
        get_segNum->setObjectName("get_segNum");
        get_segNum->setGeometry(QRect(100, 45, 151, 31));
        get_segNum->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:0px;\n"
"border:none;\n"
"border-bottom:0.5px solid #C8C8C8;\n"
"font:10pt;"));
        get_segNum->setAlignment(Qt::AlignCenter);
        totNum = new QLabel(editPage);
        totNum->setObjectName("totNum");
        totNum->setGeometry(QRect(20, 80, 61, 31));
        totNum->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:0px;\n"
"border:none;\n"
"font-size:14px;\n"
"color:gray;"));
        get_totNum = new QLineEdit(editPage);
        get_totNum->setObjectName("get_totNum");
        get_totNum->setGeometry(QRect(100, 80, 151, 31));
        get_totNum->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:0px;\n"
"border:none;\n"
"border-bottom:0.5px solid #C8C8C8;\n"
"font:10pt;"));
        get_totNum->setAlignment(Qt::AlignCenter);
        colNum = new QLabel(editPage);
        colNum->setObjectName("colNum");
        colNum->setGeometry(QRect(20, 185, 61, 31));
        colNum->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:0px;\n"
"border:none;\n"
"font-size:14px;\n"
"color:gray;"));
        get_colNum = new QLineEdit(editPage);
        get_colNum->setObjectName("get_colNum");
        get_colNum->setGeometry(QRect(100, 185, 151, 31));
        get_colNum->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:0px;\n"
"border:none;\n"
"border-bottom:0.5px solid #C8C8C8;\n"
"font:10pt;"));
        get_colNum->setAlignment(Qt::AlignCenter);
        saveTxtBtn = new QPushButton(editPage);
        saveTxtBtn->setObjectName("saveTxtBtn");
        saveTxtBtn->setGeometry(QRect(320, 165, 141, 25));
        saveTxtBtn->setCursor(QCursor(Qt::PointingHandCursor));
        saveTxtBtn->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"    font-size: 12px;\n"
"    color:white;\n"
"	background-color:rgb(0, 188, 71);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:#00d14d;\n"
"    color:white;\n"
"}\n"
""));
        viewPdfBtn = new QPushButton(editPage);
        viewPdfBtn->setObjectName("viewPdfBtn");
        viewPdfBtn->setGeometry(QRect(320, 200, 141, 25));
        viewPdfBtn->setCursor(QCursor(Qt::PointingHandCursor));
        viewPdfBtn->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"    font-size: 12px;\n"
"    color:white;\n"
"	background-color:rgb(0, 188, 71);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:#00d14d;\n"
"    color:white;\n"
"}\n"
""));
        savePdfBtn = new QPushButton(editPage);
        savePdfBtn->setObjectName("savePdfBtn");
        savePdfBtn->setGeometry(QRect(320, 235, 141, 25));
        savePdfBtn->setCursor(QCursor(Qt::PointingHandCursor));
        savePdfBtn->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"    font-size: 12px;\n"
"    color:white;\n"
"	background-color:rgb(0, 188, 71);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:#00d14d;\n"
"    color:white;\n"
"}\n"
""));
        saveBtn = new QPushButton(editPage);
        saveBtn->setObjectName("saveBtn");
        saveBtn->setGeometry(QRect(20, 235, 111, 25));
        saveBtn->setCursor(QCursor(Qt::PointingHandCursor));
        saveBtn->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"    font-size: 12px;\n"
"    color:white;\n"
"	background-color:rgb(0, 188, 71);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:#00d14d;\n"
"    color:white;\n"
"}\n"
""));
        generatorBtn = new QPushButton(editPage);
        generatorBtn->setObjectName("generatorBtn");
        generatorBtn->setGeometry(QRect(140, 235, 111, 25));
        generatorBtn->setCursor(QCursor(Qt::PointingHandCursor));
        generatorBtn->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"    font-size: 12px;\n"
"    color:white;\n"
"	background-color:rgb(0, 188, 71);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color:#00d14d;\n"
"    color:white;\n"
"}\n"
""));
        marginNum = new QLabel(editPage);
        marginNum->setObjectName("marginNum");
        marginNum->setGeometry(QRect(20, 150, 61, 31));
        marginNum->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:0px;\n"
"border:none;\n"
"font-size:14px;\n"
"color:gray;"));
        get_marginNum = new QLineEdit(editPage);
        get_marginNum->setObjectName("get_marginNum");
        get_marginNum->setGeometry(QRect(100, 150, 151, 31));
        get_marginNum->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:0px;\n"
"border:none;\n"
"border-bottom:0.5px solid #C8C8C8;\n"
"font:10pt;"));
        get_marginNum->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(editPage);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(320, 10, 151, 141));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        posRtn = new QCheckBox(layoutWidget);
        posRtn->setObjectName("posRtn");
        posRtn->setCursor(QCursor(Qt::PointingHandCursor));
        posRtn->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"	font-size:13px;\n"
"	color:black;\n"
"}\n"
"QCheckBox::indicator{\n"
"	width:14px;\n"
"	height:14px;\n"
"}\n"
"QCheckBox::indicator::unchecked {\n"
"	image: url(:/uiDesign/Check_OFF.png);\n"
"}\n"
"QCheckBox::indicator::checked { \n"
"	image: url(:/uiDesign/Check_ON.png);\n"
"}"));
        posRtn->setChecked(true);

        verticalLayout->addWidget(posRtn);

        borderRtn = new QCheckBox(layoutWidget);
        borderRtn->setObjectName("borderRtn");
        borderRtn->setCursor(QCursor(Qt::PointingHandCursor));
        borderRtn->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"	font-size:13px;\n"
"	color:black;\n"
"}\n"
"QCheckBox::indicator{\n"
"	width:14px;\n"
"	height:14px;\n"
"}\n"
"QCheckBox::indicator::unchecked {\n"
"	image: url(:/uiDesign/Check_OFF.png);\n"
"}\n"
"QCheckBox::indicator::checked { \n"
"	image: url(:/uiDesign/Check_ON.png);\n"
"}"));

        verticalLayout->addWidget(borderRtn);

        portraitRtn = new QCheckBox(layoutWidget);
        portraitRtn->setObjectName("portraitRtn");
        portraitRtn->setCursor(QCursor(Qt::PointingHandCursor));
        portraitRtn->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"	font-size:13px;\n"
"	color:black;\n"
"}\n"
"QCheckBox::indicator{\n"
"	width:14px;\n"
"	height:14px;\n"
"}\n"
"QCheckBox::indicator::unchecked {\n"
"	image: url(:/uiDesign/Check_OFF.png);\n"
"}\n"
"QCheckBox::indicator::checked { \n"
"	image: url(:/uiDesign/Check_ON.png);\n"
"}"));

        verticalLayout->addWidget(portraitRtn);

        ansRtn = new QCheckBox(layoutWidget);
        ansRtn->setObjectName("ansRtn");
        ansRtn->setCursor(QCursor(Qt::PointingHandCursor));
        ansRtn->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"	font-size:13px;\n"
"	color:black;\n"
"}\n"
"QCheckBox::indicator{\n"
"	width:14px;\n"
"	height:14px;\n"
"}\n"
"QCheckBox::indicator::unchecked {\n"
"	image: url(:/uiDesign/Check_OFF.png);\n"
"}\n"
"QCheckBox::indicator::checked { \n"
"	image: url(:/uiDesign/Check_ON.png);\n"
"}"));

        verticalLayout->addWidget(ansRtn);

        ansRange = new QLabel(editPage);
        ansRange->setObjectName("ansRange");
        ansRange->setGeometry(QRect(20, 115, 61, 31));
        ansRange->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:0px;\n"
"border:none;\n"
"font-size:14px;\n"
"color:gray;"));
        get_minAns = new QLineEdit(editPage);
        get_minAns->setObjectName("get_minAns");
        get_minAns->setGeometry(QRect(100, 115, 61, 31));
        get_minAns->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:0px;\n"
"border:none;\n"
"border-bottom:0.5px solid #C8C8C8;\n"
"font:10pt;"));
        get_minAns->setAlignment(Qt::AlignCenter);
        blh = new QLabel(editPage);
        blh->setObjectName("blh");
        blh->setGeometry(QRect(170, 115, 21, 31));
        blh->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:0px;\n"
"border:none;\n"
"font-size:14px;\n"
"color:gray;"));
        get_maxAns = new QLineEdit(editPage);
        get_maxAns->setObjectName("get_maxAns");
        get_maxAns->setGeometry(QRect(190, 115, 61, 31));
        get_maxAns->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:0px;\n"
"border:none;\n"
"border-bottom:0.5px solid #C8C8C8;\n"
"font:10pt;"));
        get_maxAns->setAlignment(Qt::AlignCenter);
        pages->addWidget(editPage);
        previewPage = new QWidget();
        previewPage->setObjectName("previewPage");
        pages->addWidget(previewPage);
        Remind = new QLabel(centralWidget);
        Remind->setObjectName("Remind");
        Remind->setGeometry(QRect(80, 20, 341, 21));
        Remind->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color:red;\n"
"}"));
        Remind->setAlignment(Qt::AlignCenter);
        ProblemGeneratorClass->setCentralWidget(centralWidget);

        retranslateUi(ProblemGeneratorClass);

        pages->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ProblemGeneratorClass);
    } // setupUi

    void retranslateUi(QMainWindow *ProblemGeneratorClass)
    {
        ProblemGeneratorClass->setWindowTitle(QCoreApplication::translate("ProblemGeneratorClass", "ProblemGenerator", nullptr));
        background->setText(QString());
        miniBtn->setText(QCoreApplication::translate("ProblemGeneratorClass", "-", nullptr));
        closeBtn->setText(QCoreApplication::translate("ProblemGeneratorClass", "\303\227", nullptr));
        get_maxNum->setText(QCoreApplication::translate("ProblemGeneratorClass", "10", nullptr));
        get_maxNum->setPlaceholderText(QCoreApplication::translate("ProblemGeneratorClass", "\350\276\223\345\205\245 1~100000 \351\227\264\347\232\204\346\255\243\346\225\264\346\225\260", nullptr));
        maxNum->setText(QCoreApplication::translate("ProblemGeneratorClass", "\346\234\200\345\244\247\345\200\274", nullptr));
        segNum->setText(QCoreApplication::translate("ProblemGeneratorClass", "\350\277\220\347\256\227\347\254\246\346\225\260\351\207\217", nullptr));
        get_segNum->setText(QCoreApplication::translate("ProblemGeneratorClass", "1,2", nullptr));
        get_segNum->setPlaceholderText(QCoreApplication::translate("ProblemGeneratorClass", "\350\276\223\345\205\245 1~5 \351\227\264\347\232\204\346\255\243\346\225\264\346\225\260", nullptr));
        totNum->setText(QCoreApplication::translate("ProblemGeneratorClass", "\351\242\230\347\233\256\346\200\273\346\225\260", nullptr));
        get_totNum->setText(QCoreApplication::translate("ProblemGeneratorClass", "100,100", nullptr));
        get_totNum->setPlaceholderText(QCoreApplication::translate("ProblemGeneratorClass", "\350\276\223\345\205\245 1~100000 \351\227\264\347\232\204\346\255\243\346\225\264\346\225\260", nullptr));
        colNum->setText(QCoreApplication::translate("ProblemGeneratorClass", "\345\210\206\346\240\217", nullptr));
        get_colNum->setText(QCoreApplication::translate("ProblemGeneratorClass", "5", nullptr));
        get_colNum->setPlaceholderText(QCoreApplication::translate("ProblemGeneratorClass", "\350\276\223\345\205\245 1~30 \351\227\264\347\232\204\346\255\243\346\225\264\346\225\260", nullptr));
        saveTxtBtn->setText(QCoreApplication::translate("ProblemGeneratorClass", "\344\277\235\345\255\230\344\270\272 txt", nullptr));
        viewPdfBtn->setText(QCoreApplication::translate("ProblemGeneratorClass", "\351\242\204\350\247\210 pdf", nullptr));
        savePdfBtn->setText(QCoreApplication::translate("ProblemGeneratorClass", "\345\257\274\345\207\272 pdf", nullptr));
        saveBtn->setText(QCoreApplication::translate("ProblemGeneratorClass", "\350\256\260\344\275\217\345\275\223\345\211\215\350\256\276\347\275\256", nullptr));
        generatorBtn->setText(QCoreApplication::translate("ProblemGeneratorClass", "\347\224\237\346\210\220", nullptr));
        marginNum->setText(QCoreApplication::translate("ProblemGeneratorClass", "\345\267\246\351\227\264\350\267\235", nullptr));
        get_marginNum->setText(QCoreApplication::translate("ProblemGeneratorClass", "300", nullptr));
        get_marginNum->setPlaceholderText(QCoreApplication::translate("ProblemGeneratorClass", "\350\276\223\345\205\245 1~1000 \351\227\264\347\232\204\346\255\243\346\225\264\346\225\260", nullptr));
        posRtn->setText(QCoreApplication::translate("ProblemGeneratorClass", " \344\277\235\350\257\201\346\257\217\344\270\200\346\255\245\347\273\223\346\236\234\351\235\236\350\264\237", nullptr));
        borderRtn->setText(QCoreApplication::translate("ProblemGeneratorClass", " \344\277\235\347\225\231\350\276\271\346\241\206", nullptr));
        portraitRtn->setText(QCoreApplication::translate("ProblemGeneratorClass", " \347\253\226\347\211\210(\344\270\215\351\200\211\345\210\231\344\270\272\346\250\252\347\211\210)", nullptr));
        ansRtn->setText(QCoreApplication::translate("ProblemGeneratorClass", " \345\214\205\345\220\253\347\255\224\346\241\210", nullptr));
        ansRange->setText(QCoreApplication::translate("ProblemGeneratorClass", "\347\255\224\346\241\210\350\214\203\345\233\264", nullptr));
        get_minAns->setText(QCoreApplication::translate("ProblemGeneratorClass", "0", nullptr));
        blh->setText(QCoreApplication::translate("ProblemGeneratorClass", "\357\275\236", nullptr));
        get_maxAns->setText(QCoreApplication::translate("ProblemGeneratorClass", "20", nullptr));
        Remind->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ProblemGeneratorClass: public Ui_ProblemGeneratorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROBLEMGENERATOR_H

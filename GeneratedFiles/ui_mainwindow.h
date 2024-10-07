/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QSplitter *splitter;
    QWidget *widget_Connect;
    QGridLayout *gridLayout_12;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_11;
    QLabel *label_22;
    QLineEdit *lineEdit_DefaultProtocol;
    QLineEdit *lineEdit_DefaultWriteCode;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLineEdit *lineEdit_DefaultReadCode;
    QLineEdit *lineEdit_DefaultTransmission;
    QPushButton *pushButton_UpdataDefaultSet;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_IP;
    QLabel *label_5;
    QLineEdit *lineEdit_Port;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Connect;
    QPushButton *pushButton_DisConnect;
    QTextEdit *textEdit_ConnectState;
    QWidget *widget_Read;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QLineEdit *lineEdit_Read_Protocol;
    QLabel *label_8;
    QLineEdit *lineEdit_Read_Length;
    QLabel *label_9;
    QLineEdit *lineEdit_Read_StartAddress;
    QLineEdit *lineEdit_Read_PDU;
    QLabel *label;
    QLabel *label_10;
    QLineEdit *lineEdit_Read_FunctionCode;
    QLabel *label_7;
    QLineEdit *lineEdit_Read_addressCode;
    QLineEdit *lineEdit_Read_Transmission;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_24;
    QComboBox *comboBox_Read_DataFormat;
    QTextEdit *textEdit_Read;
    QPushButton *pushButton_Read;
    QWidget *widget_Write;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_8;
    QLineEdit *lineEdit_Write_Transmission;
    QLineEdit *lineEdit_Write_PDU;
    QLabel *label_13;
    QLabel *label_15;
    QLabel *label_14;
    QLabel *label_16;
    QLineEdit *lineEdit_Write_FunctionCode;
    QLineEdit *lineEdit_Write_WordNum;
    QLineEdit *lineEdit_Write_StartAddress;
    QLineEdit *lineEdit_Write_addressCode;
    QLabel *label_3;
    QLabel *label_17;
    QLineEdit *lineEdit_Write_byteNum;
    QLineEdit *lineEdit_Write_Data;
    QLabel *label_11;
    QLineEdit *lineEdit_Write_Protocol;
    QLabel *label_12;
    QLabel *label_18;
    QComboBox *comboBox_Write_DataFormat;
    QLabel *label_23;
    QTextEdit *textEdit_Write;
    QPushButton *pushButton_Write;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_10;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1186, 711);
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"*{\n"
"	font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	outline:0px;\n"
"}\n"
"\n"
"#MainWindow,#centralWidget\n"
"{\n"
"	background-color:#ececec;\n"
"}\n"
"\n"
"#scrollArea,#scrollAreaWidgetContents\n"
"{\n"
"	background-color:#ececec;\n"
"}\n"
"\n"
"#toolButton_switchinfo\n"
"{\n"
"	border-style:none;\n"
"	min-height:80px;\n"
"	max-height:80px;\n"
"	background-color:transparent;\n"
"}\n"
"\n"
"#widget_machineState\n"
"{\n"
"	border-style:none;\n"
"	min-height:80px;\n"
"	max-height:80px;\n"
"}\n"
"\n"
"#widget_userinfo\n"
"{\n"
"	border-style:none;\n"
"	min-width:100px;\n"
"	max-width:100px;\n"
"}\n"
"\n"
"#label_username\n"
"{\n"
"	border-style:none;\n"
"	color:blue;\n"
"}\n"
"\n"
"#label_userlevel\n"
"{\n"
"	border-style:none;\n"
"	color:orange;\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"    border-style: none;\n"
"    color: #7F848D;\n"
"	border: 1px solid #cecece;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #D0D0D0, stop:1 #D5D5D5);\n"
"	border-ra"
                        "dius: 4px;\n"
"	min-height:24px;\n"
"	min-width:64px;\n"
"}\n"
"\n"
"QLineEdit:hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #DADADA, stop:1 #DFDFDF);\n"
"}\n"
"\n"
"QProgressBar{\n"
"	min-height:10px;\n"
"	border-radius:2px;\n"
"	text-align:center;\n"
"	background-color:#dedede;\n"
"}\n"
"\n"
"#pushButton_status\n"
"{\n"
"	border-radius:2px;\n"
"	background-color:#ececec;\n"
"}\n"
"\n"
"#pushButton_status:hover\n"
"{\n"
"	border-radius:2px;\n"
"	background-color:#dedede;\n"
"}\n"
""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        splitter = new QSplitter(widget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        widget_Connect = new QWidget(splitter);
        widget_Connect->setObjectName(QStringLiteral("widget_Connect"));
        widget_Connect->setStyleSheet(QStringLiteral(""));
        gridLayout_12 = new QGridLayout(widget_Connect);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        groupBox_4 = new QGroupBox(widget_Connect);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_11 = new QGridLayout(groupBox_4);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        label_22 = new QLabel(groupBox_4);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_11->addWidget(label_22, 3, 0, 1, 1);

        lineEdit_DefaultProtocol = new QLineEdit(groupBox_4);
        lineEdit_DefaultProtocol->setObjectName(QStringLiteral("lineEdit_DefaultProtocol"));

        gridLayout_11->addWidget(lineEdit_DefaultProtocol, 3, 1, 1, 1);

        lineEdit_DefaultWriteCode = new QLineEdit(groupBox_4);
        lineEdit_DefaultWriteCode->setObjectName(QStringLiteral("lineEdit_DefaultWriteCode"));

        gridLayout_11->addWidget(lineEdit_DefaultWriteCode, 1, 1, 1, 1);

        label_19 = new QLabel(groupBox_4);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_11->addWidget(label_19, 0, 0, 1, 1);

        label_20 = new QLabel(groupBox_4);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_11->addWidget(label_20, 1, 0, 1, 1);

        label_21 = new QLabel(groupBox_4);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_11->addWidget(label_21, 2, 0, 1, 1);

        lineEdit_DefaultReadCode = new QLineEdit(groupBox_4);
        lineEdit_DefaultReadCode->setObjectName(QStringLiteral("lineEdit_DefaultReadCode"));

        gridLayout_11->addWidget(lineEdit_DefaultReadCode, 0, 1, 1, 1);

        lineEdit_DefaultTransmission = new QLineEdit(groupBox_4);
        lineEdit_DefaultTransmission->setObjectName(QStringLiteral("lineEdit_DefaultTransmission"));

        gridLayout_11->addWidget(lineEdit_DefaultTransmission, 2, 1, 1, 1);

        pushButton_UpdataDefaultSet = new QPushButton(groupBox_4);
        pushButton_UpdataDefaultSet->setObjectName(QStringLiteral("pushButton_UpdataDefaultSet"));

        gridLayout_11->addWidget(pushButton_UpdataDefaultSet, 4, 0, 1, 2);


        gridLayout_12->addWidget(groupBox_4, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_4 = new QLabel(widget_Connect);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        lineEdit_IP = new QLineEdit(widget_Connect);
        lineEdit_IP->setObjectName(QStringLiteral("lineEdit_IP"));

        gridLayout_3->addWidget(lineEdit_IP, 0, 1, 1, 1);

        label_5 = new QLabel(widget_Connect);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 1, 0, 1, 1);

        lineEdit_Port = new QLineEdit(widget_Connect);
        lineEdit_Port->setObjectName(QStringLiteral("lineEdit_Port"));

        gridLayout_3->addWidget(lineEdit_Port, 1, 1, 1, 1);


        gridLayout_12->addLayout(gridLayout_3, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_Connect = new QPushButton(widget_Connect);
        pushButton_Connect->setObjectName(QStringLiteral("pushButton_Connect"));

        horizontalLayout->addWidget(pushButton_Connect);

        pushButton_DisConnect = new QPushButton(widget_Connect);
        pushButton_DisConnect->setObjectName(QStringLiteral("pushButton_DisConnect"));

        horizontalLayout->addWidget(pushButton_DisConnect);


        gridLayout_12->addLayout(horizontalLayout, 2, 0, 1, 1);

        textEdit_ConnectState = new QTextEdit(widget_Connect);
        textEdit_ConnectState->setObjectName(QStringLiteral("textEdit_ConnectState"));

        gridLayout_12->addWidget(textEdit_ConnectState, 3, 0, 1, 1);

        splitter->addWidget(widget_Connect);
        widget_Read = new QWidget(splitter);
        widget_Read->setObjectName(QStringLiteral("widget_Read"));
        widget_Read->setStyleSheet(QStringLiteral(""));
        gridLayout_4 = new QGridLayout(widget_Read);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        groupBox = new QGroupBox(widget_Read);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_7 = new QGridLayout(groupBox);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        lineEdit_Read_Protocol = new QLineEdit(groupBox);
        lineEdit_Read_Protocol->setObjectName(QStringLiteral("lineEdit_Read_Protocol"));
        lineEdit_Read_Protocol->setReadOnly(true);

        gridLayout_6->addWidget(lineEdit_Read_Protocol, 1, 1, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_6->addWidget(label_8, 5, 0, 1, 1);

        lineEdit_Read_Length = new QLineEdit(groupBox);
        lineEdit_Read_Length->setObjectName(QStringLiteral("lineEdit_Read_Length"));

        gridLayout_6->addWidget(lineEdit_Read_Length, 6, 1, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_6->addWidget(label_9, 6, 0, 1, 1);

        lineEdit_Read_StartAddress = new QLineEdit(groupBox);
        lineEdit_Read_StartAddress->setObjectName(QStringLiteral("lineEdit_Read_StartAddress"));

        gridLayout_6->addWidget(lineEdit_Read_StartAddress, 5, 1, 1, 1);

        lineEdit_Read_PDU = new QLineEdit(groupBox);
        lineEdit_Read_PDU->setObjectName(QStringLiteral("lineEdit_Read_PDU"));
        lineEdit_Read_PDU->setReadOnly(true);

        gridLayout_6->addWidget(lineEdit_Read_PDU, 2, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_6->addWidget(label, 0, 0, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_6->addWidget(label_10, 2, 0, 1, 1);

        lineEdit_Read_FunctionCode = new QLineEdit(groupBox);
        lineEdit_Read_FunctionCode->setObjectName(QStringLiteral("lineEdit_Read_FunctionCode"));
        lineEdit_Read_FunctionCode->setReadOnly(true);

        gridLayout_6->addWidget(lineEdit_Read_FunctionCode, 4, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_6->addWidget(label_7, 4, 0, 1, 1);

        lineEdit_Read_addressCode = new QLineEdit(groupBox);
        lineEdit_Read_addressCode->setObjectName(QStringLiteral("lineEdit_Read_addressCode"));

        gridLayout_6->addWidget(lineEdit_Read_addressCode, 3, 1, 1, 1);

        lineEdit_Read_Transmission = new QLineEdit(groupBox);
        lineEdit_Read_Transmission->setObjectName(QStringLiteral("lineEdit_Read_Transmission"));
        lineEdit_Read_Transmission->setReadOnly(true);

        gridLayout_6->addWidget(lineEdit_Read_Transmission, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_6->addWidget(label_2, 3, 0, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_6->addWidget(label_6, 1, 0, 1, 1);

        label_24 = new QLabel(groupBox);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout_6->addWidget(label_24, 7, 0, 1, 1);

        comboBox_Read_DataFormat = new QComboBox(groupBox);
        comboBox_Read_DataFormat->setObjectName(QStringLiteral("comboBox_Read_DataFormat"));

        gridLayout_6->addWidget(comboBox_Read_DataFormat, 7, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 0, 1, 1);

        textEdit_Read = new QTextEdit(groupBox);
        textEdit_Read->setObjectName(QStringLiteral("textEdit_Read"));

        gridLayout_7->addWidget(textEdit_Read, 1, 0, 1, 1);

        pushButton_Read = new QPushButton(groupBox);
        pushButton_Read->setObjectName(QStringLiteral("pushButton_Read"));

        gridLayout_7->addWidget(pushButton_Read, 2, 0, 1, 1);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);

        splitter->addWidget(widget_Read);
        widget_Write = new QWidget(splitter);
        widget_Write->setObjectName(QStringLiteral("widget_Write"));
        widget_Write->setStyleSheet(QStringLiteral(""));
        gridLayout_5 = new QGridLayout(widget_Write);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        groupBox_2 = new QGroupBox(widget_Write);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_9 = new QGridLayout(groupBox_2);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        lineEdit_Write_Transmission = new QLineEdit(groupBox_2);
        lineEdit_Write_Transmission->setObjectName(QStringLiteral("lineEdit_Write_Transmission"));
        lineEdit_Write_Transmission->setReadOnly(true);

        gridLayout_8->addWidget(lineEdit_Write_Transmission, 0, 1, 1, 1);

        lineEdit_Write_PDU = new QLineEdit(groupBox_2);
        lineEdit_Write_PDU->setObjectName(QStringLiteral("lineEdit_Write_PDU"));
        lineEdit_Write_PDU->setReadOnly(true);

        gridLayout_8->addWidget(lineEdit_Write_PDU, 2, 1, 1, 1);

        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_8->addWidget(label_13, 3, 0, 1, 1);

        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_8->addWidget(label_15, 5, 0, 1, 1);

        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_8->addWidget(label_14, 4, 0, 1, 1);

        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_8->addWidget(label_16, 6, 0, 1, 1);

        lineEdit_Write_FunctionCode = new QLineEdit(groupBox_2);
        lineEdit_Write_FunctionCode->setObjectName(QStringLiteral("lineEdit_Write_FunctionCode"));
        lineEdit_Write_FunctionCode->setReadOnly(true);

        gridLayout_8->addWidget(lineEdit_Write_FunctionCode, 4, 1, 1, 1);

        lineEdit_Write_WordNum = new QLineEdit(groupBox_2);
        lineEdit_Write_WordNum->setObjectName(QStringLiteral("lineEdit_Write_WordNum"));
        lineEdit_Write_WordNum->setReadOnly(true);

        gridLayout_8->addWidget(lineEdit_Write_WordNum, 6, 1, 1, 1);

        lineEdit_Write_StartAddress = new QLineEdit(groupBox_2);
        lineEdit_Write_StartAddress->setObjectName(QStringLiteral("lineEdit_Write_StartAddress"));

        gridLayout_8->addWidget(lineEdit_Write_StartAddress, 5, 1, 1, 1);

        lineEdit_Write_addressCode = new QLineEdit(groupBox_2);
        lineEdit_Write_addressCode->setObjectName(QStringLiteral("lineEdit_Write_addressCode"));

        gridLayout_8->addWidget(lineEdit_Write_addressCode, 3, 1, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_8->addWidget(label_3, 0, 0, 1, 1);

        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_8->addWidget(label_17, 7, 0, 1, 1);

        lineEdit_Write_byteNum = new QLineEdit(groupBox_2);
        lineEdit_Write_byteNum->setObjectName(QStringLiteral("lineEdit_Write_byteNum"));
        lineEdit_Write_byteNum->setReadOnly(true);

        gridLayout_8->addWidget(lineEdit_Write_byteNum, 7, 1, 1, 1);

        lineEdit_Write_Data = new QLineEdit(groupBox_2);
        lineEdit_Write_Data->setObjectName(QStringLiteral("lineEdit_Write_Data"));

        gridLayout_8->addWidget(lineEdit_Write_Data, 8, 1, 1, 1);

        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_8->addWidget(label_11, 1, 0, 1, 1);

        lineEdit_Write_Protocol = new QLineEdit(groupBox_2);
        lineEdit_Write_Protocol->setObjectName(QStringLiteral("lineEdit_Write_Protocol"));
        lineEdit_Write_Protocol->setReadOnly(true);

        gridLayout_8->addWidget(lineEdit_Write_Protocol, 1, 1, 1, 1);

        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_8->addWidget(label_12, 2, 0, 1, 1);

        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_8->addWidget(label_18, 8, 0, 1, 1);

        comboBox_Write_DataFormat = new QComboBox(groupBox_2);
        comboBox_Write_DataFormat->setObjectName(QStringLiteral("comboBox_Write_DataFormat"));

        gridLayout_8->addWidget(comboBox_Write_DataFormat, 9, 1, 1, 1);

        label_23 = new QLabel(groupBox_2);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout_8->addWidget(label_23, 9, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_8, 0, 0, 1, 1);

        textEdit_Write = new QTextEdit(groupBox_2);
        textEdit_Write->setObjectName(QStringLiteral("textEdit_Write"));

        gridLayout_9->addWidget(textEdit_Write, 1, 0, 1, 1);

        pushButton_Write = new QPushButton(groupBox_2);
        pushButton_Write->setObjectName(QStringLiteral("pushButton_Write"));

        gridLayout_9->addWidget(pushButton_Write, 2, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 0, 0, 1, 1);

        splitter->addWidget(widget_Write);

        gridLayout_2->addWidget(splitter, 0, 0, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_10 = new QGridLayout(groupBox_3);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        lineEdit = new QLineEdit(groupBox_3);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_10->addWidget(lineEdit, 0, 0, 1, 1);

        pushButton = new QPushButton(groupBox_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_10->addWidget(pushButton, 1, 0, 1, 1);

        textEdit = new QTextEdit(groupBox_3);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout_10->addWidget(textEdit, 2, 0, 1, 1);


        gridLayout->addWidget(groupBox_3, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1186, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\351\273\230\350\256\244\350\256\276\347\275\256", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "\345\215\217\350\256\256\346\240\207\350\257\206\357\274\232", Q_NULLPTR));
        lineEdit_DefaultProtocol->setText(QApplication::translate("MainWindow", "0000", Q_NULLPTR));
        lineEdit_DefaultWriteCode->setText(QApplication::translate("MainWindow", "06", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "\350\257\273\345\212\237\350\203\275\347\240\201\357\274\232", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "\345\206\231\345\212\237\350\203\275\347\240\201\357\274\232", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "\344\274\240\350\276\223\346\240\207\345\277\227\357\274\232", Q_NULLPTR));
        lineEdit_DefaultReadCode->setText(QApplication::translate("MainWindow", "03", Q_NULLPTR));
        lineEdit_DefaultTransmission->setText(QApplication::translate("MainWindow", "0000", Q_NULLPTR));
        pushButton_UpdataDefaultSet->setText(QApplication::translate("MainWindow", "\344\277\256\346\224\271\351\273\230\350\256\244\350\256\276\347\275\256", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "IP\345\234\260\345\235\200\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\347\253\257\345\217\243\345\217\267\357\274\232", Q_NULLPTR));
        pushButton_Connect->setText(QApplication::translate("MainWindow", "\350\277\236\346\216\245", Q_NULLPTR));
        pushButton_DisConnect->setText(QApplication::translate("MainWindow", "\346\226\255\345\274\200\350\277\236\346\216\245", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\350\257\273\345\200\274", Q_NULLPTR));
        lineEdit_Read_Protocol->setText(QApplication::translate("MainWindow", "0000", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\350\265\267\345\247\213\345\234\260\345\235\200\357\274\232", Q_NULLPTR));
        lineEdit_Read_Length->setText(QApplication::translate("MainWindow", "0001", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "\345\257\204\345\255\230\345\231\250\346\225\260\351\207\217\357\274\232", Q_NULLPTR));
        lineEdit_Read_StartAddress->setText(QApplication::translate("MainWindow", "0001", Q_NULLPTR));
        lineEdit_Read_PDU->setText(QApplication::translate("MainWindow", "0006", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\344\274\240\350\276\223\346\240\207\345\277\227\357\274\232", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "PDU\351\225\277\345\272\246\357\274\232", Q_NULLPTR));
        lineEdit_Read_FunctionCode->setText(QApplication::translate("MainWindow", "03", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\345\212\237\350\203\275\347\240\201\357\274\232", Q_NULLPTR));
        lineEdit_Read_addressCode->setText(QApplication::translate("MainWindow", "01", Q_NULLPTR));
        lineEdit_Read_Transmission->setText(QApplication::translate("MainWindow", "0000", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\345\234\260\345\235\200\347\240\201\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\345\215\217\350\256\256\346\240\207\350\257\206\357\274\232", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\347\261\273\345\236\213\357\274\232", Q_NULLPTR));
        comboBox_Read_DataFormat->clear();
        comboBox_Read_DataFormat->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\346\265\256\347\202\271\357\274\2104byte\357\274\211", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\255\227\347\254\246\357\274\2102byte\357\274\211", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\346\225\264\345\275\242\357\274\2102byte\357\274\211", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\270\203\345\260\224\357\274\2101byte\357\274\211", Q_NULLPTR)
        );
        pushButton_Read->setText(QApplication::translate("MainWindow", "\350\257\273\345\217\226", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\345\206\231\345\200\274", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "\345\234\260\345\235\200\347\240\201\357\274\232", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\350\265\267\345\247\213\345\234\260\345\235\200\357\274\232", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "\345\212\237\350\203\275\347\240\201\357\274\232", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "\345\206\231word\347\232\204\346\225\260\351\207\217\357\274\232", Q_NULLPTR));
        lineEdit_Write_StartAddress->setText(QApplication::translate("MainWindow", "01", Q_NULLPTR));
        lineEdit_Write_addressCode->setText(QApplication::translate("MainWindow", "01", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\344\274\240\350\276\223\346\240\207\345\277\227\357\274\232", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "\345\206\231\345\255\227\350\212\202\347\232\204\346\225\260\351\207\217\357\274\232", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "\345\215\217\350\256\256\346\240\207\350\257\206\357\274\232", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "PDU\351\225\277\345\272\246\357\274\232", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\200\274\357\274\232", Q_NULLPTR));
        comboBox_Write_DataFormat->clear();
        comboBox_Write_DataFormat->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\346\265\256\347\202\271\357\274\2104byte\357\274\211", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\346\225\264\345\275\242", Q_NULLPTR)
        );
        label_23->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\347\261\273\345\236\213:", Q_NULLPTR));
        pushButton_Write->setText(QApplication::translate("MainWindow", "\345\206\231\345\205\245", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

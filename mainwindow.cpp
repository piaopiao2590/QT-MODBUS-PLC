#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <Windows.h>
#include <iostream>

#pragma execution_character_set("utf-8")

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_pPLCServer = new ThreadForPLCTcpServer;

    SetDefaultParam();
    connect(m_pPLCServer, &ThreadForPLCTcpServer::SignalReturnMessage, this, &MainWindow::ShowMessage);
    connect(m_pPLCServer, &ThreadForPLCTcpServer::SignalGetReadFormat, this, &MainWindow::ReturnReadFormat);

    ui->groupBox_3->hide();
    this->setWindowTitle("ModbusTcpDemo");
}

MainWindow::~MainWindow()
{
    delete m_pPLCServer;

    delete ui;
}

void MainWindow::SetDefaultParam()
{
    s_DefaultCodeParam m_sDefaultParam;
    m_sDefaultParam.DefaultProtocol = ui->lineEdit_DefaultProtocol->text();
    m_sDefaultParam.DefaultTransmission = ui->lineEdit_DefaultTransmission->text();
    m_sDefaultParam.DefaultReadCode = ui->lineEdit_DefaultReadCode->text();
    m_sDefaultParam.DefaultWriteCode = ui->lineEdit_DefaultWriteCode->text();


    ui->lineEdit_Read_Transmission->setText(m_sDefaultParam.DefaultTransmission);
    ui->lineEdit_Write_Transmission->setText(m_sDefaultParam.DefaultTransmission);

    ui->lineEdit_Read_Protocol->setText(m_sDefaultParam.DefaultProtocol);
    ui->lineEdit_Write_Protocol->setText(m_sDefaultParam.DefaultProtocol);

    ui->lineEdit_Read_FunctionCode->setText(m_sDefaultParam.DefaultReadCode);
    ui->lineEdit_Write_FunctionCode->setText(m_sDefaultParam.DefaultWriteCode);

    m_pPLCServer->SetDefaultParam(m_sDefaultParam);
}

void MainWindow::ReturnReadFormat(QString &str)
{
    QString currenttxt = ui->comboBox_Read_DataFormat->currentText();
    str = currenttxt;
}

void MainWindow::ShowMessage(int Type, const QString &strMessage)
{
    if(Type == 0)
    {
        ui->textEdit_ConnectState->append(strMessage);
    }
    else if(Type == 1)
    {
        ui->textEdit_Read->append(strMessage);
    }else if(Type == 2)
    {
        ui->textEdit_Write->append(strMessage);
    }
}

void MainWindow::on_pushButton_Connect_clicked()
{
    s_TCPInitParam InitParam;
    QString strTcpIP = ui->lineEdit_IP->text();
    QString strTcpPort = ui->lineEdit_Port->text();

    InitParam.strIP = strTcpIP;
    InitParam.iPort = strTcpPort.toInt();
    m_pPLCServer->Init(InitParam);

    m_pPLCServer->ConnectToServer();
}

void MainWindow::on_pushButton_DisConnect_clicked()
{

}

void MainWindow::on_pushButton_Read_clicked()
{
    QString strTransmission = ui->lineEdit_Read_Transmission->text();
    QString strProtocol = ui->lineEdit_Read_Protocol->text();
    QString strPDU = ui->lineEdit_Read_PDU->text();
    QString strAddressCode = ui->lineEdit_Read_addressCode->text();
    QString strFunctionCode = ui->lineEdit_Read_FunctionCode->text();
    QString strStartAddress = ui->lineEdit_Read_StartAddress->text();
    QString strLength = ui->lineEdit_Read_Length->text();


    QString strSendAddressCode = QString("%1").arg(strAddressCode.toInt(), 2, 16, QChar('0'));
    QString strSendStartAddress = QString("%1").arg(strStartAddress.toInt(), 4, 16, QChar('0'));
    QString strSendLength = QString("%1").arg(strLength.toInt(), 4, 16, QChar('0'));

    QString strPduData = strSendAddressCode + strFunctionCode + strSendStartAddress + strSendLength;
    QString strSendPDU = QString("%1").arg(strPduData.length() / 2, 4, 16, QChar('0'));
    ui->lineEdit_Read_PDU->setText(strSendPDU);
    QString strShowData = QString("%1 : %2 ; %3 : %4 ; %5 : %6 ; %7 : %8 ; %9 : %10 ; %11 : %12 ; %13 : %14 ;").
            arg("传输标志").arg(strTransmission).
            arg("\n协议标识").arg(strProtocol).
            arg("\nPDU长度").arg(strSendPDU).
            arg("\n地址码").arg(strSendAddressCode).
            arg("\n功能码").arg(strFunctionCode).
            arg("\n数据起始地址").arg(strSendStartAddress).
            arg("\n数据长度").arg(strSendLength);

    QString strSendData = strTransmission + strProtocol + strSendPDU + strPduData;

    ui->textEdit_Read->append(strShowData);
    ui->textEdit_Read->append(strSendData);
    if(m_pPLCServer)
    {
        m_pPLCServer->SendData(strSendData);
        m_pPLCServer->ReceiveData();
    }
}

void MainWindow::on_pushButton_clicked()
{
//    QString str = ui->lineEdit->text();
//    //QString showstr = QString("%1").arg(str.toInt(), 2, 16, QChar('0'));

//    QString showstr = QString("%1").arg(str.length(), 2, 16, QChar('0'));


    QByteArray data;
    data[0] = 0x61;
    data[1] = 0x62;
    int count = data.size();
    const char *c;
    c = data.data();
    std::string str1;

    for(int _j = 0; _j < count; _j++)
    {
        str1.push_back(c[_j]);
    }
    //value = QString::fromStdString(str1);


//    char c[2];
//    c[0] = 0x61;
//    c[1] = 0x62;
//    str1.push_back(c[0]);
//    str1.push_back(c[1]);

    QString str = QString::fromStdString(str1);


    ui->textEdit->append(str);
}

void MainWindow::on_pushButton_UpdataDefaultSet_clicked()
{
    SetDefaultParam();
}

void MainWindow::on_pushButton_Write_clicked()
{
    QString strTransmission = ui->lineEdit_Write_Transmission->text();
    QString strProtocol = ui->lineEdit_Write_Protocol->text();
    QString strPDU = ui->lineEdit_Write_PDU->text();
    QString strAddressCode = ui->lineEdit_Write_addressCode->text();
    QString strFunctionCode = ui->lineEdit_Write_FunctionCode->text();
    QString strStartAddress = ui->lineEdit_Write_StartAddress->text();
    QString strWordLength = ui->lineEdit_Write_WordNum->text();
    QString strByteLength = ui->lineEdit_Write_byteNum->text();
    QString strData = ui->lineEdit_Write_Data->text();


    QString strSendAddressCode = QString("%1").arg(strAddressCode.toInt(), 2, 16, QChar('0'));
    QString strSendStartAddress = QString("%1").arg(strStartAddress.toInt(), 4, 16, QChar('0'));
    //数据长度
    QString strDataWordLength;
    QString strDataByteLength;
    QString strDataFormat = ui->comboBox_Write_DataFormat->currentText();

    QString strTransform;

    QString strHexValue = "";
    QString strParamValue = "";
    QString strValue = "";
    if(strDataFormat.contains("Float"))
    {
        union change
        {
           float d;
           unsigned int m;
        }r1;

        r1.d = strData.toFloat();

        strTransform = QString("%1").arg(r1.m,8,16,QChar('0'));

        QString lowWord = strTransform.mid(0,4);
        QString heighWord = strTransform.mid(4,4);
        strTransform = heighWord+lowWord;

        strDataWordLength = "2";
        strDataByteLength = "4";
    }
    else if(strDataFormat.compare("DInt（4byte-2word）") == 0)
    {
        strTransform = QString("%1").arg(strData.toInt(), 8, 16, QChar('0'));
        strDataWordLength = QString("%1").arg(((strTransform.length() - 1) / 4) + 1);

        strHexValue = QString("%1").arg(strData.toInt(), strDataWordLength.toInt() * 4, 16, QChar('0')).right(strDataWordLength.toInt() * 4);

        QStringList listStrValue;
        for (int i = 0; i < strDataWordLength; ++i)
        {
            listStrValue.push_back(strHexValue.mid(i * 4, 4));
        }
        for (int i = (int)listStrValue.size(); i > 0; --i)
        {
            strValue += listStrValue.at(i - 1);
        }

        strTransform = strValue;
        strDataByteLength = QString("%1").arg(strDataWordLength.toInt() * 2);
    }
    else if(strDataFormat.compare("Int（2byte-1word）") == 0)
    {
        strTransform = QString("%1").arg(strData.toInt(), 4, 16, QChar('0'));
        strDataWordLength = "1";
        strDataByteLength = "2";
    }
    else if(strDataFormat.compare("str") == 0)
    {
		QString str = "";

        QByteArray bytes = strData.toUtf8();
        QString tem = bytes.toHex();
		for (int i = 0; i < tem.count(); i++)
		{
			str.push_back(tem.at(i));
			if (i % 2 == 1 && i != 0)
			{
                //str.push_back('');
			}
		}
         strTransform = str;
         strDataWordLength = QString("%1").arg((strTransform.size()-1) / 4 + 1);
         strDataByteLength = QString::number(strDataWordLength.toInt()*2);
    }
    else if(strDataFormat.compare("bool（2byte-1word）") == 0)
    {
        if(strData.toInt())
            strTransform = "0001";
        else
            strTransform = "0000";

        strDataWordLength = "1";
        strDataByteLength = "2";
    }

    strParamValue += strTransform;


    QString strSendDataWordLength = QString("%1").arg(strDataWordLength.toInt(), 4, 16, QChar('0'));
    QString strSendDataByteLength = QString("%1").arg(strDataByteLength.toInt(), 2, 16, QChar('0'));

    ui->lineEdit_Write_WordNum->setText(strSendDataWordLength);
    ui->lineEdit_Write_byteNum->setText(strSendDataByteLength);
    //pdu
    QString strPduData = strSendAddressCode + strFunctionCode + strSendStartAddress + strSendDataWordLength + strSendDataByteLength + strParamValue;
    QString strSendPDU = QString("%1").arg(strPduData.length() / 2, 4, 16, QChar('0'));//单位为字节

    ui->lineEdit_Write_PDU->setText(strSendPDU);
    //头部+pdu长度+pdu
    QString sendData = strTransmission + strProtocol + strSendPDU + strPduData;


    QString strShowData = QString("%1 : %2 ; %3 : %4 ; %5 : %6 ; %7 : %8 ; %9 : %10 ; %11 : %12 ; %13 : %14 ; %15 : %16 ; %17 : %18 ;").
            arg("传输标志").arg(strTransmission).
            arg("\n协议标识").arg(strProtocol).
            arg("\nPDU长度").arg(strSendPDU).
            arg("\n地址码").arg(strSendAddressCode).
            arg("\n功能码").arg(strFunctionCode).
            arg("\n数据起始地址").arg(strSendStartAddress).
            arg("\n数据word长度").arg(strSendDataWordLength).
            arg("\n数据字节长度").arg(strSendDataByteLength).
            arg("\n数据").arg(strParamValue);

    ui->textEdit_Write->append(strShowData);
    ui->textEdit_Write->append(sendData);

    if(m_pPLCServer)
    {
        m_pPLCServer->SendData(sendData);
        m_pPLCServer->ReceiveData();
    }
}

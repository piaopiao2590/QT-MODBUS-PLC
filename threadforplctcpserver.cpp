#include "threadforplctcpserver.h"
#include <windows.h>
#include "time.h"

ThreadForPLCTcpServer::ThreadForPLCTcpServer(QObject *parent):QThread(parent)
{
    m_bIsConnected = false;
    m_bNeedConnect = false;
}

ThreadForPLCTcpServer::~ThreadForPLCTcpServer()
{
    m_bThreaStopped = true;
    wait();
}

void ThreadForPLCTcpServer::Init(const s_TCPInitParam &InitParam)
{
    m_sInitParam = InitParam;
    m_bThreaStopped = false;
    start();
}

void ThreadForPLCTcpServer::SetDefaultParam(const s_DefaultCodeParam &DefaultParam)
{
   m_sDefaultParam = DefaultParam;
}

void ThreadForPLCTcpServer::ConnectToServer()
{
    m_bNeedConnect = true;
}

void ThreadForPLCTcpServer::DisConnectServer()
{
    m_bNeedConnect = false;
}

bool ThreadForPLCTcpServer::ReceiveData()
{
    if(m_bIsConnected)
    {
        if(m_pTcpSocket->waitForReadyRead())
        {
            QByteArray data = m_pTcpSocket->readAll();
            QByteArray hexData = data.toHex();
            ModbusAnalysisData(hexData);

            return true;
        }
        emit SignalReturnMessage(0, "receive data timeout");
    }
    else
    {
        emit SignalReturnMessage(0, "not connected");
    }

    return false;
}

void ThreadForPLCTcpServer::ModbusAnalysisData(const QByteArray &data)
{
    /*读保持寄存器
    字节      值       解释
    0-1     00 01     为事务独立性的标识
    2-3     00 00     modbus协议值为0
    4-5     00 05     为pdu长度
    6       01        plc设备地址
    7       03        功能码
    8       02        字节数
    9-10	03 E8	  读取的字节数据
    */

    /*写多个保持寄存器
    字节      值       解释
    0-1     00 02	  为事务独立性的标识
    2-3     00 00	  modbus协议值为0
    4-5 	00 06	  为pdu长度
    6       01        plc设备地址
    7       10        功能码
    8-9     00 01	  数据起始地址
    10-11	00 01	  写word的数量(dword就为2)
    */
    QString strAnalysisData = QString(data);

    emit SignalReturnMessage(1, QString("AnalysisData : %1").arg(strAnalysisData));


    if (data.length() < 20)
    {
        emit SignalReturnMessage(1, QString("data frame format error, data length: %1, data: %2").arg(data.length()).arg(QString(data)));
        return;
    }

    QString workInfo = QString(data.mid(0, 4));
    if(workInfo.compare(m_sDefaultParam.DefaultTransmission) != 0)//事务独立识校验
    {
        emit SignalReturnMessage(1, QString("data frame format work info error, work info: %1, data: %2").arg(workInfo).arg(QString(data)));
        return;
    }
    QString agreementInfo = QString(data.mid(4, 4));
    if(agreementInfo.compare(m_sDefaultParam.DefaultProtocol) != 0)//协议值校验
    {
        emit SignalReturnMessage(1, QString("data frame format agreement info error, agreement info: %1, data: %2").arg(agreementInfo).arg(QString(data)));
        return;
    }

    QString pduLength = QString(data.mid(8, 4));
    QString pduInfo = QString(data.mid(12, -1));

    if(pduInfo.length() != pduLength.toInt(NULL, 16) * 2)//pdu长度校验
    {
        emit SignalReturnMessage(1, QString("data frame format pdu length error, pdu length: %1, data: %2").arg(agreementInfo).arg(QString(data)));
        return;
    }

//    if(m_mMotionParamInfo.find(param) == m_mMotionParamInfo.end())
//    {
//        LOG_ERROR(QString("param not find, param: %1, data: %2").arg(param).arg(QString(data)));
//        return;
//    }
//    s_MotionParamInfo &paramInfo = m_mMotionParamInfo[param];

    QString cmdInfo = QString(data.mid(14, 2));//功能码
    if(cmdInfo.compare(m_sDefaultParam.DefaultWriteCode) == 0)//写入多个保持寄存器
    {
        emit SignalReturnMessage(0, QString("Write ok"));
    }
    else if(cmdInfo.compare(m_sDefaultParam.DefaultReadCode) == 0)//读保持寄存器
    {
        QString dataLength = QString(data.mid(16, 2));
        QByteArray byteValue = data.mid(18, -1);
        if(byteValue.length() != dataLength.toInt(NULL, 16) * 2)//数据长度校验
        {
            emit SignalReturnMessage(1, QString("data frame format data length error, data length: %1, data: %2").arg(dataLength).arg(QString(data)));
            return;
        }
//        if (byteValue.length() != paramInfo.paramLength * m_iCurrentWRNum * 4)//数据长度校验
//        {
//            LOG_ERROR(QString("data frame format data length not equal request length, request length: %1 byte, data: %2").arg(paramInfo.paramLength * m_iCurrentWRNum * 2).arg(QString(data)));
//            return;
//        }

        //数据解析
        QString str = ParsParamValue(byteValue, byteValue.length()/4);
        emit SignalReturnMessage(1, QString("Value : %1").arg(str));

    }
    else
    {
        emit SignalReturnMessage(1, QString("unknown commond, commond: %1, data: %2").arg(cmdInfo).arg(QString(data)));
    }
}

void ThreadForPLCTcpServer::run()
{
    while(!m_bThreaStopped)
    {
        clock_t startTime = clock();
        if (m_pTcpSocket == nullptr)
        {
            m_pTcpSocket = new QTcpSocket;
            connect(m_pTcpSocket, &QTcpSocket::connected, this, &ThreadForPLCTcpServer::onConnected);
            connect(m_pTcpSocket, &QTcpSocket::disconnected, this, &ThreadForPLCTcpServer::onDisConnected);
        }

        if (!m_bIsConnected && m_bNeedConnect)
        {
            emit SignalReturnMessage(0, QString("try connect server, ip: %1, port: %2").arg(m_sInitParam.strIP).arg(m_sInitParam.iPort));
            m_pTcpSocket->connectToHost(m_sInitParam.strIP, m_sInitParam.iPort);
            m_bIsConnected = m_pTcpSocket->waitForConnected(m_sInitParam.iConnectTimeOut);
        }
        else if (m_bIsConnected && !m_bNeedConnect)
        {
            m_pTcpSocket->disconnectFromHost();
            continue;
        }

        clock_t endTime = clock();
        Sleep(1);
    }

    if (m_pTcpSocket != nullptr)
    {
        m_pTcpSocket->close();
        delete m_pTcpSocket;
    }
}

void ThreadForPLCTcpServer::onConnected()
{
    emit SignalReturnMessage(0, QString("onConnected server, ip: %1, port: %2").arg(m_sInitParam.strIP).arg(m_sInitParam.iPort));
}

void ThreadForPLCTcpServer::onDisConnected()
{
    m_bIsConnected = false;

    if(m_sInitParam.bAutoReConnect)
        m_bNeedConnect = true;
    else
        m_bNeedConnect = false;
    emit SignalReturnMessage(0, QString("onDisConnected server, ip: %1, port: %2").arg(m_sInitParam.strIP).arg(m_sInitParam.iPort));
}

bool ThreadForPLCTcpServer::SendData(const QString &data)
{
    if(m_bIsConnected)
    {
        int writtenSize = m_pTcpSocket->write(QByteArray::fromHex(data.toUtf8()));
        if(writtenSize == -1)
        {
            emit SignalReturnMessage(1, "an error occurred when writing data!");
            return false;
        }
        return m_pTcpSocket->flush();
    }
    else
    {
        emit SignalReturnMessage(0, "not connected");
        return false;
    }

}

QString ThreadForPLCTcpServer::ParsParamValue(const QByteArray &data, const int paramLength)
{

    QString strReadFormat = "";
    emit SignalGetReadFormat(strReadFormat);
    QString value = "";
    if (paramLength == 1)
    {
        value = QString::number((INT16)data.toUInt(NULL, 16));
    }
    else if(strReadFormat.contains("char"))
    {
        std::string str1;
        int count = data.size();
        const char *c;
        c = data.data();

        for(int _j = 0; _j < count; _j++)
        {
            str1.push_back(c[_j]);
        }
        value = QString::fromStdString(str1);
    }
    else if(strReadFormat.contains("Float"))
    {
        QString hexstr = QString(data);
        bool ok;
        QString lowWord = hexstr.mid(0,4);
        QString heighWord = hexstr.mid(4,4);
        QString finalValue = heighWord+lowWord;
        int hexnum = finalValue.toInt(&ok,16); // 表示以16进制方式读取字符串

        union change
        {
           float d;
           unsigned int m;
        }r1;

        r1.m = hexnum;
        value = QString("%1").arg(r1.d);
    }
    else if(strReadFormat.compare("str") == 0)
    {
        std::string str1;
        int count = data.size();
		int num = count / 2;

		std::vector<QString> vecStr;

		for (int numindex = 0; numindex < num; numindex++)
		{
			QString s = data.mid(numindex * 2, 2);
			vecStr.push_back(s);
		}

        QString strReturn = "";
        for(int _i = 0; _i < num; _i++)
        {
            if(_i % 2 == 1)
            {

                int asd1 = QString("%1").arg(vecStr.at(_i)).toInt(0,16);
                QChar cha1 = QChar(asd1);
                strReturn += cha1;

                int asd = QString("%1").arg(vecStr.at(_i - 1)).toInt(0,16);
                QChar cha = QChar(asd);
                strReturn += cha;
            }
        }
        value = strReturn;
    }
    else if(strReadFormat.compare("bool（1word）") == 0)
    {
        QString s = data.mid(0, 2);
        if(s.compare("01") == 0)
            value = "1";
        else
            value = "0";
    }
    else
    {
        QByteArrayList listByParamValue;
        for (int i = 0; i < paramLength; ++i)
        {
            listByParamValue.push_back(data.mid(i * 4, 4));
        }
        QString strParamValue = "";
        for (int i = (int)listByParamValue.size(); i > 0; --i)
        {
            strParamValue += QString(listByParamValue.at(i - 1));
        }

        if (paramLength == 2)
        {
            value = QString::number((INT32)strParamValue.toUInt(NULL, 16));
        }
        else if (paramLength == 4)
        {
            value = QString::number((INT64)strParamValue.toUInt(NULL, 16));
        }
        else
        {
            emit SignalReturnMessage(1, QString("param length error, length: %1").arg(paramLength));
        }
    }
    return value;
}

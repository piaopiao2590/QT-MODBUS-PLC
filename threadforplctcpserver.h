#ifndef THREADFORPLCTCPSERVER_H
#define THREADFORPLCTCPSERVER_H
#include <QThread>
#include <QTcpSocket>
#include <QMutex>
#include <QTime>
#include <QObject>

struct s_TCPInitParam
{
    QString strIP;
    int iPort;
    bool bAutoReConnect;
    int iConnectTimeOut;
    int iPLCType;//PLC协议：0-Fins，1-modbus

    s_TCPInitParam()
    {
        strIP = "0.0.0.0";
        iPort = 0;
        bAutoReConnect = false;
        iConnectTimeOut = 5000;
        iPLCType = 0;
    }
};

struct s_DefaultCodeParam
{
    QString DefaultTransmission;
    QString DefaultProtocol;
    QString DefaultReadCode;
    QString DefaultWriteCode;


    s_DefaultCodeParam()
    {
        DefaultTransmission = "0000";
        DefaultProtocol = "0000";
        DefaultReadCode = "03";
        DefaultWriteCode = "06";
    }
};

class ThreadForPLCTcpServer : public QThread
{
    Q_OBJECT
public:
    ThreadForPLCTcpServer(QObject *parent = nullptr);

    ~ThreadForPLCTcpServer();

    void Init(const s_TCPInitParam &InitParam);
    void SetDefaultParam(const s_DefaultCodeParam &m_sDefaultParam);
    void ConnectToServer();
    void DisConnectServer();
    bool IsConnectedServer();

    bool ReceiveData();
    void ModbusAnalysisData(const QByteArray &data);
    void ModbusSetPLCParam(const QString &dataAddress, const int dataLength, const QString &paramValue);

    //modbus协议

    bool SendData(const QString &data);

    QString ParsParamValue(const QByteArray &data, const int paramLength);
signals:
    void SignalReturnMessage(int Type, const QString &strMessage);
    void SignalGetReadFormat(QString &str);

protected:
    virtual void run();

private:
    void onConnected();
    void onDisConnected();


    QTcpSocket * m_pTcpSocket = nullptr;
    bool m_bIsConnected;//是否连接状态
    bool m_bNeedConnect;//是否连接
    bool m_bThreaStopped;//while循环是否停止

    s_TCPInitParam m_sInitParam;
    s_DefaultCodeParam m_sDefaultParam;
};

#endif // THREADFORPLCTCPSERVER_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <threadforplctcpserver.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void SetDefaultParam();
    void ReturnReadFormat(QString &str);

private slots:
    void on_pushButton_Connect_clicked();

    void on_pushButton_DisConnect_clicked();

    void on_pushButton_Read_clicked();

    void ShowMessage(int Type, const QString &strMessage);


    void on_pushButton_clicked();

    void on_pushButton_UpdataDefaultSet_clicked();

    void on_pushButton_Write_clicked();

private:
    Ui::MainWindow *ui;

    ThreadForPLCTcpServer * m_pPLCServer = nullptr;
};

#endif // MAINWINDOW_H

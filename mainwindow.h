#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QFileDialog>
#include <QDebug>
#include <QFileInfo>
#include <QUrl>
#include <QTime>
#include <QTimer>
#include <QtGui>
#include <QByteArray>
#include <QFile>
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

   ~MainWindow();

private slots:
    void on_loadFile_clicked();

    void SetWorkDir(QString workDir);
    void SetFileName(QString name);
    void ReadFile(QString path);
    void SavePathTargetFile(QString path);
    QString GetPathFile();
    void CheckNeedDeleteFile();
    void SetData(QByteArray data);
    void SetRouteSavedFile(QString dir);
    void ChangingData();
    void WriteData(QByteArray data);
    void ObserverWorkDir();
    QString FindName();


    void on_activateTimer_clicked();

    void on_singleStart_clicked();

    void on_selectRoute_clicked();

    void on_activateDirTimer_clicked();

private:
    Ui::MainWindow *ui;

    QString workDir;
    QString fileName;
    QString pathTargetFile;
    QByteArray inputData;
    QString routeDir;
    QTimer *tmr;
    QTimer *tmrDir;
};

#endif // MAINWINDOW_H

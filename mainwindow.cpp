#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    tmr = new QTimer(this);
    tmrDir = new QTimer(this);

    SetWorkDir(QDir::currentPath());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loadFile_clicked()
{
    QString path;
    path = QFileDialog::getOpenFileName(this,tr("Open file"),"../","*.txt *.bin",0);

    ReadFile(path);
}

void MainWindow::ReadFile(QString path)
{
    QFile file(path);
    if(!file.open(QIODevice::ReadOnly))
        return;

    QString fileName;
    QFileInfo info(path);
    fileName = info.baseName();
    SetFileName(fileName);

    QByteArray data;
    data = file.readAll();

    if(ui->deleteFile->isChecked()){
        file.remove();
    }

    SetData(data);
}

QString MainWindow::FindName()
{
    QString fileNameForWrite;
    if(ui->reWriteCheck->isChecked()){
       fileNameForWrite = fileName + QString(".txt");
    }else{
        int addNumber = 1;
        while(true){
            QString mbName = fileName + QString::number(addNumber,10) + QString(".txt");
            qDebug() << QString("mb") << QString(mbName);

            QFile checkFile( routeDir + QString("/") + mbName);
            if(checkFile.exists(routeDir + QString("/") + mbName)){
                addNumber++;
            }else{
                fileNameForWrite = mbName;
                break;
            }
        }
    }
    return fileNameForWrite;
}

void MainWindow::ChangingData()
{
    QString key = ui->inputKey->text();
    if(!key.isEmpty()){

        if(key.length()<64 && !key.isEmpty()){
            while(key.length()<64){
                key.prepend("0");
            }
        }

        QByteArray ba_key = QByteArray::fromHex(key.toLocal8Bit());
        QByteArray dataForWriteInFile;

        for(int i=0; i<inputData.size(); ++i){
            dataForWriteInFile[i] = inputData[i] ^ ba_key[i % ba_key.size()];
        }
        WriteData(dataForWriteInFile);
    }else{
        WriteData(inputData);
    }
}


void MainWindow::WriteData(QByteArray data)
{
    QString fileNameForWrite = FindName();
    QFile buildFile( routeDir + QString("/") + fileNameForWrite);
    buildFile.open(QIODevice::WriteOnly);
    buildFile.write(data);
    buildFile.close();
}

void MainWindow::on_activateTimer_clicked()
{

    if(ui->activateTimer->isChecked()){
        connect(tmr, SIGNAL(timeout()), this, SLOT(ChangingData()));
        QString interval = ui->intervalTimer->text();
        tmr->setInterval(interval.toInt());
        tmr->start();

        ui->activateDirTimer->setDisabled(true);
        ui->deleteFile->setDisabled(true);
        ui->reWriteCheck->setDisabled(true);
        ui->singleStart->setDisabled(true);
        ui->selectRoute->setDisabled(true);
        ui->loadFile->setDisabled(true);

    }else{
        tmr->stop();
        ui->intervalTimer->setText("0");
        disconnect(tmr, SIGNAL(timeout()), this, SLOT(ChangingData()));

        ui->activateDirTimer->setDisabled(false);
        ui->deleteFile->setDisabled(false);
        ui->reWriteCheck->setDisabled(false);
        ui->singleStart->setDisabled(false);
        ui->selectRoute->setDisabled(false);
        ui->loadFile->setDisabled(false);
    }
}

void MainWindow::SetData(QByteArray data){
    inputData = data;
}


void MainWindow::SetRouteSavedFile(QString dir){
    routeDir = dir;
}

void MainWindow::on_singleStart_clicked()
{
    ChangingData();
}

void MainWindow::SetFileName(QString name)
{
    fileName = name;
}

void MainWindow::on_selectRoute_clicked()
{
    QString dir = QFileDialog::getExistingDirectory(this,
                               QString::fromUtf8("Открыть папку"),
                               QDir::currentPath(),
                               QFileDialog::ShowDirsOnly
                               | QFileDialog::DontResolveSymlinks);
    qDebug() << QString(dir);
    SetRouteSavedFile(dir);
}

void MainWindow::SetWorkDir(QString newDir)
{
    workDir = newDir;
}

void MainWindow::ObserverWorkDir(){
    qDebug() << QString("OD!") << QString(workDir) << QString(" " + routeDir);
    if(QString::compare(workDir,routeDir)==0){
        qDebug()<<"off";
        return;
    }
    QStringList myFilter;
    QString mask = "*.txt";
    myFilter << mask;

    QDirIterator dirObserver(workDir,myFilter, QDir::Files);

    while(dirObserver.hasNext()){

        if(!ui->activateDirTimer->isChecked()){
            break;
        }

        dirObserver.next();
        ReadFile(dirObserver.filePath());
        ChangingData();
    }
}


void MainWindow::on_activateDirTimer_clicked()
{
    if(ui->activateDirTimer->isChecked()){
        connect(tmrDir, SIGNAL(timeout()), this, SLOT(ObserverWorkDir()));
        QString interval = ui->intervalDirTimer->text();
        tmrDir->setInterval(interval.toInt());
        tmrDir->start();

        ui->activateTimer->setDisabled(true);
        ui->deleteFile->setDisabled(true);
        ui->reWriteCheck->setDisabled(true);
        ui->singleStart->setDisabled(true);
        ui->selectRoute->setDisabled(true);
        ui->loadFile->setDisabled(true);

    }else{
        tmrDir->stop();
        ui->intervalDirTimer->setText("0");
        disconnect(tmrDir, SIGNAL(timeout()), this, SLOT(ObserverWorkDir()));

        ui->activateTimer->setDisabled(false);
        ui->deleteFile->setDisabled(false);
        ui->reWriteCheck->setDisabled(false);
        ui->singleStart->setDisabled(false);
        ui->selectRoute->setDisabled(false);
        ui->loadFile->setDisabled(false);
    }
}

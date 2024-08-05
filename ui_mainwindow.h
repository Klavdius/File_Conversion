/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLoadFile;
    QWidget *centralWidget;
    QPushButton *loadFile;
    QCheckBox *deleteFile;
    QPushButton *selectRoute;
    QPushButton *singleStart;
    QLabel *label;
    QLineEdit *inputKey;
    QLineEdit *intervalTimer;
    QCheckBox *activateTimer;
    QCheckBox *reWriteCheck;
    QLabel *label_2;
    QLineEdit *intervalDirTimer;
    QLabel *label_3;
    QCheckBox *activateDirTimer;
    QLabel *label_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(665, 305);
        actionLoadFile = new QAction(MainWindow);
        actionLoadFile->setObjectName(QStringLiteral("actionLoadFile"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        loadFile = new QPushButton(centralWidget);
        loadFile->setObjectName(QStringLiteral("loadFile"));
        loadFile->setGeometry(QRect(10, 70, 101, 41));
        deleteFile = new QCheckBox(centralWidget);
        deleteFile->setObjectName(QStringLiteral("deleteFile"));
        deleteFile->setGeometry(QRect(130, 0, 201, 41));
        selectRoute = new QPushButton(centralWidget);
        selectRoute->setObjectName(QStringLiteral("selectRoute"));
        selectRoute->setGeometry(QRect(10, 10, 101, 41));
        singleStart = new QPushButton(centralWidget);
        singleStart->setObjectName(QStringLiteral("singleStart"));
        singleStart->setGeometry(QRect(350, 130, 81, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 170, 91, 21));
        inputKey = new QLineEdit(centralWidget);
        inputKey->setObjectName(QStringLiteral("inputKey"));
        inputKey->setGeometry(QRect(10, 130, 321, 31));
        intervalTimer = new QLineEdit(centralWidget);
        intervalTimer->setObjectName(QStringLiteral("intervalTimer"));
        intervalTimer->setEnabled(true);
        intervalTimer->setGeometry(QRect(440, 10, 71, 21));
        activateTimer = new QCheckBox(centralWidget);
        activateTimer->setObjectName(QStringLiteral("activateTimer"));
        activateTimer->setGeometry(QRect(310, 0, 151, 41));
        reWriteCheck = new QCheckBox(centralWidget);
        reWriteCheck->setObjectName(QStringLiteral("reWriteCheck"));
        reWriteCheck->setGeometry(QRect(130, 40, 141, 31));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(520, 20, 47, 13));
        intervalDirTimer = new QLineEdit(centralWidget);
        intervalDirTimer->setObjectName(QStringLiteral("intervalDirTimer"));
        intervalDirTimer->setEnabled(true);
        intervalDirTimer->setGeometry(QRect(480, 80, 71, 21));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(560, 80, 47, 13));
        activateDirTimer = new QCheckBox(centralWidget);
        activateDirTimer->setObjectName(QStringLiteral("activateDirTimer"));
        activateDirTimer->setGeometry(QRect(310, 40, 341, 41));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(410, 80, 61, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 665, 21));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionLoadFile->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\204\320\260\320\271\320\273", 0));
        loadFile->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\204\320\260\320\271\320\273", 0));
        deleteFile->setText(QApplication::translate("MainWindow", "\321\203\320\264\320\260\320\273\321\217\321\202\321\214 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\321\213\320\271 \321\204\320\260\320\271\320\273", 0));
        selectRoute->setText(QApplication::translate("MainWindow", "\320\232\321\203\320\264\320\260 \321\201\320\276\321\205\321\200\320\260\320\275\321\217\321\202\321\214", 0));
        singleStart->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\277\320\276\320\273\320\275\320\270\321\202\321\214", 0));
        label->setText(QApplication::translate("MainWindow", "\320\274\320\260\321\201\320\272\320\260", 0));
        activateTimer->setText(QApplication::translate("MainWindow", "\321\200\320\260\320\261\320\276\321\202\320\260\321\202\321\214 \320\277\320\276 \321\202\320\260\320\271\320\274\320\265\321\200\321\203", 0));
        reWriteCheck->setText(QApplication::translate("MainWindow", "\321\200\320\260\320\267\321\200\320\265\321\210\320\270\321\202\321\214 \320\277\320\265\321\200\320\265\320\267\320\260\320\277\320\270\321\201\321\214", 0));
        label_2->setText(QApplication::translate("MainWindow", "usec", 0));
        intervalDirTimer->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "usec", 0));
        activateDirTimer->setText(QApplication::translate("MainWindow", "\320\277\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\265\321\201\320\272\320\270 \320\270\320\267\320\274\320\265\320\275\321\217\321\202\321\214 \321\204\320\260\320\271\320\273\321\213 \320\262 \320\264\320\276\320\274\320\260\321\210\320\275\320\265\320\271 \320\264\320\270\321\200\320\265\320\272\321\202\320\276\321\200\320\270\320\270", 0));
        label_4->setText(QApplication::translate("MainWindow", "\320\277\320\265\321\200\320\270\320\276\320\264", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

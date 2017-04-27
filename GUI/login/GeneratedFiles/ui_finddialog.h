/********************************************************************************
** Form generated from reading UI file 'finddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDDIALOG_H
#define UI_FINDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_finddialogClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *finddialogClass)
    {
        if (finddialogClass->objectName().isEmpty())
            finddialogClass->setObjectName(QStringLiteral("finddialogClass"));
        finddialogClass->resize(600, 400);
        menuBar = new QMenuBar(finddialogClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        finddialogClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(finddialogClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        finddialogClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(finddialogClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        finddialogClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(finddialogClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        finddialogClass->setStatusBar(statusBar);

        retranslateUi(finddialogClass);

        QMetaObject::connectSlotsByName(finddialogClass);
    } // setupUi

    void retranslateUi(QMainWindow *finddialogClass)
    {
        finddialogClass->setWindowTitle(QApplication::translate("finddialogClass", "finddialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class finddialogClass: public Ui_finddialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDDIALOG_H

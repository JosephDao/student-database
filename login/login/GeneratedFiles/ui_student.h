/********************************************************************************
** Form generated from reading UI file 'student.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_H
#define UI_STUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentMainWindow
{
public:
    QWidget *centralwidget;
    QTableView *studentView;
    QPushButton *refreshButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *StudentMainWindow)
    {
        if (StudentMainWindow->objectName().isEmpty())
            StudentMainWindow->setObjectName(QStringLiteral("StudentMainWindow"));
        StudentMainWindow->resize(1636, 911);
        StudentMainWindow->setStyleSheet(QLatin1String("QMainWindow {background-color: rgb(235, 239, 240);}\n"
"QPushButton {background-color: rgb(0, 0, 127); color: white; border: 2 px; border-radius: 10 px;}\n"
"\n"
""));
        centralwidget = new QWidget(StudentMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        studentView = new QTableView(centralwidget);
        studentView->setObjectName(QStringLiteral("studentView"));
        studentView->setGeometry(QRect(360, 170, 1281, 731));
        refreshButton = new QPushButton(centralwidget);
        refreshButton->setObjectName(QStringLiteral("refreshButton"));
        refreshButton->setGeometry(QRect(970, 110, 93, 28));
        refreshButton->setMinimumSize(QSize(93, 28));
        StudentMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(StudentMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1636, 26));
        StudentMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(StudentMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        StudentMainWindow->setStatusBar(statusbar);

        retranslateUi(StudentMainWindow);

        QMetaObject::connectSlotsByName(StudentMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *StudentMainWindow)
    {
        StudentMainWindow->setWindowTitle(QApplication::translate("StudentMainWindow", "MainWindow", Q_NULLPTR));
        refreshButton->setText(QApplication::translate("StudentMainWindow", "Refresh", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StudentMainWindow: public Ui_StudentMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_H

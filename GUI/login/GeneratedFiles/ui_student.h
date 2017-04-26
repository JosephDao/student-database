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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentMainWindow
{
public:
    QWidget *centralwidget;
    QTableView *studentView;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *refreshButton;
    QPushButton *classButton;
    QPushButton *gradeButton;
    QPushButton *gpaButton;
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
        studentView->setGeometry(QRect(400, 170, 1281, 731));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(51, 192, 303, 227));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        refreshButton = new QPushButton(widget);
        refreshButton->setObjectName(QStringLiteral("refreshButton"));
        refreshButton->setMinimumSize(QSize(301, 51));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        refreshButton->setFont(font);

        verticalLayout->addWidget(refreshButton);

        classButton = new QPushButton(widget);
        classButton->setObjectName(QStringLiteral("classButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(classButton->sizePolicy().hasHeightForWidth());
        classButton->setSizePolicy(sizePolicy);
        classButton->setMinimumSize(QSize(301, 51));
        classButton->setFont(font);

        verticalLayout->addWidget(classButton);

        gradeButton = new QPushButton(widget);
        gradeButton->setObjectName(QStringLiteral("gradeButton"));
        sizePolicy.setHeightForWidth(gradeButton->sizePolicy().hasHeightForWidth());
        gradeButton->setSizePolicy(sizePolicy);
        gradeButton->setMinimumSize(QSize(301, 51));
        gradeButton->setFont(font);

        verticalLayout->addWidget(gradeButton);

        gpaButton = new QPushButton(widget);
        gpaButton->setObjectName(QStringLiteral("gpaButton"));
        sizePolicy.setHeightForWidth(gpaButton->sizePolicy().hasHeightForWidth());
        gpaButton->setSizePolicy(sizePolicy);
        gpaButton->setMinimumSize(QSize(301, 51));
        gpaButton->setFont(font);

        verticalLayout->addWidget(gpaButton);

        StudentMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(StudentMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1636, 26));
        StudentMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(StudentMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        StudentMainWindow->setStatusBar(statusbar);

        retranslateUi(StudentMainWindow);

        classButton->setDefault(true);
        gradeButton->setDefault(true);
        gpaButton->setDefault(true);


        QMetaObject::connectSlotsByName(StudentMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *StudentMainWindow)
    {
        StudentMainWindow->setWindowTitle(QApplication::translate("StudentMainWindow", "My Personal Information", Q_NULLPTR));
        refreshButton->setText(QApplication::translate("StudentMainWindow", "Student", Q_NULLPTR));
        classButton->setText(QApplication::translate("StudentMainWindow", "Class", Q_NULLPTR));
        gradeButton->setText(QApplication::translate("StudentMainWindow", "Grades", Q_NULLPTR));
        gpaButton->setText(QApplication::translate("StudentMainWindow", "GPA", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StudentMainWindow: public Ui_StudentMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_H

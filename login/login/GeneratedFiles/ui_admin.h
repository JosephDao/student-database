/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminMainWindow
{
public:
    QWidget *centralwidget;
    QTableView *adminView;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *studentButton;
    QPushButton *courseButton;
    QPushButton *classButton;
    QPushButton *editButton;
    QLineEdit *searchLineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AdminMainWindow)
    {
        if (AdminMainWindow->objectName().isEmpty())
            AdminMainWindow->setObjectName(QStringLiteral("AdminMainWindow"));
        AdminMainWindow->resize(1636, 911);
        AdminMainWindow->setStyleSheet(QLatin1String("QMainWindow {background-color: rgb(235, 239, 240);}\n"
"QPushButton {background-color: rgb(0, 0, 127); color: white; border: 2 px; border-radius: 10 px;}\n"
"\n"
""));
        centralwidget = new QWidget(AdminMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        adminView = new QTableView(centralwidget);
        adminView->setObjectName(QStringLiteral("adminView"));
        adminView->setGeometry(QRect(380, 170, 1281, 731));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 180, 313, 169));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        studentButton = new QPushButton(layoutWidget);
        studentButton->setObjectName(QStringLiteral("studentButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(studentButton->sizePolicy().hasHeightForWidth());
        studentButton->setSizePolicy(sizePolicy);
        studentButton->setMinimumSize(QSize(311, 51));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        studentButton->setFont(font);

        verticalLayout->addWidget(studentButton);

        courseButton = new QPushButton(layoutWidget);
        courseButton->setObjectName(QStringLiteral("courseButton"));
        sizePolicy.setHeightForWidth(courseButton->sizePolicy().hasHeightForWidth());
        courseButton->setSizePolicy(sizePolicy);
        courseButton->setMinimumSize(QSize(311, 51));
        courseButton->setFont(font);

        verticalLayout->addWidget(courseButton);

        classButton = new QPushButton(layoutWidget);
        classButton->setObjectName(QStringLiteral("classButton"));
        sizePolicy.setHeightForWidth(classButton->sizePolicy().hasHeightForWidth());
        classButton->setSizePolicy(sizePolicy);
        classButton->setMinimumSize(QSize(311, 51));
        classButton->setFont(font);

        verticalLayout->addWidget(classButton);

        editButton = new QPushButton(centralwidget);
        editButton->setObjectName(QStringLiteral("editButton"));
        editButton->setGeometry(QRect(1230, 60, 51, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(11);
        editButton->setFont(font1);
        editButton->setFocusPolicy(Qt::StrongFocus);
        editButton->setStyleSheet(QStringLiteral("qproperty-icon: url(\":/images/magnifying-glass-clipart.jpg\"); qproperty-iconSize: 58px 58px;"));
        searchLineEdit = new QLineEdit(centralwidget);
        searchLineEdit->setObjectName(QStringLiteral("searchLineEdit"));
        searchLineEdit->setGeometry(QRect(770, 60, 461, 51));
        searchLineEdit->setMinimumSize(QSize(251, 51));
        searchLineEdit->setFont(font1);
        searchLineEdit->setAlignment(Qt::AlignCenter);
        AdminMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AdminMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1636, 26));
        AdminMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AdminMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        AdminMainWindow->setStatusBar(statusbar);

        retranslateUi(AdminMainWindow);

        studentButton->setDefault(true);
        courseButton->setDefault(true);
        classButton->setDefault(true);


        QMetaObject::connectSlotsByName(AdminMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AdminMainWindow)
    {
        AdminMainWindow->setWindowTitle(QApplication::translate("AdminMainWindow", "MainWindow", Q_NULLPTR));
        studentButton->setText(QApplication::translate("AdminMainWindow", "Student", Q_NULLPTR));
        courseButton->setText(QApplication::translate("AdminMainWindow", "Course", Q_NULLPTR));
        classButton->setText(QApplication::translate("AdminMainWindow", "Class", Q_NULLPTR));
        searchLineEdit->setPlaceholderText(QApplication::translate("AdminMainWindow", "optional id", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AdminMainWindow: public Ui_AdminMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H

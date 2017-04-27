/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginClass
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *loginLabel;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QLineEdit *idLineEdit;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *passwordLineEdit;
    QSpacerItem *verticalSpacer_3;
    QPushButton *loginButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *loginClass)
    {
        if (loginClass->objectName().isEmpty())
            loginClass->setObjectName(QStringLiteral("loginClass"));
        loginClass->resize(1155, 668);
        loginClass->setAutoFillBackground(false);
        loginClass->setStyleSheet(QLatin1String("QMainWindow {background-color: white;}\n"
"QLabel {color: rgb(119, 120, 121);}\n"
"QLineEdit {background-color: rgb(236, 240, 241); color:black; border: 2 px; border-radius: 10 px;}\n"
"QPushButton {background-color: rgb(0, 0, 127); color: white; border: 2 px; border-radius: 10 px;}\n"
"\n"
""));
        centralWidget = new QWidget(loginClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(810, 280, 313, 314));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        loginLabel = new QLabel(layoutWidget);
        loginLabel->setObjectName(QStringLiteral("loginLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(loginLabel->sizePolicy().hasHeightForWidth());
        loginLabel->setSizePolicy(sizePolicy);
        loginLabel->setMinimumSize(QSize(111, 61));
        QFont font;
        font.setFamily(QStringLiteral("Arial Unicode MS"));
        font.setPointSize(26);
        font.setBold(true);
        font.setWeight(75);
        loginLabel->setFont(font);

        horizontalLayout->addWidget(loginLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        idLineEdit = new QLineEdit(layoutWidget);
        idLineEdit->setObjectName(QStringLiteral("idLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(idLineEdit->sizePolicy().hasHeightForWidth());
        idLineEdit->setSizePolicy(sizePolicy1);
        idLineEdit->setMinimumSize(QSize(311, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(12);
        idLineEdit->setFont(font1);
        idLineEdit->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(idLineEdit);

        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        passwordLineEdit = new QLineEdit(layoutWidget);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));
        sizePolicy1.setHeightForWidth(passwordLineEdit->sizePolicy().hasHeightForWidth());
        passwordLineEdit->setSizePolicy(sizePolicy1);
        passwordLineEdit->setMinimumSize(QSize(311, 51));
        passwordLineEdit->setFont(font1);
        passwordLineEdit->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(passwordLineEdit);

        verticalSpacer_3 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        loginButton = new QPushButton(layoutWidget);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        sizePolicy1.setHeightForWidth(loginButton->sizePolicy().hasHeightForWidth());
        loginButton->setSizePolicy(sizePolicy1);
        loginButton->setMinimumSize(QSize(311, 51));
        loginButton->setFont(font1);

        verticalLayout->addWidget(loginButton);

        loginClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(loginClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1155, 26));
        loginClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(loginClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        loginClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(loginClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        loginClass->setStatusBar(statusBar);

        retranslateUi(loginClass);

        loginButton->setDefault(true);


        QMetaObject::connectSlotsByName(loginClass);
    } // setupUi

    void retranslateUi(QMainWindow *loginClass)
    {
        loginClass->setWindowTitle(QApplication::translate("loginClass", "Login", Q_NULLPTR));
        loginLabel->setText(QApplication::translate("loginClass", "Login", Q_NULLPTR));
        idLineEdit->setPlaceholderText(QApplication::translate("loginClass", "id", Q_NULLPTR));
        passwordLineEdit->setPlaceholderText(QApplication::translate("loginClass", "password", Q_NULLPTR));
        loginButton->setText(QApplication::translate("loginClass", "Log in", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class loginClass: public Ui_loginClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H

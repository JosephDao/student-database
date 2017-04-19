/********************************************************************************
** Form generated from reading UI file 'classform.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASSFORM_H
#define UI_CLASSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_classFormDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *firstButton;
    QPushButton *previousButton;
    QPushButton *nextButton;
    QPushButton *lastButton;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *crnLabel;
    QLineEdit *crnLineEdit;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *startTimeLabel;
    QLineEdit *startTimeLineEdit;
    QLabel *endTimeLabel;
    QLineEdit *endTimeLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *daysLabel;
    QLineEdit *daysLineEdit;
    QLabel *deliveryModeLabel;
    QLineEdit *deliveryModeLineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeButton;

    void setupUi(QDialog *classFormDialog)
    {
        if (classFormDialog->objectName().isEmpty())
            classFormDialog->setObjectName(QStringLiteral("classFormDialog"));
        classFormDialog->resize(589, 247);
        classFormDialog->setStyleSheet(QLatin1String("QDialog {background-color: rgb(235, 239, 240);}\n"
"QPushButton {background-color: rgb(0, 0, 127); color: white; border-width: 2 px; border-radius: 10 px; }\n"
"QLabel {color: black;}\n"
"QLineEdit {background-color: white; color: black; border-width: 2 px; border-radius: 10px;}"));
        verticalLayout = new QVBoxLayout(classFormDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        firstButton = new QPushButton(classFormDialog);
        firstButton->setObjectName(QStringLiteral("firstButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(firstButton->sizePolicy().hasHeightForWidth());
        firstButton->setSizePolicy(sizePolicy);
        firstButton->setMinimumSize(QSize(0, 31));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(11);
        firstButton->setFont(font);
        firstButton->setAutoDefault(false);

        horizontalLayout->addWidget(firstButton);

        previousButton = new QPushButton(classFormDialog);
        previousButton->setObjectName(QStringLiteral("previousButton"));
        sizePolicy.setHeightForWidth(previousButton->sizePolicy().hasHeightForWidth());
        previousButton->setSizePolicy(sizePolicy);
        previousButton->setMinimumSize(QSize(0, 31));
        previousButton->setFont(font);
        previousButton->setAutoDefault(false);

        horizontalLayout->addWidget(previousButton);

        nextButton = new QPushButton(classFormDialog);
        nextButton->setObjectName(QStringLiteral("nextButton"));
        sizePolicy.setHeightForWidth(nextButton->sizePolicy().hasHeightForWidth());
        nextButton->setSizePolicy(sizePolicy);
        nextButton->setMinimumSize(QSize(0, 31));
        nextButton->setFont(font);
        nextButton->setAutoDefault(false);

        horizontalLayout->addWidget(nextButton);

        lastButton = new QPushButton(classFormDialog);
        lastButton->setObjectName(QStringLiteral("lastButton"));
        sizePolicy.setHeightForWidth(lastButton->sizePolicy().hasHeightForWidth());
        lastButton->setSizePolicy(sizePolicy);
        lastButton->setMinimumSize(QSize(0, 31));
        lastButton->setFont(font);
        lastButton->setAutoDefault(false);

        horizontalLayout->addWidget(lastButton);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        crnLabel = new QLabel(classFormDialog);
        crnLabel->setObjectName(QStringLiteral("crnLabel"));
        crnLabel->setMaximumSize(QSize(44, 29));
        crnLabel->setFont(font);
        crnLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(crnLabel);

        crnLineEdit = new QLineEdit(classFormDialog);
        crnLineEdit->setObjectName(QStringLiteral("crnLineEdit"));
        sizePolicy.setHeightForWidth(crnLineEdit->sizePolicy().hasHeightForWidth());
        crnLineEdit->setSizePolicy(sizePolicy);
        crnLineEdit->setMinimumSize(QSize(188, 29));
        crnLineEdit->setFont(font);
        crnLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(crnLineEdit);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        startTimeLabel = new QLabel(classFormDialog);
        startTimeLabel->setObjectName(QStringLiteral("startTimeLabel"));
        startTimeLabel->setMaximumSize(QSize(87, 21));
        startTimeLabel->setFont(font);
        startTimeLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(startTimeLabel);

        startTimeLineEdit = new QLineEdit(classFormDialog);
        startTimeLineEdit->setObjectName(QStringLiteral("startTimeLineEdit"));
        sizePolicy.setHeightForWidth(startTimeLineEdit->sizePolicy().hasHeightForWidth());
        startTimeLineEdit->setSizePolicy(sizePolicy);
        startTimeLineEdit->setMinimumSize(QSize(188, 29));
        startTimeLineEdit->setFont(font);
        startTimeLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(startTimeLineEdit);

        endTimeLabel = new QLabel(classFormDialog);
        endTimeLabel->setObjectName(QStringLiteral("endTimeLabel"));
        endTimeLabel->setMaximumSize(QSize(81, 21));
        endTimeLabel->setFont(font);
        endTimeLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(endTimeLabel);

        endTimeLineEdit = new QLineEdit(classFormDialog);
        endTimeLineEdit->setObjectName(QStringLiteral("endTimeLineEdit"));
        sizePolicy.setHeightForWidth(endTimeLineEdit->sizePolicy().hasHeightForWidth());
        endTimeLineEdit->setSizePolicy(sizePolicy);
        endTimeLineEdit->setMinimumSize(QSize(188, 29));
        endTimeLineEdit->setFont(font);
        endTimeLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(endTimeLineEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        daysLabel = new QLabel(classFormDialog);
        daysLabel->setObjectName(QStringLiteral("daysLabel"));
        daysLabel->setMaximumSize(QSize(46, 29));
        daysLabel->setFont(font);
        daysLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(daysLabel);

        daysLineEdit = new QLineEdit(classFormDialog);
        daysLineEdit->setObjectName(QStringLiteral("daysLineEdit"));
        sizePolicy.setHeightForWidth(daysLineEdit->sizePolicy().hasHeightForWidth());
        daysLineEdit->setSizePolicy(sizePolicy);
        daysLineEdit->setMinimumSize(QSize(188, 29));
        daysLineEdit->setFont(font);
        daysLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(daysLineEdit);

        deliveryModeLabel = new QLabel(classFormDialog);
        deliveryModeLabel->setObjectName(QStringLiteral("deliveryModeLabel"));
        deliveryModeLabel->setMaximumSize(QSize(121, 21));
        deliveryModeLabel->setFont(font);
        deliveryModeLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(deliveryModeLabel);

        deliveryModeLineEdit = new QLineEdit(classFormDialog);
        deliveryModeLineEdit->setObjectName(QStringLiteral("deliveryModeLineEdit"));
        sizePolicy.setHeightForWidth(deliveryModeLineEdit->sizePolicy().hasHeightForWidth());
        deliveryModeLineEdit->setSizePolicy(sizePolicy);
        deliveryModeLineEdit->setMaximumSize(QSize(188, 29));
        deliveryModeLineEdit->setFont(font);
        deliveryModeLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(deliveryModeLineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        passwordLabel = new QLabel(classFormDialog);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));
        passwordLabel->setMaximumSize(QSize(131, 29));
        passwordLabel->setFont(font);
        passwordLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(passwordLabel);

        passwordLineEdit = new QLineEdit(classFormDialog);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));
        sizePolicy.setHeightForWidth(passwordLineEdit->sizePolicy().hasHeightForWidth());
        passwordLineEdit->setSizePolicy(sizePolicy);
        passwordLineEdit->setMinimumSize(QSize(188, 29));
        passwordLineEdit->setFont(font);
        passwordLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(passwordLineEdit);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        addButton = new QPushButton(classFormDialog);
        addButton->setObjectName(QStringLiteral("addButton"));
        sizePolicy.setHeightForWidth(addButton->sizePolicy().hasHeightForWidth());
        addButton->setSizePolicy(sizePolicy);
        addButton->setMinimumSize(QSize(0, 31));
        addButton->setFont(font);
        addButton->setAutoDefault(false);

        horizontalLayout_7->addWidget(addButton);

        deleteButton = new QPushButton(classFormDialog);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        sizePolicy.setHeightForWidth(deleteButton->sizePolicy().hasHeightForWidth());
        deleteButton->setSizePolicy(sizePolicy);
        deleteButton->setMinimumSize(QSize(0, 31));
        deleteButton->setFont(font);
        deleteButton->setAutoDefault(false);

        horizontalLayout_7->addWidget(deleteButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        closeButton = new QPushButton(classFormDialog);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        sizePolicy.setHeightForWidth(closeButton->sizePolicy().hasHeightForWidth());
        closeButton->setSizePolicy(sizePolicy);
        closeButton->setMinimumSize(QSize(0, 31));
        closeButton->setFont(font);
        closeButton->setAutoDefault(false);

        horizontalLayout_7->addWidget(closeButton);


        verticalLayout->addLayout(horizontalLayout_7);

#ifndef QT_NO_SHORTCUT
        crnLabel->setBuddy(crnLineEdit);
        startTimeLabel->setBuddy(startTimeLineEdit);
        endTimeLabel->setBuddy(endTimeLineEdit);
        daysLabel->setBuddy(daysLineEdit);
        deliveryModeLabel->setBuddy(deliveryModeLineEdit);
        passwordLabel->setBuddy(passwordLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(classFormDialog);

        firstButton->setDefault(false);
        previousButton->setDefault(false);
        nextButton->setDefault(false);
        lastButton->setDefault(false);
        addButton->setDefault(false);
        deleteButton->setDefault(false);
        closeButton->setDefault(true);


        QMetaObject::connectSlotsByName(classFormDialog);
    } // setupUi

    void retranslateUi(QDialog *classFormDialog)
    {
        classFormDialog->setWindowTitle(QApplication::translate("classFormDialog", "Dialog", Q_NULLPTR));
        firstButton->setText(QApplication::translate("classFormDialog", "<< First", Q_NULLPTR));
        previousButton->setText(QApplication::translate("classFormDialog", "< Previous", Q_NULLPTR));
        nextButton->setText(QApplication::translate("classFormDialog", "Next >", Q_NULLPTR));
        lastButton->setText(QApplication::translate("classFormDialog", "Last >>", Q_NULLPTR));
        crnLabel->setText(QApplication::translate("classFormDialog", "CRN:", Q_NULLPTR));
        crnLineEdit->setPlaceholderText(QString());
        startTimeLabel->setText(QApplication::translate("classFormDialog", "Start Time:", Q_NULLPTR));
        startTimeLineEdit->setPlaceholderText(QString());
        endTimeLabel->setText(QApplication::translate("classFormDialog", "End Time:", Q_NULLPTR));
        endTimeLineEdit->setPlaceholderText(QString());
        daysLabel->setText(QApplication::translate("classFormDialog", "Days:", Q_NULLPTR));
        daysLineEdit->setPlaceholderText(QString());
        deliveryModeLabel->setText(QApplication::translate("classFormDialog", "Delivery Mode:", Q_NULLPTR));
        deliveryModeLineEdit->setPlaceholderText(QString());
        passwordLabel->setText(QApplication::translate("classFormDialog", "Course Number:", Q_NULLPTR));
        passwordLineEdit->setPlaceholderText(QString());
        addButton->setText(QApplication::translate("classFormDialog", "Add", Q_NULLPTR));
        deleteButton->setText(QApplication::translate("classFormDialog", "Delete", Q_NULLPTR));
        closeButton->setText(QApplication::translate("classFormDialog", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class classFormDialog: public Ui_classFormDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASSFORM_H

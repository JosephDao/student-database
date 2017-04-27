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
    QLabel *subjLabel;
    QLineEdit *subjLineEdit;
    QLabel *crseNoLabel;
    QLineEdit *crseNoLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *titleLabel;
    QLineEdit *titleLineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *startTimeLabel;
    QLineEdit *startTimeLineEdit;
    QLabel *endTimeLabel;
    QLineEdit *endTimeLineEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *daysLabel;
    QLineEdit *daysLineEdit;
    QLabel *deliveryModeLabel;
    QLineEdit *deliveryModeLineEdit;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *addButton;
    QPushButton *editButton;
    QPushButton *deleteButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeButton;

    void setupUi(QDialog *classFormDialog)
    {
        if (classFormDialog->objectName().isEmpty())
            classFormDialog->setObjectName(QStringLiteral("classFormDialog"));
        classFormDialog->resize(589, 313);
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
        crnLineEdit->setReadOnly(true);

        horizontalLayout_2->addWidget(crnLineEdit);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        subjLabel = new QLabel(classFormDialog);
        subjLabel->setObjectName(QStringLiteral("subjLabel"));
        subjLabel->setMaximumSize(QSize(87, 21));
        subjLabel->setFont(font);
        subjLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(subjLabel);

        subjLineEdit = new QLineEdit(classFormDialog);
        subjLineEdit->setObjectName(QStringLiteral("subjLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(subjLineEdit->sizePolicy().hasHeightForWidth());
        subjLineEdit->setSizePolicy(sizePolicy1);
        subjLineEdit->setMinimumSize(QSize(188, 29));
        subjLineEdit->setFont(font);
        subjLineEdit->setAlignment(Qt::AlignCenter);
        subjLineEdit->setReadOnly(false);

        horizontalLayout_4->addWidget(subjLineEdit);

        crseNoLabel = new QLabel(classFormDialog);
        crseNoLabel->setObjectName(QStringLiteral("crseNoLabel"));
        crseNoLabel->setMaximumSize(QSize(91, 21));
        crseNoLabel->setFont(font);
        crseNoLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(crseNoLabel);

        crseNoLineEdit = new QLineEdit(classFormDialog);
        crseNoLineEdit->setObjectName(QStringLiteral("crseNoLineEdit"));
        sizePolicy1.setHeightForWidth(crseNoLineEdit->sizePolicy().hasHeightForWidth());
        crseNoLineEdit->setSizePolicy(sizePolicy1);
        crseNoLineEdit->setMinimumSize(QSize(151, 29));
        crseNoLineEdit->setFont(font);
        crseNoLineEdit->setAlignment(Qt::AlignCenter);
        crseNoLineEdit->setReadOnly(false);

        horizontalLayout_4->addWidget(crseNoLineEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        titleLabel = new QLabel(classFormDialog);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setMaximumSize(QSize(46, 29));
        titleLabel->setFont(font);
        titleLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(titleLabel);

        titleLineEdit = new QLineEdit(classFormDialog);
        titleLineEdit->setObjectName(QStringLiteral("titleLineEdit"));
        sizePolicy1.setHeightForWidth(titleLineEdit->sizePolicy().hasHeightForWidth());
        titleLineEdit->setSizePolicy(sizePolicy1);
        titleLineEdit->setMinimumSize(QSize(371, 29));
        titleLineEdit->setFont(font);
        titleLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(titleLineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        startTimeLabel = new QLabel(classFormDialog);
        startTimeLabel->setObjectName(QStringLiteral("startTimeLabel"));
        startTimeLabel->setMaximumSize(QSize(121, 21));
        startTimeLabel->setFont(font);
        startTimeLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(startTimeLabel);

        startTimeLineEdit = new QLineEdit(classFormDialog);
        startTimeLineEdit->setObjectName(QStringLiteral("startTimeLineEdit"));
        sizePolicy1.setHeightForWidth(startTimeLineEdit->sizePolicy().hasHeightForWidth());
        startTimeLineEdit->setSizePolicy(sizePolicy1);
        startTimeLineEdit->setMinimumSize(QSize(151, 29));
        startTimeLineEdit->setFont(font);
        startTimeLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(startTimeLineEdit);

        endTimeLabel = new QLabel(classFormDialog);
        endTimeLabel->setObjectName(QStringLiteral("endTimeLabel"));
        endTimeLabel->setMaximumSize(QSize(131, 29));
        endTimeLabel->setFont(font);
        endTimeLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(endTimeLabel);

        endTimeLineEdit = new QLineEdit(classFormDialog);
        endTimeLineEdit->setObjectName(QStringLiteral("endTimeLineEdit"));
        sizePolicy1.setHeightForWidth(endTimeLineEdit->sizePolicy().hasHeightForWidth());
        endTimeLineEdit->setSizePolicy(sizePolicy1);
        endTimeLineEdit->setMinimumSize(QSize(151, 29));
        endTimeLineEdit->setMaximumSize(QSize(188, 29));
        endTimeLineEdit->setFont(font);
        endTimeLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(endTimeLineEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        daysLabel = new QLabel(classFormDialog);
        daysLabel->setObjectName(QStringLiteral("daysLabel"));
        daysLabel->setMaximumSize(QSize(46, 29));
        daysLabel->setFont(font);
        daysLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(daysLabel);

        daysLineEdit = new QLineEdit(classFormDialog);
        daysLineEdit->setObjectName(QStringLiteral("daysLineEdit"));
        daysLineEdit->setMinimumSize(QSize(113, 31));
        daysLineEdit->setFont(font);
        daysLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(daysLineEdit);

        deliveryModeLabel = new QLabel(classFormDialog);
        deliveryModeLabel->setObjectName(QStringLiteral("deliveryModeLabel"));
        deliveryModeLabel->setMinimumSize(QSize(121, 21));
        deliveryModeLabel->setMaximumSize(QSize(121, 31));
        deliveryModeLabel->setFont(font);
        deliveryModeLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(deliveryModeLabel);

        deliveryModeLineEdit = new QLineEdit(classFormDialog);
        deliveryModeLineEdit->setObjectName(QStringLiteral("deliveryModeLineEdit"));
        deliveryModeLineEdit->setMinimumSize(QSize(113, 31));
        deliveryModeLineEdit->setMaximumSize(QSize(113, 31));
        deliveryModeLineEdit->setFont(font);
        deliveryModeLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(deliveryModeLineEdit);


        verticalLayout->addLayout(horizontalLayout_6);

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

        editButton = new QPushButton(classFormDialog);
        editButton->setObjectName(QStringLiteral("editButton"));
        editButton->setMinimumSize(QSize(40, 31));
        editButton->setFont(font);

        horizontalLayout_7->addWidget(editButton);

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
        subjLabel->setBuddy(subjLineEdit);
        crseNoLabel->setBuddy(crseNoLineEdit);
        titleLabel->setBuddy(titleLineEdit);
        startTimeLabel->setBuddy(startTimeLineEdit);
        endTimeLabel->setBuddy(endTimeLineEdit);
        daysLabel->setBuddy(titleLineEdit);
        deliveryModeLabel->setBuddy(deliveryModeLineEdit);
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
        subjLabel->setText(QApplication::translate("classFormDialog", "Subject:", Q_NULLPTR));
        subjLineEdit->setPlaceholderText(QString());
        crseNoLabel->setText(QApplication::translate("classFormDialog", "Course No:", Q_NULLPTR));
        crseNoLineEdit->setPlaceholderText(QString());
        titleLabel->setText(QApplication::translate("classFormDialog", "Title:", Q_NULLPTR));
        titleLineEdit->setPlaceholderText(QString());
        startTimeLabel->setText(QApplication::translate("classFormDialog", "Start Time:", Q_NULLPTR));
        startTimeLineEdit->setPlaceholderText(QString());
        endTimeLabel->setText(QApplication::translate("classFormDialog", "End Time:", Q_NULLPTR));
        endTimeLineEdit->setPlaceholderText(QString());
        daysLabel->setText(QApplication::translate("classFormDialog", "Days:", Q_NULLPTR));
        deliveryModeLabel->setText(QApplication::translate("classFormDialog", "Delivery Mode:", Q_NULLPTR));
        addButton->setText(QApplication::translate("classFormDialog", "Add", Q_NULLPTR));
        editButton->setText(QApplication::translate("classFormDialog", "Edit", Q_NULLPTR));
        deleteButton->setText(QApplication::translate("classFormDialog", "Delete", Q_NULLPTR));
        closeButton->setText(QApplication::translate("classFormDialog", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class classFormDialog: public Ui_classFormDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASSFORM_H

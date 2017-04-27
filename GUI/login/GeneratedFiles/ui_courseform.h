/********************************************************************************
** Form generated from reading UI file 'courseform.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSEFORM_H
#define UI_COURSEFORM_H

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

class Ui_courseFormDialog
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
    QLabel *subjectLabel;
    QLineEdit *subjectLineEdit;
    QLabel *courseIdLabel;
    QLineEdit *courseIdLineEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *titleLabel;
    QLineEdit *titleLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *creditHrsLabel;
    QLineEdit *creditHrsLineEdit;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *addButton;
    QPushButton *editButton;
    QPushButton *deleteButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeButton;

    void setupUi(QDialog *courseFormDialog)
    {
        if (courseFormDialog->objectName().isEmpty())
            courseFormDialog->setObjectName(QStringLiteral("courseFormDialog"));
        courseFormDialog->resize(525, 276);
        courseFormDialog->setStyleSheet(QLatin1String("QDialog {background-color: rgb(235, 239, 240);}\n"
"QPushButton {background-color: rgb(0, 0, 127); color: white; border-width: 2 px; border-radius: 10 px; }\n"
"QLabel {color: black;}\n"
"QLineEdit {background-color: white; color: black; border-width: 2 px; border-radius: 10px;}"));
        verticalLayout = new QVBoxLayout(courseFormDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        firstButton = new QPushButton(courseFormDialog);
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

        previousButton = new QPushButton(courseFormDialog);
        previousButton->setObjectName(QStringLiteral("previousButton"));
        sizePolicy.setHeightForWidth(previousButton->sizePolicy().hasHeightForWidth());
        previousButton->setSizePolicy(sizePolicy);
        previousButton->setMinimumSize(QSize(0, 31));
        previousButton->setFont(font);
        previousButton->setAutoDefault(false);

        horizontalLayout->addWidget(previousButton);

        nextButton = new QPushButton(courseFormDialog);
        nextButton->setObjectName(QStringLiteral("nextButton"));
        sizePolicy.setHeightForWidth(nextButton->sizePolicy().hasHeightForWidth());
        nextButton->setSizePolicy(sizePolicy);
        nextButton->setMinimumSize(QSize(0, 31));
        nextButton->setFont(font);
        nextButton->setAutoDefault(false);

        horizontalLayout->addWidget(nextButton);

        lastButton = new QPushButton(courseFormDialog);
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
        subjectLabel = new QLabel(courseFormDialog);
        subjectLabel->setObjectName(QStringLiteral("subjectLabel"));
        subjectLabel->setMaximumSize(QSize(101, 41));
        subjectLabel->setFont(font);
        subjectLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(subjectLabel);

        subjectLineEdit = new QLineEdit(courseFormDialog);
        subjectLineEdit->setObjectName(QStringLiteral("subjectLineEdit"));
        sizePolicy.setHeightForWidth(subjectLineEdit->sizePolicy().hasHeightForWidth());
        subjectLineEdit->setSizePolicy(sizePolicy);
        subjectLineEdit->setMinimumSize(QSize(188, 29));
        subjectLineEdit->setFont(font);
        subjectLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(subjectLineEdit);

        courseIdLabel = new QLabel(courseFormDialog);
        courseIdLabel->setObjectName(QStringLiteral("courseIdLabel"));
        courseIdLabel->setMaximumSize(QSize(96, 41));
        courseIdLabel->setFont(font);
        courseIdLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(courseIdLabel);

        courseIdLineEdit = new QLineEdit(courseFormDialog);
        courseIdLineEdit->setObjectName(QStringLiteral("courseIdLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(courseIdLineEdit->sizePolicy().hasHeightForWidth());
        courseIdLineEdit->setSizePolicy(sizePolicy1);
        courseIdLineEdit->setMinimumSize(QSize(131, 29));
        courseIdLineEdit->setFont(font);
        courseIdLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(courseIdLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        titleLabel = new QLabel(courseFormDialog);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setMaximumSize(QSize(102, 41));
        titleLabel->setFont(font);
        titleLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(titleLabel);

        titleLineEdit = new QLineEdit(courseFormDialog);
        titleLineEdit->setObjectName(QStringLiteral("titleLineEdit"));
        sizePolicy1.setHeightForWidth(titleLineEdit->sizePolicy().hasHeightForWidth());
        titleLineEdit->setSizePolicy(sizePolicy1);
        titleLineEdit->setMinimumSize(QSize(231, 29));
        titleLineEdit->setFont(font);
        titleLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(titleLineEdit);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        creditHrsLabel = new QLabel(courseFormDialog);
        creditHrsLabel->setObjectName(QStringLiteral("creditHrsLabel"));
        creditHrsLabel->setMaximumSize(QSize(111, 21));
        creditHrsLabel->setFont(font);
        creditHrsLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(creditHrsLabel);

        creditHrsLineEdit = new QLineEdit(courseFormDialog);
        creditHrsLineEdit->setObjectName(QStringLiteral("creditHrsLineEdit"));
        sizePolicy1.setHeightForWidth(creditHrsLineEdit->sizePolicy().hasHeightForWidth());
        creditHrsLineEdit->setSizePolicy(sizePolicy1);
        creditHrsLineEdit->setMinimumSize(QSize(81, 29));
        creditHrsLineEdit->setFont(font);
        creditHrsLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(creditHrsLineEdit);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        addButton = new QPushButton(courseFormDialog);
        addButton->setObjectName(QStringLiteral("addButton"));
        sizePolicy.setHeightForWidth(addButton->sizePolicy().hasHeightForWidth());
        addButton->setSizePolicy(sizePolicy);
        addButton->setMinimumSize(QSize(0, 31));
        addButton->setFont(font);
        addButton->setAutoDefault(false);

        horizontalLayout_4->addWidget(addButton);

        editButton = new QPushButton(courseFormDialog);
        editButton->setObjectName(QStringLiteral("editButton"));
        editButton->setMinimumSize(QSize(40, 31));
        editButton->setFont(font);

        horizontalLayout_4->addWidget(editButton);

        deleteButton = new QPushButton(courseFormDialog);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        sizePolicy.setHeightForWidth(deleteButton->sizePolicy().hasHeightForWidth());
        deleteButton->setSizePolicy(sizePolicy);
        deleteButton->setMinimumSize(QSize(0, 31));
        deleteButton->setFont(font);
        deleteButton->setAutoDefault(false);

        horizontalLayout_4->addWidget(deleteButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        closeButton = new QPushButton(courseFormDialog);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        sizePolicy.setHeightForWidth(closeButton->sizePolicy().hasHeightForWidth());
        closeButton->setSizePolicy(sizePolicy);
        closeButton->setMinimumSize(QSize(0, 31));
        closeButton->setFont(font);
        closeButton->setAutoDefault(false);

        horizontalLayout_4->addWidget(closeButton);


        verticalLayout->addLayout(horizontalLayout_4);

#ifndef QT_NO_SHORTCUT
        subjectLabel->setBuddy(subjectLineEdit);
        titleLabel->setBuddy(titleLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(courseFormDialog);

        firstButton->setDefault(false);
        previousButton->setDefault(false);
        nextButton->setDefault(false);
        lastButton->setDefault(false);
        addButton->setDefault(false);
        deleteButton->setDefault(false);
        closeButton->setDefault(true);


        QMetaObject::connectSlotsByName(courseFormDialog);
    } // setupUi

    void retranslateUi(QDialog *courseFormDialog)
    {
        courseFormDialog->setWindowTitle(QApplication::translate("courseFormDialog", "Dialog", Q_NULLPTR));
        firstButton->setText(QApplication::translate("courseFormDialog", "<< First", Q_NULLPTR));
        previousButton->setText(QApplication::translate("courseFormDialog", "< Previous", Q_NULLPTR));
        nextButton->setText(QApplication::translate("courseFormDialog", "Next >", Q_NULLPTR));
        lastButton->setText(QApplication::translate("courseFormDialog", "Last >>", Q_NULLPTR));
        subjectLabel->setText(QApplication::translate("courseFormDialog", "Subject:", Q_NULLPTR));
        subjectLineEdit->setPlaceholderText(QString());
        courseIdLabel->setText(QApplication::translate("courseFormDialog", "Course Id:", Q_NULLPTR));
        titleLabel->setText(QApplication::translate("courseFormDialog", "Title:", Q_NULLPTR));
        titleLineEdit->setPlaceholderText(QString());
        creditHrsLabel->setText(QApplication::translate("courseFormDialog", "Credit Hours:", Q_NULLPTR));
        addButton->setText(QApplication::translate("courseFormDialog", "Add", Q_NULLPTR));
        editButton->setText(QApplication::translate("courseFormDialog", "Edit", Q_NULLPTR));
        deleteButton->setText(QApplication::translate("courseFormDialog", "Delete", Q_NULLPTR));
        closeButton->setText(QApplication::translate("courseFormDialog", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class courseFormDialog: public Ui_courseFormDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSEFORM_H

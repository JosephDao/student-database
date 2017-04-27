/********************************************************************************
** Form generated from reading UI file 'studentform.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTFORM_H
#define UI_STUDENTFORM_H

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

class Ui_studentFormDialog
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
    QLabel *studentIdLabel;
    QLineEdit *studentIdLineEdit;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *fNameLabel;
    QLineEdit *fNameLineEdit;
    QLabel *lNameLabel;
    QLineEdit *lNameLineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *regStatusLabel;
    QLineEdit *regStatusLineEdit;
    QLabel *gpaLabel;
    QLineEdit *gpaLineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *emailLabel;
    QLineEdit *emailLineEdit;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *addButton;
    QPushButton *editButton;
    QPushButton *deleteButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeButton;

    void setupUi(QDialog *studentFormDialog)
    {
        if (studentFormDialog->objectName().isEmpty())
            studentFormDialog->setObjectName(QStringLiteral("studentFormDialog"));
        studentFormDialog->resize(604, 285);
        studentFormDialog->setStyleSheet(QLatin1String("QDialog {background-color: rgb(235, 239, 240);}\n"
"QPushButton {background-color: rgb(0, 0, 127); color: white; border-width: 2 px; border-radius: 10 px; }\n"
"QLabel {color: black;}\n"
"QLineEdit {background-color: white; color: black; border-width: 2 px; border-radius: 10px;}"));
        verticalLayout = new QVBoxLayout(studentFormDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        firstButton = new QPushButton(studentFormDialog);
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

        previousButton = new QPushButton(studentFormDialog);
        previousButton->setObjectName(QStringLiteral("previousButton"));
        sizePolicy.setHeightForWidth(previousButton->sizePolicy().hasHeightForWidth());
        previousButton->setSizePolicy(sizePolicy);
        previousButton->setMinimumSize(QSize(0, 31));
        previousButton->setFont(font);
        previousButton->setAutoDefault(false);

        horizontalLayout->addWidget(previousButton);

        nextButton = new QPushButton(studentFormDialog);
        nextButton->setObjectName(QStringLiteral("nextButton"));
        sizePolicy.setHeightForWidth(nextButton->sizePolicy().hasHeightForWidth());
        nextButton->setSizePolicy(sizePolicy);
        nextButton->setMinimumSize(QSize(0, 31));
        nextButton->setFont(font);
        nextButton->setAutoDefault(false);

        horizontalLayout->addWidget(nextButton);

        lastButton = new QPushButton(studentFormDialog);
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
        studentIdLabel = new QLabel(studentFormDialog);
        studentIdLabel->setObjectName(QStringLiteral("studentIdLabel"));
        studentIdLabel->setMaximumSize(QSize(96, 41));
        studentIdLabel->setFont(font);
        studentIdLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(studentIdLabel);

        studentIdLineEdit = new QLineEdit(studentFormDialog);
        studentIdLineEdit->setObjectName(QStringLiteral("studentIdLineEdit"));
        sizePolicy.setHeightForWidth(studentIdLineEdit->sizePolicy().hasHeightForWidth());
        studentIdLineEdit->setSizePolicy(sizePolicy);
        studentIdLineEdit->setMinimumSize(QSize(188, 29));
        studentIdLineEdit->setFont(font);
        studentIdLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(studentIdLineEdit);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        fNameLabel = new QLabel(studentFormDialog);
        fNameLabel->setObjectName(QStringLiteral("fNameLabel"));
        fNameLabel->setMaximumSize(QSize(102, 41));
        fNameLabel->setFont(font);
        fNameLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(fNameLabel);

        fNameLineEdit = new QLineEdit(studentFormDialog);
        fNameLineEdit->setObjectName(QStringLiteral("fNameLineEdit"));
        sizePolicy.setHeightForWidth(fNameLineEdit->sizePolicy().hasHeightForWidth());
        fNameLineEdit->setSizePolicy(sizePolicy);
        fNameLineEdit->setMinimumSize(QSize(188, 29));
        fNameLineEdit->setFont(font);
        fNameLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(fNameLineEdit, 0, Qt::AlignHCenter);

        lNameLabel = new QLabel(studentFormDialog);
        lNameLabel->setObjectName(QStringLiteral("lNameLabel"));
        lNameLabel->setMaximumSize(QSize(101, 41));
        lNameLabel->setFont(font);
        lNameLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lNameLabel);

        lNameLineEdit = new QLineEdit(studentFormDialog);
        lNameLineEdit->setObjectName(QStringLiteral("lNameLineEdit"));
        sizePolicy.setHeightForWidth(lNameLineEdit->sizePolicy().hasHeightForWidth());
        lNameLineEdit->setSizePolicy(sizePolicy);
        lNameLineEdit->setMinimumSize(QSize(188, 29));
        lNameLineEdit->setFont(font);
        lNameLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lNameLineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        regStatusLabel = new QLabel(studentFormDialog);
        regStatusLabel->setObjectName(QStringLiteral("regStatusLabel"));
        regStatusLabel->setMaximumSize(QSize(173, 41));
        regStatusLabel->setFont(font);
        regStatusLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(regStatusLabel);

        regStatusLineEdit = new QLineEdit(studentFormDialog);
        regStatusLineEdit->setObjectName(QStringLiteral("regStatusLineEdit"));
        sizePolicy.setHeightForWidth(regStatusLineEdit->sizePolicy().hasHeightForWidth());
        regStatusLineEdit->setSizePolicy(sizePolicy);
        regStatusLineEdit->setMinimumSize(QSize(188, 29));
        regStatusLineEdit->setFont(font);
        regStatusLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(regStatusLineEdit);

        gpaLabel = new QLabel(studentFormDialog);
        gpaLabel->setObjectName(QStringLiteral("gpaLabel"));
        gpaLabel->setMaximumSize(QSize(47, 41));
        gpaLabel->setFont(font);
        gpaLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(gpaLabel);

        gpaLineEdit = new QLineEdit(studentFormDialog);
        gpaLineEdit->setObjectName(QStringLiteral("gpaLineEdit"));
        sizePolicy.setHeightForWidth(gpaLineEdit->sizePolicy().hasHeightForWidth());
        gpaLineEdit->setSizePolicy(sizePolicy);
        gpaLineEdit->setMaximumSize(QSize(188, 29));
        gpaLineEdit->setFont(font);
        gpaLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(gpaLineEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        emailLabel = new QLabel(studentFormDialog);
        emailLabel->setObjectName(QStringLiteral("emailLabel"));
        emailLabel->setMaximumSize(QSize(54, 41));
        emailLabel->setFont(font);
        emailLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(emailLabel);

        emailLineEdit = new QLineEdit(studentFormDialog);
        emailLineEdit->setObjectName(QStringLiteral("emailLineEdit"));
        sizePolicy.setHeightForWidth(emailLineEdit->sizePolicy().hasHeightForWidth());
        emailLineEdit->setSizePolicy(sizePolicy);
        emailLineEdit->setMinimumSize(QSize(188, 29));
        emailLineEdit->setFont(font);
        emailLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(emailLineEdit);

        passwordLabel = new QLabel(studentFormDialog);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));
        passwordLabel->setMaximumSize(QSize(94, 41));
        passwordLabel->setFont(font);
        passwordLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(passwordLabel);

        passwordLineEdit = new QLineEdit(studentFormDialog);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));
        sizePolicy.setHeightForWidth(passwordLineEdit->sizePolicy().hasHeightForWidth());
        passwordLineEdit->setSizePolicy(sizePolicy);
        passwordLineEdit->setMinimumSize(QSize(188, 29));
        passwordLineEdit->setFont(font);
        passwordLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(passwordLineEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        addButton = new QPushButton(studentFormDialog);
        addButton->setObjectName(QStringLiteral("addButton"));
        sizePolicy.setHeightForWidth(addButton->sizePolicy().hasHeightForWidth());
        addButton->setSizePolicy(sizePolicy);
        addButton->setMinimumSize(QSize(0, 31));
        addButton->setFont(font);
        addButton->setAutoDefault(false);

        horizontalLayout_7->addWidget(addButton);

        editButton = new QPushButton(studentFormDialog);
        editButton->setObjectName(QStringLiteral("editButton"));
        editButton->setMinimumSize(QSize(40, 31));
        editButton->setFont(font);

        horizontalLayout_7->addWidget(editButton);

        deleteButton = new QPushButton(studentFormDialog);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        sizePolicy.setHeightForWidth(deleteButton->sizePolicy().hasHeightForWidth());
        deleteButton->setSizePolicy(sizePolicy);
        deleteButton->setMinimumSize(QSize(0, 31));
        deleteButton->setFont(font);
        deleteButton->setAutoDefault(false);

        horizontalLayout_7->addWidget(deleteButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        closeButton = new QPushButton(studentFormDialog);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        sizePolicy.setHeightForWidth(closeButton->sizePolicy().hasHeightForWidth());
        closeButton->setSizePolicy(sizePolicy);
        closeButton->setMinimumSize(QSize(0, 31));
        closeButton->setFont(font);
        closeButton->setAutoDefault(false);

        horizontalLayout_7->addWidget(closeButton);


        verticalLayout->addLayout(horizontalLayout_7);

#ifndef QT_NO_SHORTCUT
        studentIdLabel->setBuddy(studentIdLineEdit);
        fNameLabel->setBuddy(fNameLineEdit);
        lNameLabel->setBuddy(lNameLineEdit);
        regStatusLabel->setBuddy(regStatusLineEdit);
        gpaLabel->setBuddy(gpaLineEdit);
        emailLabel->setBuddy(emailLineEdit);
        passwordLabel->setBuddy(passwordLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(studentFormDialog);

        firstButton->setDefault(false);
        previousButton->setDefault(false);
        nextButton->setDefault(false);
        lastButton->setDefault(false);
        addButton->setDefault(false);
        deleteButton->setDefault(false);
        closeButton->setDefault(true);


        QMetaObject::connectSlotsByName(studentFormDialog);
    } // setupUi

    void retranslateUi(QDialog *studentFormDialog)
    {
        studentFormDialog->setWindowTitle(QApplication::translate("studentFormDialog", "Dialog", Q_NULLPTR));
        firstButton->setText(QApplication::translate("studentFormDialog", "<< First", Q_NULLPTR));
        previousButton->setText(QApplication::translate("studentFormDialog", "< Previous", Q_NULLPTR));
        nextButton->setText(QApplication::translate("studentFormDialog", "Next >", Q_NULLPTR));
        lastButton->setText(QApplication::translate("studentFormDialog", "Last >>", Q_NULLPTR));
        studentIdLabel->setText(QApplication::translate("studentFormDialog", "Student Id:", Q_NULLPTR));
        studentIdLineEdit->setPlaceholderText(QString());
        fNameLabel->setText(QApplication::translate("studentFormDialog", "First Name:", Q_NULLPTR));
        fNameLineEdit->setPlaceholderText(QString());
        lNameLabel->setText(QApplication::translate("studentFormDialog", "Last Name:", Q_NULLPTR));
        lNameLineEdit->setPlaceholderText(QString());
        regStatusLabel->setText(QApplication::translate("studentFormDialog", "Registration Status:", Q_NULLPTR));
        regStatusLineEdit->setPlaceholderText(QString());
        gpaLabel->setText(QApplication::translate("studentFormDialog", "GPA:", Q_NULLPTR));
        gpaLineEdit->setPlaceholderText(QString());
        emailLabel->setText(QApplication::translate("studentFormDialog", "Email:", Q_NULLPTR));
        emailLineEdit->setText(QString());
        emailLineEdit->setPlaceholderText(QString());
        passwordLabel->setText(QApplication::translate("studentFormDialog", "Password:", Q_NULLPTR));
        passwordLineEdit->setPlaceholderText(QString());
        addButton->setText(QApplication::translate("studentFormDialog", "Add", Q_NULLPTR));
        editButton->setText(QApplication::translate("studentFormDialog", "Edit", Q_NULLPTR));
        deleteButton->setText(QApplication::translate("studentFormDialog", "Delete", Q_NULLPTR));
        closeButton->setText(QApplication::translate("studentFormDialog", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class studentFormDialog: public Ui_studentFormDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTFORM_H

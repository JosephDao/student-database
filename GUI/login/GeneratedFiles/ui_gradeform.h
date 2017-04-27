/********************************************************************************
** Form generated from reading UI file 'gradeform.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRADEFORM_H
#define UI_GRADEFORM_H

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

class Ui_gradeFormDialog
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
    QHBoxLayout *horizontalLayout_3;
    QLabel *crnLabel;
    QLineEdit *crnLineEdit;
    QLabel *studentIdLabel;
    QLineEdit *studentIdLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *assignmentLabel;
    QLineEdit *assignmentLineEdit;
    QLabel *gradeLabel;
    QLineEdit *gradeLineEdit;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *addButton;
    QPushButton *editButton;
    QPushButton *deleteButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeButton;

    void setupUi(QDialog *gradeFormDialog)
    {
        if (gradeFormDialog->objectName().isEmpty())
            gradeFormDialog->setObjectName(QStringLiteral("gradeFormDialog"));
        gradeFormDialog->resize(503, 171);
        gradeFormDialog->setStyleSheet(QLatin1String("QDialog {background-color: rgb(235, 239, 240);}\n"
"QPushButton {background-color: rgb(0, 0, 127); color: white; border-width: 2 px; border-radius: 10 px; }\n"
"QLabel {color: black;}\n"
"QLineEdit {background-color: white; color: black; border-width: 2 px; border-radius: 10px;}"));
        verticalLayout = new QVBoxLayout(gradeFormDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        firstButton = new QPushButton(gradeFormDialog);
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

        previousButton = new QPushButton(gradeFormDialog);
        previousButton->setObjectName(QStringLiteral("previousButton"));
        sizePolicy.setHeightForWidth(previousButton->sizePolicy().hasHeightForWidth());
        previousButton->setSizePolicy(sizePolicy);
        previousButton->setMinimumSize(QSize(0, 31));
        previousButton->setFont(font);
        previousButton->setAutoDefault(false);

        horizontalLayout->addWidget(previousButton);

        nextButton = new QPushButton(gradeFormDialog);
        nextButton->setObjectName(QStringLiteral("nextButton"));
        sizePolicy.setHeightForWidth(nextButton->sizePolicy().hasHeightForWidth());
        nextButton->setSizePolicy(sizePolicy);
        nextButton->setMinimumSize(QSize(0, 31));
        nextButton->setFont(font);
        nextButton->setAutoDefault(false);

        horizontalLayout->addWidget(nextButton);

        lastButton = new QPushButton(gradeFormDialog);
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

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        crnLabel = new QLabel(gradeFormDialog);
        crnLabel->setObjectName(QStringLiteral("crnLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(crnLabel->sizePolicy().hasHeightForWidth());
        crnLabel->setSizePolicy(sizePolicy1);
        crnLabel->setMaximumSize(QSize(51, 21));
        crnLabel->setFont(font);
        crnLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(crnLabel);

        crnLineEdit = new QLineEdit(gradeFormDialog);
        crnLineEdit->setObjectName(QStringLiteral("crnLineEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(crnLineEdit->sizePolicy().hasHeightForWidth());
        crnLineEdit->setSizePolicy(sizePolicy2);
        crnLineEdit->setFont(font);
        crnLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(crnLineEdit);

        studentIdLabel = new QLabel(gradeFormDialog);
        studentIdLabel->setObjectName(QStringLiteral("studentIdLabel"));
        studentIdLabel->setMaximumSize(QSize(91, 21));
        studentIdLabel->setFont(font);
        studentIdLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(studentIdLabel);

        studentIdLineEdit = new QLineEdit(gradeFormDialog);
        studentIdLineEdit->setObjectName(QStringLiteral("studentIdLineEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(studentIdLineEdit->sizePolicy().hasHeightForWidth());
        studentIdLineEdit->setSizePolicy(sizePolicy3);
        studentIdLineEdit->setMinimumSize(QSize(188, 29));
        studentIdLineEdit->setFont(font);
        studentIdLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(studentIdLineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        assignmentLabel = new QLabel(gradeFormDialog);
        assignmentLabel->setObjectName(QStringLiteral("assignmentLabel"));
        sizePolicy.setHeightForWidth(assignmentLabel->sizePolicy().hasHeightForWidth());
        assignmentLabel->setSizePolicy(sizePolicy);
        assignmentLabel->setMaximumSize(QSize(101, 21));
        assignmentLabel->setFont(font);
        assignmentLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(assignmentLabel);

        assignmentLineEdit = new QLineEdit(gradeFormDialog);
        assignmentLineEdit->setObjectName(QStringLiteral("assignmentLineEdit"));
        sizePolicy3.setHeightForWidth(assignmentLineEdit->sizePolicy().hasHeightForWidth());
        assignmentLineEdit->setSizePolicy(sizePolicy3);
        assignmentLineEdit->setMinimumSize(QSize(188, 29));
        assignmentLineEdit->setFont(font);
        assignmentLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(assignmentLineEdit);

        gradeLabel = new QLabel(gradeFormDialog);
        gradeLabel->setObjectName(QStringLiteral("gradeLabel"));
        gradeLabel->setMaximumSize(QSize(61, 21));
        gradeLabel->setFont(font);
        gradeLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(gradeLabel);

        gradeLineEdit = new QLineEdit(gradeFormDialog);
        gradeLineEdit->setObjectName(QStringLiteral("gradeLineEdit"));
        sizePolicy3.setHeightForWidth(gradeLineEdit->sizePolicy().hasHeightForWidth());
        gradeLineEdit->setSizePolicy(sizePolicy3);
        gradeLineEdit->setMinimumSize(QSize(61, 29));
        gradeLineEdit->setMaximumSize(QSize(61, 29));
        gradeLineEdit->setFont(font);
        gradeLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(gradeLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        addButton = new QPushButton(gradeFormDialog);
        addButton->setObjectName(QStringLiteral("addButton"));
        sizePolicy.setHeightForWidth(addButton->sizePolicy().hasHeightForWidth());
        addButton->setSizePolicy(sizePolicy);
        addButton->setMinimumSize(QSize(0, 31));
        addButton->setFont(font);
        addButton->setAutoDefault(false);

        horizontalLayout_7->addWidget(addButton);

        editButton = new QPushButton(gradeFormDialog);
        editButton->setObjectName(QStringLiteral("editButton"));
        editButton->setMinimumSize(QSize(40, 31));
        editButton->setFont(font);

        horizontalLayout_7->addWidget(editButton);

        deleteButton = new QPushButton(gradeFormDialog);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        sizePolicy.setHeightForWidth(deleteButton->sizePolicy().hasHeightForWidth());
        deleteButton->setSizePolicy(sizePolicy);
        deleteButton->setMinimumSize(QSize(0, 31));
        deleteButton->setFont(font);
        deleteButton->setAutoDefault(false);

        horizontalLayout_7->addWidget(deleteButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        closeButton = new QPushButton(gradeFormDialog);
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
        studentIdLabel->setBuddy(studentIdLineEdit);
        assignmentLabel->setBuddy(assignmentLineEdit);
        gradeLabel->setBuddy(gradeLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(gradeFormDialog);

        firstButton->setDefault(false);
        previousButton->setDefault(false);
        nextButton->setDefault(false);
        lastButton->setDefault(false);
        addButton->setDefault(false);
        deleteButton->setDefault(false);
        closeButton->setDefault(true);


        QMetaObject::connectSlotsByName(gradeFormDialog);
    } // setupUi

    void retranslateUi(QDialog *gradeFormDialog)
    {
        gradeFormDialog->setWindowTitle(QApplication::translate("gradeFormDialog", "Dialog", Q_NULLPTR));
        firstButton->setText(QApplication::translate("gradeFormDialog", "<< First", Q_NULLPTR));
        previousButton->setText(QApplication::translate("gradeFormDialog", "< Previous", Q_NULLPTR));
        nextButton->setText(QApplication::translate("gradeFormDialog", "Next >", Q_NULLPTR));
        lastButton->setText(QApplication::translate("gradeFormDialog", "Last >>", Q_NULLPTR));
        crnLabel->setText(QApplication::translate("gradeFormDialog", "CRN:", Q_NULLPTR));
        crnLineEdit->setText(QString());
        crnLineEdit->setPlaceholderText(QString());
        studentIdLabel->setText(QApplication::translate("gradeFormDialog", "Student Id:", Q_NULLPTR));
        studentIdLineEdit->setPlaceholderText(QString());
        assignmentLabel->setText(QApplication::translate("gradeFormDialog", "Assignment:", Q_NULLPTR));
        assignmentLineEdit->setPlaceholderText(QString());
        gradeLabel->setText(QApplication::translate("gradeFormDialog", "Grade:", Q_NULLPTR));
        gradeLineEdit->setText(QString());
        gradeLineEdit->setPlaceholderText(QString());
        addButton->setText(QApplication::translate("gradeFormDialog", "Add", Q_NULLPTR));
        editButton->setText(QApplication::translate("gradeFormDialog", "Edit", Q_NULLPTR));
        deleteButton->setText(QApplication::translate("gradeFormDialog", "Delete", Q_NULLPTR));
        closeButton->setText(QApplication::translate("gradeFormDialog", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gradeFormDialog: public Ui_gradeFormDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRADEFORM_H

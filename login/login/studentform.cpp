#include <QDataWidgetMapper>
#include <QSqlRelationalDelegate>
#include <QSqlRelationalTableModel>

#include "studentForm.h"

StudentForm::StudentForm(QWidget *parent) : QDialog(parent)
{
	setupUi(this);

	studentModel = new QSqlRelationalTableModel;
	studentModel->setTable("student");
	studentModel->select();

	studentMapper = new QDataWidgetMapper;
	studentMapper->setSubmitPolicy(QDataWidgetMapper::AutoSubmit);
	studentMapper->setModel(studentModel);
	studentMapper->setItemDelegate(new QSqlRelationalDelegate(this));
	studentMapper->addMapping(studentIdLineEdit, Student_id);
	studentMapper->addMapping(fNameLineEdit, Student_fName);
	studentMapper->addMapping(lNameLineEdit, Student_lName);
	studentMapper->addMapping(regStatusLineEdit, Student_regStatus);
	studentMapper->addMapping(gpaLineEdit, Student_gpa);
	studentMapper->addMapping(emailLineEdit, Student_email);
	studentMapper->addMapping(passwordLineEdit, Student_password);

	studentMapper->toFirst();

	connect(firstButton, SIGNAL(clicked()), studentMapper, SLOT(toFirst()));
	connect(previousButton, SIGNAL(clicked()), studentMapper, SLOT(toPrevious()));
	connect(nextButton, SIGNAL(clicked()), studentMapper, SLOT(toNext()));
	connect(lastButton, SIGNAL(clicked()), studentMapper, SLOT(toLast()));
	connect(addButton, SIGNAL(clicked()), this, SLOT(addEmployee()));
	connect(deleteButton, SIGNAL(clicked()), this, SLOT(deleteEmployee()));
	connect(closeButton, SIGNAL(clicked()), this, SLOT(accept()));

	show();
}

void StudentForm::addEmployee()
{
	studentRow = studentMapper->currentIndex();
	studentMapper->submit();
	studentModel->insertRow(studentRow);
	studentMapper->setCurrentIndex(studentRow);
	studentIdLineEdit->clear();
	fNameLineEdit->clear();
	lNameLineEdit->clear();
	regStatusLineEdit->clear();
	gpaLineEdit->clear();
	emailLineEdit->clear();
	passwordLineEdit->clear();
	studentIdLineEdit->setFocus();
}

void StudentForm::deleteEmployee()
{
	studentRow = studentMapper->currentIndex();
	studentModel->removeRow(studentRow);
	studentMapper->submit();
	studentMapper->setCurrentIndex(qMin(studentRow, studentModel->rowCount() - 1));
}
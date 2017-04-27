#include <QDataWidgetMapper>
#include <QSqlRecord>
#include <QSqlRelationalDelegate>
#include <QSqlRelationalTableModel>
#include <QMessageBox>

#include "gradeform.h"

GradeForm::GradeForm(QWidget *parent) : QDialog(parent)
{
	setupUi(this);
}

void GradeForm::addGrade()
{
	gradeRow = gradeMapper->currentIndex();
	gradeMapper->submit();
	gradeModel->insertRow(gradeRow);
	gradeMapper->setCurrentIndex(gradeRow);
	studentIdLineEdit->clear();
	crnLineEdit->clear();
	assignmentLineEdit->clear();
	gradeLineEdit->clear();
	studentIdLineEdit->setFocus();
}

void GradeForm::editGrade()
{
	gradeRow = gradeMapper->currentIndex();
	gradeMapper->submit();
}

void GradeForm::deleteGrade()
{
	gradeRow = gradeMapper->currentIndex();
	gradeModel->removeRow(gradeRow);
	gradeMapper->submit();
	gradeMapper->setCurrentIndex(qMin(gradeRow, gradeModel->rowCount() - 1));
}

void GradeForm::setGradeForm(int id)
{
	gradeModel = new QSqlRelationalTableModel;
	gradeModel->setTable("enroll");
	gradeModel->select();

	gradeMapper = new QDataWidgetMapper;
	gradeMapper->setSubmitPolicy(QDataWidgetMapper::AutoSubmit);
	gradeMapper->setModel(gradeModel);
	gradeMapper->setItemDelegate(new QSqlRelationalDelegate(this));
	gradeMapper->addMapping(studentIdLineEdit, Student_id);
	gradeMapper->addMapping(crnLineEdit, Student_fName);
	gradeMapper->addMapping(assignmentLineEdit, Student_lName);
	gradeMapper->addMapping(gradeLineEdit, Student_regStatus);

	connect(firstButton, SIGNAL(clicked()), gradeMapper, SLOT(toFirst()));
	connect(previousButton, SIGNAL(clicked()), gradeMapper, SLOT(toPrevious()));
	connect(nextButton, SIGNAL(clicked()), gradeMapper, SLOT(toNext()));
	connect(lastButton, SIGNAL(clicked()), gradeMapper, SLOT(toLast()));
	connect(addButton, SIGNAL(clicked()), this, SLOT(addGrade()));
	connect(editButton, SIGNAL(clicked()), this, SLOT(editGrade()));
	connect(deleteButton, SIGNAL(clicked()), this, SLOT(deleteGrade()));
	connect(closeButton, SIGNAL(clicked()), this, SLOT(accept()));

	if (id == 0)
		gradeMapper->toFirst();
	else
	{
		for (int row = 0; row < gradeModel->rowCount(); ++row)
		{
			QSqlRecord record = gradeModel->record(row);
			if (record.value(Student_id).toInt() == id)
			{
				gradeMapper->setCurrentIndex(row);
				break;
			}
		}
	}

	exec();
}
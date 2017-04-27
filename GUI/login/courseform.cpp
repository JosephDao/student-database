#include <QDataWidgetMapper>
#include <QSqlRecord>
#include <QSqlRelationalDelegate>
#include <QSqlRelationalTableModel>

#include "courseform.h"

CourseForm::CourseForm(QWidget *parent) : QDialog(parent)
{
	setupUi(this);
}

void CourseForm::addCourse()
{
	courseRow = courseMapper->currentIndex();
	courseMapper->submit();
	courseModel->insertRow(courseRow);
	courseMapper->setCurrentIndex(courseRow);

	subjectLineEdit->clear();
	courseIdLineEdit->clear();
	titleLineEdit->clear();
	creditHrsLineEdit->clear();
	subjectLineEdit->setFocus();
}

void CourseForm::editCourse()
{
	courseRow = courseMapper->currentIndex();
	courseMapper->submit();
}

void CourseForm::deleteCourse()
{
	courseRow = courseMapper->currentIndex();
	courseModel->removeRow(courseRow);
	courseMapper->submit();
	courseMapper->setCurrentIndex(qMin(courseRow, courseModel->rowCount() - 1));
}

void CourseForm::setCourseForm(int id)
{
	courseModel = new QSqlRelationalTableModel;
	courseModel->setTable("course");
	courseModel->select();

	courseMapper = new QDataWidgetMapper;
	courseMapper->setSubmitPolicy(QDataWidgetMapper::AutoSubmit);
	courseMapper->setModel(courseModel);
	courseMapper->setItemDelegate(new QSqlRelationalDelegate(this));
	courseMapper->addMapping(subjectLineEdit, Course_subj);
	courseMapper->addMapping(courseIdLineEdit, Course_id);
	courseMapper->addMapping(titleLineEdit, Course_title);
	courseMapper->addMapping(creditHrsLineEdit, Course_creditHrs);

	if (id == 0)
		courseMapper->toFirst();
	else
	{
		for (int row = 0; row < courseModel->rowCount(); ++row)
		{
			QSqlRecord record = courseModel->record(row);
			if (record.value(Course_id).toInt() == id)
			{
				courseMapper->setCurrentIndex(row);
				break;
			}
		}
	}
		
	connect(firstButton, SIGNAL(clicked()), courseMapper, SLOT(toFirst()));
	connect(previousButton, SIGNAL(clicked()), courseMapper, SLOT(toPrevious()));
	connect(nextButton, SIGNAL(clicked()), courseMapper, SLOT(toNext()));
	connect(lastButton, SIGNAL(clicked()), courseMapper, SLOT(toLast()));
	connect(addButton, SIGNAL(clicked()), this, SLOT(addCourse()));
	connect(editButton, SIGNAL(clicked()), this, SLOT(editCourse()));
	connect(deleteButton, SIGNAL(clicked()), this, SLOT(deleteCourse()));
	connect(closeButton, SIGNAL(clicked()), this, SLOT(accept()));

	exec();
}
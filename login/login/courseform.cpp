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

	courseIdLineEdit->clear();
	titleLineEdit->clear();
	subjectLineEdit->clear();
	courseIdLineEdit->setFocus();
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
	courseMapper->addMapping(courseIdLineEdit, Course_id);
	courseMapper->addMapping(titleLineEdit, Course_title);
	courseMapper->addMapping(subjectLineEdit, Course_subj);

	if (id >= 0)
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
	else
		courseMapper->toFirst();

	connect(firstButton, SIGNAL(clicked()), courseMapper, SLOT(toFirst()));
	connect(previousButton, SIGNAL(clicked()), courseMapper, SLOT(toPrevious()));
	connect(nextButton, SIGNAL(clicked()), courseMapper, SLOT(toNext()));
	connect(lastButton, SIGNAL(clicked()), courseMapper, SLOT(toLast()));
	connect(addButton, SIGNAL(clicked()), this, SLOT(addEmployee()));
	connect(deleteButton, SIGNAL(clicked()), this, SLOT(deleteEmployee()));
	connect(closeButton, SIGNAL(clicked()), this, SLOT(accept()));

	show();
}
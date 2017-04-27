#include <QDataWidgetMapper>
#include <QSqlRecord>
#include <QSqlRelationalDelegate>
#include <QSqlRelationalTableModel>
#include <QMessageBox>

#include "classform.h"

ClassForm::ClassForm(QWidget *parent) : QDialog(parent)
{
	setupUi(this);
}

void ClassForm::addClass()
{
	classRow = classMapper->currentIndex();
	classMapper->submit();
	classModel->insertRow(classRow);
	classMapper->setCurrentIndex(classRow);

	subjLineEdit->clear();
	crseNoLineEdit->clear();
	titleLineEdit->clear();
	crnLineEdit->clear();
	startTimeLineEdit->clear();
	endTimeLineEdit->clear();
	daysLineEdit->clear();
	deliveryModeLineEdit->clear();

	crnLineEdit->setFocus();
}

void ClassForm::editClass()
{
	classRow = classMapper->currentIndex();
	classMapper->submit();
}

void ClassForm::deleteClass()
{
	classRow = classMapper->currentIndex();
	classModel->removeRow(classRow);
	classMapper->submit();
	classMapper->setCurrentIndex(qMin(classRow, classModel->rowCount() - 1));
}

void ClassForm::setClassForm(int id)
{
	classModel = new QSqlRelationalTableModel;
	classModel->setTable("class");
	classModel->select();

	classMapper = new QDataWidgetMapper;
	classMapper->setSubmitPolicy(QDataWidgetMapper::AutoSubmit);
	classMapper->setModel(classModel);
	classMapper->setItemDelegate(new QSqlRelationalDelegate(this));
	classMapper->addMapping(crnLineEdit, Class_crn);
	classMapper->addMapping(subjLineEdit, Class_subj);
	classMapper->addMapping(crseNoLineEdit, Class_crseNo);
	classMapper->addMapping(titleLineEdit, Class_title);
	classMapper->addMapping(startTimeLineEdit, Class_startTime);
	classMapper->addMapping(endTimeLineEdit, Class_endTime);
	classMapper->addMapping(daysLineEdit, Class_days);
	classMapper->addMapping(deliveryModeLineEdit, Class_deliveryMode);

	if (id == 0)
		classMapper->toFirst();
	else
	{
		for (int row = 0; row < classModel->rowCount(); ++row)
		{
			QSqlRecord record = classModel->record(row);
			if (record.value(Class_crn).toInt() == id)
			{
				classMapper->setCurrentIndex(row);
				break;
			}
		}
	}

	connect(firstButton, SIGNAL(clicked()), classMapper, SLOT(toFirst()));
	connect(previousButton, SIGNAL(clicked()), classMapper, SLOT(toPrevious()));
	connect(nextButton, SIGNAL(clicked()), classMapper, SLOT(toNext()));
	connect(lastButton, SIGNAL(clicked()), classMapper, SLOT(toLast()));
	connect(addButton, SIGNAL(clicked()), this, SLOT(addClass()));
	connect(deleteButton, SIGNAL(clicked()), this, SLOT(deleteClass()));
	connect(editButton, SIGNAL(clicked()), this, SLOT(editClass()));
	connect(closeButton, SIGNAL(clicked()), this, SLOT(accept()));

	exec();
}
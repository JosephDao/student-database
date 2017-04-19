#include <QDataWidgetMapper>
#include <QSqlRelationalDelegate>
#include <QSqlRelationalTableModel>

#include "classform.h"

ClassForm::ClassForm(QWidget *parent) : QDialog(parent)
{
	setupUi(this);

	classModel = new QSqlRelationalTableModel;
	classModel->setTable("class");
	classModel->select();

	classMapper = new QDataWidgetMapper;
	classMapper->setSubmitPolicy(QDataWidgetMapper::AutoSubmit);
	classMapper->setModel(classModel);
	classMapper->setItemDelegate(new QSqlRelationalDelegate(this));
	classMapper->addMapping(crnLineEdit, Class_crn);
	classMapper->addMapping(startTimeLineEdit, Class_startTime);
	classMapper->addMapping(endTimeLineEdit, Class_endTime);
	classMapper->addMapping(daysLineEdit, Class_days);
	classMapper->addMapping(deliveryModeLineEdit, Class_deliveryMode);
	classMapper->addMapping(passwordLineEdit, Class_crseNo);

	classMapper->toFirst();

	connect(firstButton, SIGNAL(clicked()), classMapper, SLOT(toFirst()));
	connect(previousButton, SIGNAL(clicked()), classMapper, SLOT(toPrevious()));
	connect(nextButton, SIGNAL(clicked()), classMapper, SLOT(toNext()));
	connect(lastButton, SIGNAL(clicked()), classMapper, SLOT(toLast()));
	connect(addButton, SIGNAL(clicked()), this, SLOT(addEmployee()));
	connect(deleteButton, SIGNAL(clicked()), this, SLOT(deleteEmployee()));
	connect(closeButton, SIGNAL(clicked()), this, SLOT(accept()));

	show();
}

void ClassForm::addClass()
{
	classRow = classMapper->currentIndex();
	classMapper->submit();
	classModel->insertRow(classRow);
	classMapper->setCurrentIndex(classRow);

	crnLineEdit->clear();
	startTimeLineEdit->clear();
	endTimeLineEdit->clear();
	daysLineEdit->clear();
	deliveryModeLineEdit->clear();
	passwordLineEdit->clear();

	crnLineEdit->setFocus();
}

void ClassForm::deleteClass()
{
	classRow = classMapper->currentIndex();
	classModel->removeRow(classRow);
	classMapper->submit();
	classMapper->setCurrentIndex(qMin(classRow, classModel->rowCount() - 1));
}
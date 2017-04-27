#ifndef CLASSFORM_H
#define CLASSFORM_H

#include "ui_classform.h"

class QSqlRelationalTableModel;
class QDataWidgetMapper;

class ClassForm : public QDialog, public Ui::classFormDialog
{
	Q_OBJECT

public:
	ClassForm(QWidget *parent = 0);
	void setClassForm(int);

private:
	enum Class
	{
		Class_crn = 0,
		Class_subj = 1,
		Class_crseNo = 2,
		Class_title = 3,
		Class_startTime = 4,
		Class_endTime = 5,
		Class_days = 6,
		Class_deliveryMode = 7
	};

	int classRow;
	QDataWidgetMapper *classMapper;
	QSqlRelationalTableModel *classModel;

private slots:
	void addClass();
	void deleteClass();
	void editClass();

};

#endif
#ifndef GRADEFORM_H
#define GRADEFORM_H

#include "ui_gradeform.h"

class QSqlRelationalTableModel;
class QDataWidgetMapper;

class GradeForm : public QDialog, public Ui::gradeFormDialog
{
	Q_OBJECT

public:
	GradeForm(QWidget *parent = 0);
	void setGradeForm(int);

private:
	enum studentAttributes
	{
		Student_id = 0,
		Student_fName = 1,
		Student_lName = 2,
		Student_regStatus = 3,
	};

	int id;
	int gradeRow;
	QDataWidgetMapper *gradeMapper;
	QSqlRelationalTableModel *gradeModel;

private slots:
	void addGrade();
	void deleteGrade();
};

#endif
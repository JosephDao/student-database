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
	enum Enroll
	{
		Enroll_crn = 0,
		Enroll_studentId = 1,
		Enroll_assignment = 2,
		Enroll_grade = 3,
	};

	int id;
	int gradeRow;
	QDataWidgetMapper *gradeMapper;
	QSqlRelationalTableModel *gradeModel;

private slots:
	void addGrade();
	void deleteGrade();
	void editGrade();

};

#endif
#ifndef STUDENTFORM_H
#define STUDENTFORM_H

#include "ui_studentform.h"

class QSqlRelationalTableModel;
class QDataWidgetMapper;

class StudentForm : public QDialog, public Ui::studentFormDialog
{
	Q_OBJECT

public:
	StudentForm(QWidget *parent = 0);
	void setStudentForm(int);

private slots:
	void addEmployee();
	void deleteEmployee();

private:
	enum studentAttributes
	{
		Student_id = 0,
		Student_fName = 1,
		Student_lName = 2,
		Student_regStatus = 3,
		Student_gpa = 4,
		Student_email = 5,
		Student_password = 6
	};

	int id;
	int studentRow;
	QDataWidgetMapper *studentMapper;
	QSqlRelationalTableModel *studentModel;
};

#endif
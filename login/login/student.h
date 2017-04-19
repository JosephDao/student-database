#ifndef STUDENT_H
#define STUDENT_H

class QHeaderView;
class QSqlRelationalTableModel;
class QString;
class QTableView;

#include "ui_student.h"

class Student : public QMainWindow, public Ui::StudentMainWindow
{
	Q_OBJECT

public:
	Student(QWidget *parent = Q_NULLPTR);
	void setStudent(QString, QString);
	void displayStudent(QSqlRelationalTableModel *);

private slots:
	void refresh();

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

	QHeaderView *studentHeader;
	QSqlRelationalTableModel *studentModel;
};

#endif
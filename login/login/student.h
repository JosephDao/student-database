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
	void setGrades();
	void setClasses();

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

	enum Enroll
	{
		Enroll_studentId = 0,
		Enroll_crn = 1,
		Enroll_assignment = 2,
		Enroll_grade = 3
	};

	QString studentId;
	QString studentPassword;
	QHeaderView *studentHeader;
	QSqlRelationalTableModel *studentModel;
	QSqlRelationalTableModel *classModel;
	QSqlRelationalTableModel *enrollModel;
};

#endif
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
	void setGPA();

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

	enum ClassGrade
	{
		ClassGrade_studentId = 0,
		ClassGrade_crn = 1,
		ClassGrade_subj = 2,
		ClassGrade_crseNo = 3,
		ClassGrade_title = 4,
		ClassGrade_grade = 5,
		ClassGrade_creditHrs = 6
	};

	enum GPA
	{
		GPA_studentId = 0,
		GPA_gpa = 1
	};

	enum StudentClass
	{
		StudentClass_id = 0,
		StudentClass_crn = 1,
		StudentClass_subj = 2,
		StudentClass_crseNo = 3,
		StudentClass_title = 4,
		StudentClass_startTime = 5,
		StudentClass_endTime = 6,
		StudentClass_days = 7,
		StudentClass_deliveryMode = 8
	};

	QString studentId;
	QString studentPassword;
	QHeaderView *studentHeader;
	QSqlRelationalTableModel *studentModel;
	QSqlRelationalTableModel *classModel;
	QSqlRelationalTableModel *gradeModel;
	QSqlRelationalTableModel *gpaModel;
};

#endif
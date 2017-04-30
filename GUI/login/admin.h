#ifndef ADMIN_H
#define ADMIN_H

class FindDialog;
class QHeaderView;
class QAction;
class QSqlRelationalTableModel;

#include "ui_admin.h"

class Admin : public QMainWindow, public Ui::AdminMainWindow
{
	Q_OBJECT

public:
	Admin(QWidget *parent = Q_NULLPTR);

private:
	enum Student
	{
		Student_id = 0,
		Student_fName = 1,
		Student_lName = 2,
		Student_regStatus = 3,
		Student_gpa = 4,
		Student_email = 5,
		Student_password = 6
	};

	enum Course
	{
		Course_subj = 0,
		Course_no = 1,
		Course_title = 2,
		Course_creditHrs = 3
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

	enum GPA
	{
		GPA_studentId,
		GPA_gpa
	};

	QHeaderView *adminHeader;
	QSqlRelationalTableModel *adminModel;
	int id;

private slots:
	void setStudents();
	void setCourses();
	void setClasses();
	void setGrades();
	void setGPA();
	void displayGradeForm();
	void displayStudentForm();
	void displayCourseForm();
	void displayClassForm();
	void displayError();
};

#endif
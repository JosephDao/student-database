#ifndef ADMIN_H
#define ADMIN_H

class QHeaderView;
class QSqlRelationalTableModel;

#include "ui_admin.h"

class Admin : public QMainWindow, public Ui::AdminMainWindow
{
	Q_OBJECT

public:
	Admin(QWidget *parent = Q_NULLPTR);

private slots:
	void setStudents();
	void setCourses();
	void setClasses();
	void displayStudentForm();
	void displayCourseForm();
	void displayClassForm();

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

	enum courseAttributes
	{
		Course_id = 0,
		Course_title = 1,
		Course_subj = 2
	};

	enum Class
	{
		Class_crn = 0,
		Class_startTime = 1,
		Class_endTime = 2,
		Class_days = 3,
		Class_deliveryMode = 4,
		Class_crseNo = 5
	};

	QHeaderView *studentHeader;
	QHeaderView *courseHeader;
	QHeaderView *classHeader;
	QSqlRelationalTableModel *studentModel;
	QSqlRelationalTableModel *courseModel;
	QSqlRelationalTableModel *classModel;
};

#endif
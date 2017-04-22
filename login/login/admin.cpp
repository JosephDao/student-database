#include <QSqlRelationalTableModel>

#include "admin.h"
#include "student.h"
#include "studentform.h"
#include "courseform.h"
#include "classform.h"
#include "gradeform.h"

Admin::Admin(QWidget *parent) : QMainWindow(parent)
{
	setupUi(this);
	connect(studentButton, SIGNAL(clicked()), this, SLOT(setStudents()));
	connect(courseButton, SIGNAL(clicked()), this, SLOT(setCourses()));
	connect(classButton, SIGNAL(clicked()), this, SLOT(setClasses()));
	connect(gradeButton, SIGNAL(clicked()), this, SLOT(setGrades()));

	setWindowState(Qt::WindowMaximized);

	show();
}

void Admin::setStudents()
{
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayCourseForm()));
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayClassForm()));
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayGradeForm()));
	connect(editButton, SIGNAL(clicked()), this, SLOT(displayStudentForm()));

	studentModel = new QSqlRelationalTableModel;
	studentModel->setTable("student");
	studentModel->setHeaderData(Student_id, Qt::Horizontal, tr("Student ID"));
	studentModel->setHeaderData(Student_fName, Qt::Horizontal, tr("First Name"));
	studentModel->setHeaderData(Student_lName, Qt::Horizontal, tr("Last Name"));
	studentModel->setHeaderData(Student_regStatus, Qt::Horizontal, tr("Registration Status"));
	studentModel->setHeaderData(Student_gpa, Qt::Horizontal, tr("GPA"));
	studentModel->setHeaderData(Student_email, Qt::Horizontal, tr("Email"));
	studentModel->setHeaderData(Student_password, Qt::Horizontal, tr("Password"));
	studentModel->select();

	adminView->setModel(studentModel);
	adminView->setSelectionMode(QAbstractItemView::SingleSelection);
	adminView->setSelectionBehavior(QAbstractItemView::SelectRows);
	adminView->resizeColumnsToContents();
	adminView->setEditTriggers(QAbstractItemView::NoEditTriggers);

	studentHeader = adminView->horizontalHeader();
	studentHeader->setStretchLastSection(true);
	studentHeader->setSectionResizeMode(QHeaderView::Stretch);
}

void Admin::setCourses()
{
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayStudentForm()));
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayClassForm()));
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayGradeForm()));
	connect(editButton, SIGNAL(clicked()), this, SLOT(displayCourseForm()));

	courseModel = new QSqlRelationalTableModel(this);
	courseModel->setTable("course");
	courseModel->setHeaderData(Course_subj, Qt::Horizontal, tr("Subject"));
	courseModel->setHeaderData(Course_no, Qt::Horizontal, tr("Course Number"));
	courseModel->setHeaderData(Course_title, Qt::Horizontal, tr("Title"));
	courseModel->select();

	adminView->setModel(courseModel);
	adminView->setSelectionMode(QAbstractItemView::SingleSelection);
	adminView->setSelectionBehavior(QAbstractItemView::SelectRows);
	adminView->resizeColumnsToContents();
	adminView->setEditTriggers(QAbstractItemView::NoEditTriggers);

	courseHeader = adminView->horizontalHeader();
	courseHeader->setStretchLastSection(true);
	courseHeader->setSectionResizeMode(QHeaderView::Stretch);
}

void Admin::setClasses()
{
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayStudentForm()));
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayCourseForm()));
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayGradeForm()));
	connect(editButton, SIGNAL(clicked()), this, SLOT(displayClassForm()));

	classModel = new QSqlRelationalTableModel;
	classModel->setTable("class");
	classModel->setHeaderData(Class_crn, Qt::Horizontal, tr("Course Reference Number"));
	classModel->setHeaderData(Class_subj, Qt::Horizontal, tr("Subject"));
	classModel->setHeaderData(Class_crseNo, Qt::Horizontal, tr("Course Number"));
	classModel->setHeaderData(Class_title, Qt::Horizontal, tr("Title"));
	classModel->setHeaderData(Class_startTime, Qt::Horizontal, tr("Start Time"));
	classModel->setHeaderData(Class_endTime, Qt::Horizontal, tr("End Time"));
	classModel->setHeaderData(Class_days, Qt::Horizontal, tr("Days"));
	classModel->setHeaderData(Class_deliveryMode, Qt::Horizontal, tr("Delivery Mode"));
	classModel->select();

	adminView->setModel(classModel);
	adminView->setSelectionMode(QAbstractItemView::SingleSelection);
	adminView->setSelectionBehavior(QAbstractItemView::SelectRows);
	adminView->resizeColumnsToContents();
	adminView->setEditTriggers(QAbstractItemView::NoEditTriggers);

	classHeader = adminView->horizontalHeader();
	classHeader->setStretchLastSection(true);
	classHeader->setSectionResizeMode(QHeaderView::Stretch);
}

void Admin::setGrades()
{
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayStudentForm()));
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayCourseForm()));
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayClassForm()));
	connect(editButton, SIGNAL(clicked()), this, SLOT(displayGradeForm()));

	enrollModel = new QSqlRelationalTableModel;
	enrollModel->setTable("enroll");
	enrollModel->setHeaderData(Enroll_studentId, Qt::Horizontal, tr("Student Id"));
	enrollModel->setHeaderData(Enroll_crn, Qt::Horizontal, tr("Course Number"));
	enrollModel->setHeaderData(Enroll_assignment, Qt::Horizontal, tr("Assignment"));
	enrollModel->setHeaderData(Enroll_grade, Qt::Horizontal, tr("Grade"));
	enrollModel->select();

	adminView->setModel(enrollModel);
	adminView->setSelectionMode(QAbstractItemView::SingleSelection);
	adminView->setSelectionBehavior(QAbstractItemView::SelectRows);
	adminView->resizeColumnsToContents();
	adminView->setEditTriggers(QAbstractItemView::NoEditTriggers);

	enrollHeader = adminView->horizontalHeader();
	enrollHeader->setStretchLastSection(true);
	enrollHeader->setSectionResizeMode(QHeaderView::Stretch);
}

void Admin::displayStudentForm()
{
	id = searchLineEdit->text().toInt();
	StudentForm studentForm;
	studentForm.setStudentForm(id);
	searchLineEdit->clear();
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayStudentForm()));
}

void Admin::displayCourseForm()
{
	id = searchLineEdit->text().toInt();
	CourseForm courseForm;
	courseForm.setCourseForm(id);
	searchLineEdit->clear();
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayCourseForm()));
}

void Admin::displayClassForm()
{
	id = searchLineEdit->text().toInt();
	ClassForm classForm;
	classForm.setClassForm(id);
	searchLineEdit->clear();
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayClassForm()));
}

void Admin::displayGradeForm()
{
	id = searchLineEdit->text().toInt();
	GradeForm gradeForm;
	gradeForm.setGradeForm(id);
	searchLineEdit->clear();
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayGradeForm()));
}


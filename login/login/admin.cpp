#include <QSqlRelationalTableModel>
#include <qmessagebox.h>

#include "admin.h"
#include "student.h"
#include "studentform.h"
#include "courseform.h"
#include "classform.h"

Admin::Admin(QWidget *parent) : QMainWindow(parent)
{
	setupUi(this);
	connect(studentButton, SIGNAL(clicked()), this, SLOT(setStudents()));
	connect(courseButton, SIGNAL(clicked()), this, SLOT(setCourses()));
	connect(classButton, SIGNAL(clicked()), this, SLOT(setClasses()));


	setWindowState(Qt::WindowMaximized);
	
	show();
}

void Admin::setStudents()
{
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayCourseForm()));
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayClassForm()));
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

	show();
}

void Admin::setCourses()
{
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayStudentForm()));
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayClassForm()));
	connect(editButton, SIGNAL(clicked()), this, SLOT(displayCourseForm()));

	courseModel = new QSqlRelationalTableModel(this);
	courseModel->setTable("course");
	courseModel->setHeaderData(Course_id, Qt::Horizontal, tr("Course Number"));
	courseModel->setHeaderData(Course_title, Qt::Horizontal, tr("Title"));
	courseModel->setHeaderData(Course_subj, Qt::Horizontal, tr("Subject"));
	courseModel->select();

	adminView->setModel(courseModel);
	adminView->setSelectionMode(QAbstractItemView::SingleSelection);
	adminView->setSelectionBehavior(QAbstractItemView::SelectRows);
	adminView->resizeColumnsToContents();
	adminView->setEditTriggers(QAbstractItemView::NoEditTriggers);

	courseHeader = adminView->horizontalHeader();
	courseHeader->setStretchLastSection(true);
	courseHeader->setSectionResizeMode(QHeaderView::Stretch);

	show();
}

void Admin::setClasses()
{
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayStudentForm()));
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayCourseForm()));
	connect(editButton, SIGNAL(clicked()), this, SLOT(displayClassForm()));

	classModel = new QSqlRelationalTableModel;
	classModel->setTable("class");
	classModel->setHeaderData(Class_crn, Qt::Horizontal, tr("Course Reference Number"));
	classModel->setHeaderData(Class_startTime, Qt::Horizontal, tr("Start Time"));
	classModel->setHeaderData(Class_endTime, Qt::Horizontal, tr("End Time"));
	classModel->setHeaderData(Class_days, Qt::Horizontal, tr("Days"));
	classModel->setHeaderData(Class_deliveryMode, Qt::Horizontal, tr("Delivery Mode"));
	classModel->setHeaderData(Class_crseNo, Qt::Horizontal, tr("Course Number"));
	classModel->select();

	adminView->setModel(classModel);
	adminView->setSelectionMode(QAbstractItemView::SingleSelection);
	adminView->setSelectionBehavior(QAbstractItemView::SelectRows);
	adminView->resizeColumnsToContents();
	adminView->setEditTriggers(QAbstractItemView::NoEditTriggers);

	classHeader = adminView->horizontalHeader();
	classHeader->setStretchLastSection(true);
	classHeader->setSectionResizeMode(QHeaderView::Stretch);

	show();
}

void Admin::displayStudentForm()
{
	id = searchLineEdit->text().toInt();
	StudentForm *studentForm = new StudentForm;
	studentForm->setStudentForm(id);
	searchLineEdit->clear();
}

void Admin::displayCourseForm()
{
	id = searchLineEdit->text().toInt();
	CourseForm *courseForm = new CourseForm;
	courseForm->setCourseForm(id);
	searchLineEdit->clear();
}

void Admin::displayClassForm()
{
	id = searchLineEdit->text().toInt();
	ClassForm *classForm = new ClassForm;
	classForm->setClassForm(id);
	searchLineEdit->clear();
}

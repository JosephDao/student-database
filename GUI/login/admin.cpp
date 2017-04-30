#include <QAction>
#include <QMessageBox>
#include <QSqlRelationalTableModel>
#include <QtGui>
#include <QCompleter>
#include <qdatawidgetmapper.h>
#include <QSqlRelationalDelegate>

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
	connect(gpaButton, SIGNAL(clicked()), this, SLOT(setGPA()));

	setWindowState(Qt::WindowMaximized);
	show();
}

void Admin::setStudents()
{
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayCourseForm()));
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayClassForm()));
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayGradeForm()));
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayError()));
	connect(editButton, SIGNAL(clicked()), this, SLOT(displayStudentForm()), Qt::UniqueConnection);

	adminModel = new QSqlRelationalTableModel;
	adminModel->setTable("student");
	adminModel->setHeaderData(Student_id, Qt::Horizontal, tr("Student Id"));
	adminModel->setHeaderData(Student_fName, Qt::Horizontal, tr("First Name"));
	adminModel->setHeaderData(Student_lName, Qt::Horizontal, tr("Last Name"));
	adminModel->setHeaderData(Student_regStatus, Qt::Horizontal, tr("Registration Status"));
	adminModel->setHeaderData(Student_gpa, Qt::Horizontal, tr("GPA"));
	adminModel->setHeaderData(Student_email, Qt::Horizontal, tr("Email"));
	adminModel->setHeaderData(Student_password, Qt::Horizontal, tr("Password"));
	adminModel->select();

	QCompleter *completer = new QCompleter(adminModel, this);
	searchLineEdit->setCompleter(completer);
	completer->setCompletionColumn(Student_id);

	adminView->setModel(adminModel);
	adminView->setSelectionMode(QAbstractItemView::SingleSelection);
//	adminView->setSelectionBehavior(QAbstractItemView::SelectRows);
	adminView->resizeColumnsToContents();
	adminView->setEditTriggers(QAbstractItemView::NoEditTriggers);
	adminView->setSortingEnabled(true);
	adminView->setAlternatingRowColors(true);

	adminHeader = adminView->horizontalHeader();
	adminHeader->setStretchLastSection(true);
	adminHeader->setSectionResizeMode(QHeaderView::Stretch);
}

void Admin::setCourses()
{
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayStudentForm()));
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayClassForm()));
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayGradeForm()));
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayError()));
	connect(editButton, SIGNAL(clicked()), this, SLOT(displayCourseForm()), Qt::UniqueConnection);

	adminModel = new QSqlRelationalTableModel(this);
	adminModel->setTable("course");
	adminModel->setHeaderData(Course_subj, Qt::Horizontal, tr("Subject"));
	adminModel->setHeaderData(Course_no, Qt::Horizontal, tr("Course Id"));
	adminModel->setHeaderData(Course_title, Qt::Horizontal, tr("Title"));
	adminModel->setHeaderData(Course_creditHrs, Qt::Horizontal, tr("Credit Hours"));
	adminModel->select();

	QCompleter *completer = new QCompleter(adminModel, this);
	searchLineEdit->setCompleter(completer);
	completer->setCompletionColumn(Course_subj);
	completer->setCaseSensitivity(Qt::CaseInsensitive);

	adminView->setModel(adminModel);
	adminView->setSelectionMode(QAbstractItemView::SingleSelection);
//	adminView->setSelectionBehavior(QAbstractItemView::SelectRows);
	adminView->resizeColumnsToContents();
	adminView->setEditTriggers(QAbstractItemView::NoEditTriggers);
	adminView->setSortingEnabled(true);
	adminView->setAlternatingRowColors(true);

	adminHeader = adminView->horizontalHeader();
	adminHeader->setStretchLastSection(true);
	adminHeader->setSectionResizeMode(QHeaderView::Stretch);
}

void Admin::setClasses()
{
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayStudentForm()));
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayCourseForm()));
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayGradeForm()));
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayError()));
	connect(editButton, SIGNAL(clicked()), this, SLOT(displayClassForm()), Qt::UniqueConnection);

	adminModel = new QSqlRelationalTableModel;
	adminModel->setTable("class");
	adminModel->setHeaderData(Class_crn, Qt::Horizontal, tr("Class Id"));
	adminModel->setHeaderData(Class_subj, Qt::Horizontal, tr("Subject"));
	adminModel->setHeaderData(Class_crseNo, Qt::Horizontal, tr("Course Number"));
	adminModel->setHeaderData(Class_title, Qt::Horizontal, tr("Title"));
	adminModel->setHeaderData(Class_startTime, Qt::Horizontal, tr("Start Time"));
	adminModel->setHeaderData(Class_endTime, Qt::Horizontal, tr("End Time"));
	adminModel->setHeaderData(Class_days, Qt::Horizontal, tr("Days"));
	adminModel->setHeaderData(Class_deliveryMode, Qt::Horizontal, tr("Delivery Mode"));
	adminModel->select();

	adminView->setModel(adminModel);
	adminView->setSelectionMode(QAbstractItemView::SingleSelection);
//	adminView->setSelectionBehavior(QAbstractItemView::SelectRows);
	adminView->resizeColumnsToContents();
	adminView->setEditTriggers(QAbstractItemView::NoEditTriggers);
	adminView->setSortingEnabled(true);
	adminView->setAlternatingRowColors(true);

	QCompleter *completer = new QCompleter(adminModel, this);
	searchLineEdit->setCompleter(completer);
	completer->setCompletionColumn(Class_crn);
	completer->setCaseSensitivity(Qt::CaseInsensitive);

	adminHeader = adminView->horizontalHeader();
	adminHeader->setStretchLastSection(true);
	adminHeader->setSectionResizeMode(QHeaderView::Stretch);
}

void Admin::setGrades()
{
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayStudentForm()));
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayCourseForm()));
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayClassForm()));
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayError()));

	connect(editButton, SIGNAL(clicked()), this, SLOT(displayGradeForm()), Qt::UniqueConnection);

	adminModel = new QSqlRelationalTableModel;
	adminModel->setTable("enroll");
	adminModel->setHeaderData(Enroll_studentId, Qt::Horizontal, tr("Class Id"));
	adminModel->setHeaderData(Enroll_crn, Qt::Horizontal, tr("Student Number"));
	adminModel->setHeaderData(Enroll_assignment, Qt::Horizontal, tr("Assignment"));
	adminModel->setHeaderData(Enroll_grade, Qt::Horizontal, tr("Grade"));
	adminModel->select();

	adminView->setModel(adminModel);
	adminView->setSelectionMode(QAbstractItemView::SingleSelection);
//	adminView->setSelectionBehavior(QAbstractItemView::SelectRows);
	adminView->resizeColumnsToContents();
	adminView->setEditTriggers(QAbstractItemView::NoEditTriggers);
	adminView->setSortingEnabled(true);
	adminView->setAlternatingRowColors(true);

	QCompleter *completer = new QCompleter(adminModel, this);
	searchLineEdit->setCompleter(completer);
	completer->setCompletionColumn(Course_subj);
	completer->setCaseSensitivity(Qt::CaseInsensitive);

	adminHeader = adminView->horizontalHeader();
	adminHeader->setStretchLastSection(true);
	adminHeader->setSectionResizeMode(QHeaderView::Stretch);
}

void Admin::setGPA()
{
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayStudentForm()));
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayCourseForm()));
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayClassForm()));
	disconnect(editButton, SIGNAL(clicked()), this, SLOT(displayGradeForm()));
	connect(editButton, SIGNAL(clicked()), this, SLOT(displayError()), Qt::UniqueConnection);

	adminModel = new QSqlRelationalTableModel;
	adminModel->setTable("gpa");
	adminModel->select();

	adminModel->setHeaderData(GPA_studentId, Qt::Horizontal, tr("Student Id"));
	adminModel->setHeaderData(GPA_gpa, Qt::Horizontal, tr("GPA"));

	adminView->setModel(adminModel);
	adminView->setSelectionMode(QAbstractItemView::SingleSelection);
//	adminView->setSelectionBehavior(QAbstractItemView::SelectRows);
	adminView->resizeColumnsToContents();
	adminView->setEditTriggers(QAbstractItemView::NoEditTriggers);
	adminView->setSortingEnabled(true);
	adminView->setAlternatingRowColors(true);

	adminHeader = adminView->horizontalHeader();
	adminHeader->setStretchLastSection(true);
	adminHeader->setSectionResizeMode(QHeaderView::Stretch);

	show();
}

void Admin::displayStudentForm()
{
	id = searchLineEdit->text().toInt();
	StudentForm studentForm;
	studentForm.setStudentForm(id);
	searchLineEdit->clear();
}

void Admin::displayCourseForm()
{
	id = searchLineEdit->text().toInt();
	CourseForm courseForm;
	courseForm.setCourseForm(id);
	searchLineEdit->clear();
}

void Admin::displayClassForm()
{
	id = searchLineEdit->text().toInt();
	ClassForm classForm;
	classForm.setClassForm(id);
	searchLineEdit->clear();
}

void Admin::displayGradeForm()
{
	id = searchLineEdit->text().toInt();
	GradeForm gradeForm;
	gradeForm.setGradeForm(id);
	searchLineEdit->clear();
}

void Admin::displayError()
{
	QMessageBox::warning(this, "Error", "GPA cannot be edited from here.");
}


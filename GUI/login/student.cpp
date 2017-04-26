#include <QMessageBox>
#include <QSqlRecord>
#include <QSqlRelationalTableModel>

#include "student.h"

Student::Student(QWidget *parent) : QMainWindow(parent)
{
	setupUi(this);

	connect(refreshButton, SIGNAL(clicked()), this, SLOT(refresh()));
	connect(classButton, SIGNAL(clicked()), this, SLOT(setClasses()));
	connect(gradeButton, SIGNAL(clicked()), this, SLOT(setGrades()));
	connect(gpaButton, SIGNAL(clicked()), this, SLOT(setGPA()));
	setWindowState(Qt::WindowMaximized);
}

void Student::setStudent(QString id, QString password)
{
	studentId = id;
	studentPassword = password;

	studentModel = new QSqlRelationalTableModel;
	studentModel->setTable("student");
	studentModel->setFilter("studentId = " + studentId + " AND password = '" + studentPassword + "'");
	studentModel->select();

	if (studentModel->rowCount() == 1)
	{
		studentModel->setHeaderData(Student_id, Qt::Horizontal, tr("Student ID"));
		studentModel->setHeaderData(Student_fName, Qt::Horizontal, tr("First Name"));
		studentModel->setHeaderData(Student_lName, Qt::Horizontal, tr("Last Name"));
		studentModel->setHeaderData(Student_regStatus, Qt::Horizontal, tr("Registration Status"));
		studentModel->setHeaderData(Student_gpa, Qt::Horizontal, tr("GPA"));
		studentModel->setHeaderData(Student_email, Qt::Horizontal, tr("Email"));
		studentModel->setHeaderData(Student_password, Qt::Horizontal, tr("Password"));

		displayStudent(studentModel);
	}
}

void Student::displayStudent(QSqlRelationalTableModel* studentModel)
{
	studentView->setModel(studentModel);
	studentView->setSelectionMode(QAbstractItemView::SingleSelection);
	studentView->setSelectionBehavior(QAbstractItemView::SelectRows);
	studentView->resizeColumnsToContents();
	studentView->setEditTriggers(QAbstractItemView::NoEditTriggers);
	
	studentHeader = studentView->horizontalHeader();
	studentHeader->setStretchLastSection(true);
	studentHeader->setSectionResizeMode(QHeaderView::Stretch);
	show();
}

void Student::refresh()
{
	setStudent(studentId, studentPassword);
}

void Student::setClasses()
{
	studentView->setColumnHidden(0, false);
	studentView->setColumnHidden(6, false);

	classModel = new QSqlRelationalTableModel;
	classModel->setTable("studentclass");
	classModel->setFilter("studentId = " + studentId);
	classModel->select();

	classModel->setHeaderData(StudentClass_id, Qt::Horizontal, tr("Student Id"));
	classModel->setHeaderData(StudentClass_crn, Qt::Horizontal, tr("Course Reference Number"));
	classModel->setHeaderData(StudentClass_subj, Qt::Horizontal, tr("Subject"));
	classModel->setHeaderData(StudentClass_crseNo, Qt::Horizontal, tr("Course Number"));
	classModel->setHeaderData(StudentClass_title, Qt::Horizontal, tr("Title"));
	classModel->setHeaderData(StudentClass_startTime, Qt::Horizontal, tr("Start Time"));
	classModel->setHeaderData(StudentClass_endTime, Qt::Horizontal, tr("End Time"));
	classModel->setHeaderData(StudentClass_days, Qt::Horizontal, tr("Days"));
	classModel->setHeaderData(StudentClass_deliveryMode, Qt::Horizontal, tr("Delivery Mode"));

	studentView->setModel(classModel);
	studentView->setSelectionMode(QAbstractItemView::SingleSelection);
	studentView->setSelectionBehavior(QAbstractItemView::SelectRows);
	studentView->resizeColumnsToContents();
	studentView->setEditTriggers(QAbstractItemView::NoEditTriggers);

	studentHeader = studentView->horizontalHeader();
	studentHeader->setStretchLastSection(true);
	studentHeader->setSectionResizeMode(QHeaderView::Stretch);

	show();
}

void Student::setGrades()
{
	gradeModel = new QSqlRelationalTableModel;
	gradeModel->setTable("classgrade");
	gradeModel->setFilter("studentId = " + studentId);
	gradeModel->select();

	gradeModel->setHeaderData(ClassGrade_studentId, Qt::Horizontal, tr("Student Id"));
	gradeModel->setHeaderData(ClassGrade_crn, Qt::Horizontal, tr("Course Reference Number"));
	gradeModel->setHeaderData(ClassGrade_subj, Qt::Horizontal, tr("Subject"));
	gradeModel->setHeaderData(ClassGrade_crseNo, Qt::Horizontal, tr("Course Number"));
	gradeModel->setHeaderData(ClassGrade_title, Qt::Horizontal, tr("Title"));
	gradeModel->setHeaderData(ClassGrade_grade, Qt::Horizontal, tr("Grade"));
	gradeModel->setHeaderData(ClassGrade_creditHrs, Qt::Horizontal, tr("Credit Hours"));
	studentView->setModel(gradeModel);
	studentView->setSelectionMode(QAbstractItemView::SingleSelection);
	studentView->setSelectionBehavior(QAbstractItemView::SelectRows);
	studentView->resizeColumnsToContents();
	studentView->setEditTriggers(QAbstractItemView::NoEditTriggers);

	studentHeader = studentView->horizontalHeader();
	studentHeader->setStretchLastSection(true);
	studentHeader->setSectionResizeMode(QHeaderView::Stretch);

	show();
}

void Student::setGPA()
{
	gpaModel = new QSqlRelationalTableModel;
	gpaModel->setTable("gpa");
	gpaModel->setFilter("studentId = " + studentId);
	gpaModel->select();

	gpaModel->setHeaderData(GPA_studentId, Qt::Horizontal, tr("Student Id"));
	gpaModel->setHeaderData(GPA_gpa, Qt::Horizontal, tr("GPA"));
	studentView->setModel(gpaModel);
	studentView->setSelectionMode(QAbstractItemView::SingleSelection);
	studentView->setSelectionBehavior(QAbstractItemView::SelectRows);
	studentView->resizeColumnsToContents();
	studentView->setEditTriggers(QAbstractItemView::NoEditTriggers);

	studentHeader = studentView->horizontalHeader();
	studentHeader->setStretchLastSection(true);
	studentHeader->setSectionResizeMode(QHeaderView::Stretch);

	show();
}
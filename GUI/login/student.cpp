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
}

void Student::refresh()
{
	setStudent(studentId, studentPassword);
}

void Student::setClasses()
{
	studentView->setColumnHidden(0, false);
	studentView->setColumnHidden(6, false);

	studentModel = new QSqlRelationalTableModel;
	studentModel->setTable("studentclass");
	studentModel->setFilter("studentId = " + studentId);
	studentModel->select();

	studentModel->setHeaderData(StudentClass_id, Qt::Horizontal, tr("Student Id"));
	studentModel->setHeaderData(StudentClass_crn, Qt::Horizontal, tr("Course Reference Number"));
	studentModel->setHeaderData(StudentClass_subj, Qt::Horizontal, tr("Subject"));
	studentModel->setHeaderData(StudentClass_crseNo, Qt::Horizontal, tr("Course Number"));
	studentModel->setHeaderData(StudentClass_title, Qt::Horizontal, tr("Title"));
	studentModel->setHeaderData(StudentClass_startTime, Qt::Horizontal, tr("Start Time"));
	studentModel->setHeaderData(StudentClass_endTime, Qt::Horizontal, tr("End Time"));
	studentModel->setHeaderData(StudentClass_days, Qt::Horizontal, tr("Days"));
	studentModel->setHeaderData(StudentClass_deliveryMode, Qt::Horizontal, tr("Delivery Mode"));

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

void Student::setGrades()
{
	studentModel = new QSqlRelationalTableModel;
	studentModel->setTable("classgrade");
	studentModel->setFilter("studentId = " + studentId);
	studentModel->select();

	studentModel->setHeaderData(ClassGrade_studentId, Qt::Horizontal, tr("Student Id"));
	studentModel->setHeaderData(ClassGrade_crn, Qt::Horizontal, tr("Course Reference Number"));
	studentModel->setHeaderData(ClassGrade_subj, Qt::Horizontal, tr("Subject"));
	studentModel->setHeaderData(ClassGrade_crseNo, Qt::Horizontal, tr("Course Number"));
	studentModel->setHeaderData(ClassGrade_title, Qt::Horizontal, tr("Title"));
	studentModel->setHeaderData(ClassGrade_grade, Qt::Horizontal, tr("Grade"));
	studentModel->setHeaderData(ClassGrade_creditHrs, Qt::Horizontal, tr("Credit Hours"));

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

void Student::setGPA()
{
	studentModel = new QSqlRelationalTableModel;
	studentModel->setTable("gpa");
	studentModel->setFilter("studentId = " + studentId);
	studentModel->select();

	studentModel->setHeaderData(GPA_studentId, Qt::Horizontal, tr("Student Id"));
	studentModel->setHeaderData(GPA_gpa, Qt::Horizontal, tr("GPA"));

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
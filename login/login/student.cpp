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
	studentView->setColumnHidden(Student_password, true);
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
	classModel = new QSqlRelationalTableModel;
	classModel->setTable("class");
	classModel->setFilter("studentId = " + studentId);
	classModel->setRelation(Class_crn, QSqlRelation("enroll", "CRN", "CRN"));
	classModel->setJoinMode(QSqlRelationalTableModel::InnerJoin);
	classModel->select();

	classModel->setHeaderData(Class_crn, Qt::Horizontal, tr("Course Reference Number"));
	classModel->setHeaderData(Class_subj, Qt::Horizontal, tr("Subject"));
	classModel->setHeaderData(Class_crseNo, Qt::Horizontal, tr("Course Number"));
	classModel->setHeaderData(Class_title, Qt::Horizontal, tr("Title"));
	classModel->setHeaderData(Class_startTime, Qt::Horizontal, tr("Start Time"));
	classModel->setHeaderData(Class_endTime, Qt::Horizontal, tr("End Time"));
	classModel->setHeaderData(Class_days, Qt::Horizontal, tr("Days"));
	classModel->setHeaderData(Class_deliveryMode, Qt::Horizontal, tr("Delivery Mode"));
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
	enrollModel = new QSqlRelationalTableModel;
	enrollModel->setTable("enroll");
	enrollModel->setFilter("studentId = " + studentId);
	enrollModel->select();

	enrollModel->setHeaderData(Enroll_crn, Qt::Horizontal, tr("Course Number"));
	enrollModel->setHeaderData(Enroll_assignment, Qt::Horizontal, tr("Assignment"));
	enrollModel->setHeaderData(Enroll_grade, Qt::Horizontal, tr("Grade"));
	studentView->setModel(enrollModel);
	studentView->setSelectionMode(QAbstractItemView::SingleSelection);
	studentView->setSelectionBehavior(QAbstractItemView::SelectRows);
	studentView->resizeColumnsToContents();
	studentView->setEditTriggers(QAbstractItemView::NoEditTriggers);

	studentHeader = studentView->horizontalHeader();
	studentHeader->setStretchLastSection(true);
	studentHeader->setSectionResizeMode(QHeaderView::Stretch);

	show();
}


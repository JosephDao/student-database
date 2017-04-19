#include <QSqlRelationalTableModel>

#include "student.h"

Student::Student(QWidget *parent) : QMainWindow(parent)
{
	setupUi(this);

	connect(refreshButton, SIGNAL(clicked()), this, SLOT(refresh()));
	setWindowState(Qt::WindowMaximized);
}

void Student::setStudent(QString id, QString password)
{

	studentModel = new QSqlRelationalTableModel;
	studentModel->setTable("student");
	studentModel->setFilter("studentId = " + id + " AND password = '" + password + "'");
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
	show();
}

void Student::refresh()
{

}
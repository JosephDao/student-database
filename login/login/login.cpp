#include <QSqlError>
#include <QMessageBox>
#include <QSqlRelationalTableModel>

#include "login.h"
#include "student.h"
#include "admin.h"

Login::Login(QWidget *parent) : QMainWindow(parent)
{
	setupUi(this);

	connect(loginButton, SIGNAL(clicked()), this, SLOT(processLogin()));
	setWindowState(Qt::WindowMaximized);
}

bool Login::createConnection()
{
	QSqlDatabase lmsDatabase = QSqlDatabase::addDatabase("QMYSQL");
	lmsDatabase.setDatabaseName("college");
	lmsDatabase.setHostName("localhost");
	lmsDatabase.setUserName("josephdao");
	lmsDatabase.setPassword("Tractor.7");

	if (!lmsDatabase.open())
	{
		QMessageBox::critical(0, QObject::tr("Database Error"),
			lmsDatabase.lastError().text());
		return false;
	}
	return true;
}

void Login::processLogin()
{
	QString id = idLineEdit->text();
	QString password = passwordLineEdit->text();

	QSqlRelationalTableModel *loginModel = new QSqlRelationalTableModel;
	loginModel->setTable("student");
	loginModel->setFilter("studentId = " + id + " AND password = '" + password + "'");
	loginModel->select();

	if (loginModel->rowCount() == 1)
	{
		hide();
		Student *student = new Student;
		student->setStudent(id, password);
	}
	else if (id == "admin" && password == "password")
	{
		hide();
		Admin *admin = new Admin;
	}
	else
	{
		QMessageBox::warning(this, "Error", "Incorrect login.");
	}
}

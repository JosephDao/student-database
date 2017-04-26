#include <QtWidgets/QApplication>

#include "login.h"
#include "student.h"
#include "admin.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	Login *window = new Login;

	if (!window->createConnection())
		return 1;

	window->show();

	return app.exec();
}

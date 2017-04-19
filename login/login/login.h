#ifndef LOGIN_H
#define LOGIN_H

#include "ui_login.h"

class Login : public QMainWindow, public Ui::loginClass
{
	Q_OBJECT

public:
	Login(QWidget *parent = Q_NULLPTR);

	bool createConnection();

private slots:
	void processLogin();
};

#endif
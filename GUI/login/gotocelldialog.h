#ifndef GOTOCELLDIALOG_H
#define GOTOCELLDIALOG_H

#include <QtWidgets/QMainWindow>
#include "ui_gotocelldialog.h"

#include <QDialog>

class GoToCellDialog : public QDialog, public Ui::GoToCellDialog
{
	Q_OBJECT

public:
	GoToCellDialog(QWidget *parent = Q_NULLPTR);

private slots:
	void on_lineEdit_textChanged();
};

#endif

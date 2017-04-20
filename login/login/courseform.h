#ifndef COURSEFORM_H
#define COURSEFORM_H

#include "ui_courseform.h"

class QSqlRelationalTableModel;
class QDataWidgetMapper;

class CourseForm : public QDialog, public Ui::courseFormDialog
{
	Q_OBJECT

public:
	CourseForm(QWidget *parent = 0);
	void setCourseForm(int);

private slots:
	void addCourse();
	void deleteCourse();

private:
	enum courseAttributes
	{
		Course_id = 0,
		Course_title = 1,
		Course_subj = 2
	};

	int courseRow;
	QDataWidgetMapper *courseMapper;
	QSqlRelationalTableModel *courseModel;
};

#endif
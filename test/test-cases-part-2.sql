BEGIN;

SET SQL_SAFE_UPDATES=0;

SELECT tap.plan(21);
SET @temp = 1;

	######## Plan 25-30: Grade DATA #########
#plan 25: assignment first character not letter
SELECT  @temp:=count(assignment)
	FROM    enroll
	WHERE   assignment NOT RLIKE '^[A-Z]';

SELECT tap.ok(@temp = 0, 'assignment first character not a letter');

#plan 26: assignment less than 4 characters
SELECT  @temp:=count(assignment)
	FROM    enroll
	WHERE   LENGTH(assignment) < 4;

SELECT tap.ok(@temp = 0, 'assignment less than 4 characters');

#plan 27: assignment more than 35 characters
SELECT  @temp:=count(assignment)
	FROM    enroll
	WHERE   LENGTH(assignment) > 35;

SELECT tap.ok(@temp = 0, 'assignment more than 35 characters');

#plan 28: grade first character not integer
SELECT  @temp:=count(grade)
	FROM    enroll
	WHERE   grade RLIKE '^[A-Z]';

SELECT tap.ok(@temp = 0, 'grade first character not integer');

#plan 29: grade less than 1 characters
SELECT  @temp:=count(grade)
	FROM    enroll
	WHERE   LENGTH(grade) < 1;

SELECT tap.ok(@temp = 0, 'grade less than 1 character');

#plan 30: grade more than 2 characters
SELECT  @temp:=count(grade)
	FROM    enroll
	WHERE   LENGTH(grade) > 2;

SELECT tap.ok(@temp = 0, 'grade more than 2 characters');

	
    
    ######## Plan 31-46: STUDENT DATA #########
#plan 31: studentId first character not integer
SELECT  @temp:=count(studentId)
	FROM    student
	WHERE   studentId RLIKE '^[A-Z]';

SELECT tap.ok(@temp = 0, 'studentId first character not integer');

#plan 32: studentId less than 9 characters
SELECT  @temp:=count(studentId)
	FROM    student
	WHERE   LENGTH(studentId) < 9;

SELECT tap.ok(@temp = 0, 'studentId less than 9 characters');

#plan 33: password first character not Ascii
SELECT  @temp:=count('password')
	FROM    student
	WHERE   'password' <> CONVERT('password' USING ASCII);

SELECT tap.ok(@temp = 0, 'password first character not Ascii');

#plan 34: 'password' less than 9 characters
SELECT  @temp:=count('password')
	FROM    student
	WHERE   LENGTH('password') < 9;

SELECT tap.ok(@temp = 0, 'studentId less than 9 characters');

#plan 35: 'password' less than 8 characters
SELECT  @temp:=count('password')
	FROM    student
	WHERE   LENGTH('password') < 8;

SELECT tap.ok(@temp = 0, 'password less than 8 characters');

#plan 36: 'password' more than 16 characters
SELECT  @temp:=count('password')
	FROM    student
	WHERE   LENGTH('password') > 16;

SELECT tap.ok(@temp = 0, 'password more than 16 characters');

#plan 37: fName first character not letter
SELECT  @temp:=count(fName)
	FROM    student
	WHERE   fName NOT RLIKE '^[A-Z]';

SELECT tap.ok(@temp = 0, 'fName first character not letter');

#plan 38: fName less than 1 characters
SELECT  @temp:=count(fName)
	FROM    student
	WHERE   LENGTH(fName) < 1;

SELECT tap.ok(@temp = 0, 'fName less than 9 characters');

#plan 39: fName more than 35 characters
SELECT  @temp:=count(fName)
	FROM    student
	WHERE   LENGTH(fName) > 35;

SELECT tap.ok(@temp = 0, ' fName more than 35 characters');

#plan 40: lName first character not letter
SELECT  @temp:=count(lName)
	FROM    student
	WHERE   lName NOT RLIKE '^[A-Z]';

SELECT tap.ok(@temp = 0, 'lName first character not letter');

#plan 41: lName less than 1 characters
SELECT  @temp:=count(lName)
	FROM    student
	WHERE   LENGTH(lName) < 1;

SELECT tap.ok(@temp = 0, 'lName less than 1 characters');

#plan 42: lName more than 35 characters
SELECT  @temp:=count(lName)
	FROM    student
	WHERE   LENGTH(lName) > 35;

SELECT tap.ok(@temp = 0, ' lName more than 35 characters');

#plan 43: regStatus not valid boolean (1 or 0)
SELECT  @temp:=count(fName)
	FROM    student
	WHERE   fName NOT RLIKE '1' AND fName NOT RLIKE '0';
    
#plan 44: gpa first character not integer
SELECT  @temp:=count(gpa)
	FROM    student
	WHERE   gpa RLIKE '^[A-Z]';

SELECT tap.ok(@temp = 0, 'gpa first character not integer');

#plan 45: gpa less than 2 characters
SELECT  @temp:=count(gpa)
	FROM    student
	WHERE   LENGTH(gpa) < 2;

SELECT tap.ok(@temp = 0, 'gpa less than 2 characters');

#plan 46: email more than 254 characters
SELECT  @temp:=count(email)
	FROM    student
	WHERE   LENGTH(email) > 254;

SELECT tap.ok(@temp = 0, 'gpa more than 254 characters');


CALL tap.finish();
ROLLBACK;
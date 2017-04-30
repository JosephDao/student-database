BEGIN;

SET SQL_SAFE_UPDATES=0;

SELECT tap.plan(24);
SET @temp = 1;

	#Plan 1-4: Check if all table exists#
SELECT tap.has_table( DATABASE(), 'class' );
SELECT tap.has_table( DATABASE(), 'course' );
SELECT tap.has_table( DATABASE(), 'student' );
SELECT tap.has_table( DATABASE(), 'enroll' );

	######## Plan 5-12: COURSE DATA #########

#plan 5: crseNo first character not integer
SELECT  @temp:=count(crseNo)
	FROM    course
	WHERE   crseNo RLIKE '^[A-Z]';

SELECT tap.ok(@temp = 0, 'crseNo first character not an integer');

#plan 6: crseNo <4 integers
SELECT  @temp:=count(crseNo)
	FROM    course
	WHERE   crseNo NOT RLIKE '[0-9]{4}';

SELECT tap.ok(@temp = 0, 'crseNo do not have 4 digits');

#plan 7: title first character not letter
SELECT  @temp:=count(title)
	FROM    course
	WHERE   title NOT RLIKE '^[A-Z]';

SELECT tap.ok(@temp = 0, 'course title first character not letter');

#plan 8: title less than five characters
SELECT  @temp:=count(title)
	FROM    course
	WHERE   LENGTH(title) < 5;

SELECT tap.ok(@temp = 0, 'course title has less than five characters');

#plan 9: title more than 35 characters
SELECT  @temp:=count(title)
	FROM    course
	WHERE   LENGTH(title) > 35;

SELECT tap.ok(@temp = 0, 'course title has more than 35 characters');

#plan 10: subj first character not letter
SELECT  @temp:=count(subj)
	FROM    course
	WHERE   subj NOT RLIKE '^[A-Z]';

SELECT tap.ok(@temp = 0, 'subj first character not a letter');

#plan 11: subj less than two characters
SELECT  @temp:=count(subj)
	FROM    course
	WHERE   LENGTH(subj) < 2;

SELECT tap.ok(@temp = 0, 'subj less than two characters');

#plan 12: subj more than four characters
SELECT  @temp:=count(subj)
	FROM    course
	WHERE   LENGTH(subj) > 4;

SELECT tap.ok(@temp = 0, 'subj more than four characters');

	
    
    
    
    ######## Plan 13-24: COURSE SECTION DATA #########
    
#plan 13: crn first character not integer
SELECT  @temp:=count(crn)
	FROM    class
	WHERE   crn RLIKE '^[A-Z]';

SELECT tap.ok(@temp = 0, 'crn first character not an integer');

#plan 14: crn less than 5 characters
SELECT  @temp:=count(crn)
	FROM    class
	WHERE   LENGTH(crn) < 5;

SELECT tap.ok(@temp = 0, 'crn less than 5 characters');

#plan 15: startTime first character not integer
SELECT  @temp:=count(startTime)
	FROM    class
	WHERE   startTime RLIKE '^[A-Z]';

SELECT tap.ok(@temp = 0, 'startTime first character not an integer');

#plan 16: startTime less than 6 characters
SELECT  @temp:=count(startTime)
	FROM    class
	WHERE   LENGTH(startTime) < 6;

SELECT tap.ok(@temp = 0, 'startTime less than 6 characters');

#plan 17: endTime first character not integer
SELECT  @temp:=count(endTime)
	FROM    class
	WHERE   endTime RLIKE '^[A-Z]';

SELECT tap.ok(@temp = 0, 'endTime first character not an integer');

#plan 18: endTime less than 6 characters
SELECT  @temp:=count(endTime)
	FROM    class
	WHERE   LENGTH(endTime) < 6;

SELECT tap.ok(@temp = 0, 'endTime less than 6 characters');

#plan 19: days first character not letter
SELECT  @temp:=count(days)
	FROM    class
	WHERE   days NOT RLIKE '^[A-Z]';

SELECT tap.ok(@temp = 0, 'days first character not a letter');

#plan 20: days less than 1 characters
SELECT  @temp:=count(days)
	FROM    class
	WHERE   LENGTH(days) < 1;

SELECT tap.ok(@temp = 0, 'days less than 1 characters');

#plan 21: days more than 16 characters
SELECT  @temp:=count(days)
	FROM    class
	WHERE   LENGTH(days) > 16;

SELECT tap.ok(@temp = 0, 'days more than 16 characters');

#plan 22: days not valid entry
SELECT  @temp:=count(days)
	FROM    class
	WHERE   days NOT RLIKE 'M' AND days NOT RLIKE 'Tu' AND days NOT RLIKE 'W' AND days NOT RLIKE 'Th' AND days NOT RLIKE 'F' AND days NOT RLIKE 'Sa' AND days NOT RLIKE 'Su';

SELECT tap.ok(@temp = 0, 'days not valid entry');

#plan 23: deliveryMode first character not letter
SELECT  @temp:=count(deliveryMode)
	FROM    class
	WHERE   deliveryMode NOT RLIKE '^[A-Z]';

SELECT tap.ok(@temp = 0, 'deliveryMode first character not a letter');

#plan 24: deliveryMode check valid mode H, O or F
SELECT  @temp:=count(deliveryMode)
	FROM    class
	WHERE   deliveryMode NOT RLIKE 'H' AND deliveryMode NOT RLIKE 'O' AND deliveryMode NOT RLIKE 'F';

SELECT tap.ok(@temp = 0, 'deliveryMode check valid mode H, O or F');



CALL tap.finish();
ROLLBACK;
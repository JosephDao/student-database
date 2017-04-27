-- MySQL dump 10.13  Distrib 5.7.17, for Win64 (x86_64)
--
-- Host: localhost    Database: college
-- ------------------------------------------------------
-- Server version	5.7.18-log

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `class`
--

DROP TABLE IF EXISTS `class`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `class` (
  `crn` smallint(5) unsigned NOT NULL AUTO_INCREMENT,
  `subj` varchar(4) NOT NULL,
  `crseNo` smallint(4) unsigned NOT NULL,
  `title` varchar(35) NOT NULL,
  `startTime` time NOT NULL,
  `endTime` time NOT NULL,
  `days` set('M','Tu','W','Th','F','Sa','Su') NOT NULL,
  `deliveryMode` enum('F','O','H') NOT NULL,
  PRIMARY KEY (`crn`),
  KEY `subj` (`subj`,`crseNo`),
  CONSTRAINT `class_ibfk_1` FOREIGN KEY (`subj`, `crseNo`) REFERENCES `course` (`subj`, `crseNo`) ON UPDATE CASCADE
) ENGINE=InnoDB AUTO_INCREMENT=21139 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `class`
--

LOCK TABLES `class` WRITE;
/*!40000 ALTER TABLE `class` DISABLE KEYS */;
INSERT INTO `class` VALUES (10006,'CS',4315,'Operating Systems','10:00:00','11:15:00','M,W','F'),(10007,'CS',4318,'Theory DB & File Structures','11:30:00','12:45:00','M,W','F'),(10008,'CS',4390,'Artificial Intelligence','10:00:00','11:15:00','Th','H'),(10009,'CS',3420,'Intro to Software Engineering','16:00:00','17:15:00','Tu,Th','F'),(10010,'CS',3326,'Network Security','10:00:00','12:45:00','F','F'),(20084,'ENG',1301,'Composition I','10:00:00','11:15:00','M,W','F'),(20085,'ENG',1301,'Composition I','10:00:00','11:15:00','Tu,Th','F'),(20198,'BIOL',1301,'General Biology I','08:30:00','10:15:00','Tu,Th','F'),(20199,'BIOL',1301,'General Biology I','10:30:00','12:15:00','M,W','F'),(20622,'ART',1301,'Hst of Art: Paleo to Renaiss','07:00:00','08:15:00','Tu,Th','F'),(20627,'ART',1301,'Hst of Art: Paleo to Renaiss','04:00:00','05:15:00','Th','F'),(20645,'MATH',1301,'College Algebra','10:00:00','11:15:00','M,W','F'),(20654,'MATH',1301,'College Algebra','08:30:00','09:45:00','M,Tu,W,Th','F'),(21136,'HIST',1305,'US History to 1877','10:00:00','11:15:00','Th','F'),(21138,'HIST',1305,'US History to 1877','08:30:00','09:45:00','Th','F');
/*!40000 ALTER TABLE `class` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Temporary view structure for view `classgrade`
--

DROP TABLE IF EXISTS `classgrade`;
/*!50001 DROP VIEW IF EXISTS `classgrade`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE VIEW `classgrade` AS SELECT 
 1 AS `studentId`,
 1 AS `crn`,
 1 AS `subj`,
 1 AS `crseNo`,
 1 AS `title`,
 1 AS `grade`,
 1 AS `creditHrs`*/;
SET character_set_client = @saved_cs_client;

--
-- Table structure for table `course`
--

DROP TABLE IF EXISTS `course`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `course` (
  `subj` varchar(4) NOT NULL,
  `crseNo` smallint(4) unsigned NOT NULL,
  `title` varchar(35) NOT NULL,
  `creditHrs` tinyint(4) NOT NULL,
  PRIMARY KEY (`subj`,`crseNo`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `course`
--

LOCK TABLES `course` WRITE;
/*!40000 ALTER TABLE `course` DISABLE KEYS */;
INSERT INTO `course` VALUES ('ART',1301,'Hst of Art: Paleo to Renaiss',3),('BIOL',1301,'General Biology I',3),('CS',3326,'Network Security',3),('CS',3420,'Intro to Software Engineering',4),('CS',4315,'Operating Systems',3),('CS',4318,'Theory DB & File Structures',3),('CS',4390,'Artificial Intelligence',4),('ENG',1301,'Composition I',3),('HIST',1305,'US History to 1877',3),('MATH',1301,'College Algebra',3);
/*!40000 ALTER TABLE `course` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `enroll`
--

DROP TABLE IF EXISTS `enroll`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `enroll` (
  `crn` smallint(5) unsigned NOT NULL,
  `studentId` int(9) unsigned NOT NULL,
  `assignment` varchar(45) NOT NULL,
  `grade` smallint(3) DEFAULT NULL,
  PRIMARY KEY (`crn`,`studentId`,`assignment`),
  KEY `studentId` (`studentId`),
  CONSTRAINT `enroll_ibfk_1` FOREIGN KEY (`crn`) REFERENCES `class` (`crn`) ON UPDATE CASCADE,
  CONSTRAINT `enroll_ibfk_2` FOREIGN KEY (`studentId`) REFERENCES `student` (`studentId`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `enroll`
--

LOCK TABLES `enroll` WRITE;
/*!40000 ALTER TABLE `enroll` DISABLE KEYS */;
INSERT INTO `enroll` VALUES (10006,900300101,'Midterm1',90),(10006,900300101,'Midterm2',88),(10006,900300120,'Final',91),(10007,900300101,'Final',77),(10007,900300101,'Midterm1',78),(10007,900300101,'Midterm2',82),(10008,900300101,'Final',85),(10008,900300101,'Midterm1',77),(10008,900300101,'Midterm2',60),(10009,900300101,'Final',88),(10009,900300101,'Midterm1',77),(10009,900300101,'Midterm2',81),(10010,900300101,'Final',77),(10010,900300101,'Midterm1',90),(10010,900300101,'Midterm2',72),(20084,900300100,'Final',95),(20085,900300101,'Final',73),(20198,900300102,'Final',84),(20199,900300103,'Final',77),(20622,900300107,'Final',43),(20627,900300108,'Final',50),(20645,900300109,'Final',100),(20654,900300113,'Final',61),(21136,900300114,'Final',93),(21138,900300119,'Final',82);
/*!40000 ALTER TABLE `enroll` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Temporary view structure for view `gpa`
--

DROP TABLE IF EXISTS `gpa`;
/*!50001 DROP VIEW IF EXISTS `gpa`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE VIEW `gpa` AS SELECT 
 1 AS `studentId`,
 1 AS `gpa`*/;
SET character_set_client = @saved_cs_client;

--
-- Temporary view structure for view `grade`
--

DROP TABLE IF EXISTS `grade`;
/*!50001 DROP VIEW IF EXISTS `grade`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE VIEW `grade` AS SELECT 
 1 AS `studentId`,
 1 AS `subj`,
 1 AS `crseNo`,
 1 AS `title`,
 1 AS `assignment`,
 1 AS `grade`*/;
SET character_set_client = @saved_cs_client;

--
-- Table structure for table `student`
--

DROP TABLE IF EXISTS `student`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `student` (
  `studentId` int(9) unsigned NOT NULL AUTO_INCREMENT,
  `fName` varchar(35) NOT NULL,
  `lName` varchar(35) NOT NULL,
  `regStatus` tinyint(1) NOT NULL DEFAULT '0',
  `gpa` decimal(2,1) unsigned NOT NULL DEFAULT '4.0',
  `email` varchar(254) NOT NULL,
  `password` varchar(45) NOT NULL,
  PRIMARY KEY (`studentId`),
  UNIQUE KEY `email_UNIQUE` (`email`),
  UNIQUE KEY `studentId` (`studentId`)
) ENGINE=InnoDB AUTO_INCREMENT=900300122 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `student`
--

LOCK TABLES `student` WRITE;
/*!40000 ALTER TABLE `student` DISABLE KEYS */;
INSERT INTO `student` VALUES (900300100,'Amy','Leda',1,4.0,'ledaa@college.edu','terracepin1'),(900300101,'Jonathan','Fernandez',1,4.0,'fernandezj28@gator.uhd.edu','dest453'),(900300102,'Cicero','Goldner',1,1.0,'miller.stefanie@example.com','typds34'),(900300103,'Myrtle','Hane',1,1.5,'sophie38@example.net','byzantine4'),(900300104,'Margarete','Carter',0,0.8,'german30@example.com','quip3'),(900300105,'Jamal','Upton',0,3.3,'sister09@example.com','trine345'),(900300106,'Una','Stanton',0,2.2,'maryjane09@example.net','dddripwe1'),(900300107,'Shaylee','Jakubowski',1,1.9,'pwalsh@example.org','seelby9'),(900300108,'Xzavier','Klein',1,0.9,'durgan.art@example.com','6787324'),(900300109,'Briana','Koelpin',1,2.1,'charlene31@example.org','nasddq78'),(900300110,'Mortimer','Braun',0,1.2,'jasper50@example.net','fkyujdtrs67'),(900300111,'Reginald','Gutkowski',0,0.2,'weber.jorge@example.org','guitarqw'),(900300112,'Hanna','Goyette',0,2.2,'hickle.margarett@example.com','password'),(900300113,'Kamron','Christiansen',1,2.4,'emmanuel29@example.net','password'),(900300114,'Eliezer','Welch',1,1.0,'thomas.jerde@example.net','password'),(900300115,'Santa','Schuster',0,2.2,'lowell05@example.com','password'),(900300116,'Bulah','Hodkiewicz',0,2.8,'umueller@example.org','password'),(900300117,'Erich','Dare',0,2.0,'spencer.hermina@example.net','password'),(900300118,'Haylee','Osinski',0,0.2,'kenya35@example.net','password'),(900300119,'Preston','Bode',1,3.2,'mlarson@example.com','password'),(900300120,'Ahmad','Flatley',1,3.3,'zachary27@example.net','password'),(900300121,'Amalia','Zemlak',0,0.5,'zboncak.savanah@example.org','password');
/*!40000 ALTER TABLE `student` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Temporary view structure for view `studentclass`
--

DROP TABLE IF EXISTS `studentclass`;
/*!50001 DROP VIEW IF EXISTS `studentclass`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE VIEW `studentclass` AS SELECT 
 1 AS `studentId`,
 1 AS `crn`,
 1 AS `subj`,
 1 AS `crseNo`,
 1 AS `title`,
 1 AS `startTime`,
 1 AS `endTime`,
 1 AS `days`,
 1 AS `deliveryMode`*/;
SET character_set_client = @saved_cs_client;

--
-- Final view structure for view `classgrade`
--

/*!50001 DROP VIEW IF EXISTS `classgrade`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `classgrade` AS select `e`.`studentId` AS `studentId`,`e`.`crn` AS `crn`,`c`.`subj` AS `subj`,`c`.`crseNo` AS `crseNo`,`c`.`title` AS `title`,round(avg(`e`.`grade`),2) AS `grade`,`c`.`creditHrs` AS `creditHrs` from ((`enroll` `e` join `course` `c`) join `class` `cl`) where ((`e`.`crn` = `cl`.`crn`) and (`cl`.`title` = `c`.`title`)) group by `e`.`crn` */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `gpa`
--

/*!50001 DROP VIEW IF EXISTS `gpa`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `gpa` AS select `classgrade`.`studentId` AS `studentId`,(sum(`calcGradePts`(`classgrade`.`grade`)) / sum(`classgrade`.`creditHrs`)) AS `gpa` from `classgrade` group by `classgrade`.`studentId` */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `grade`
--

/*!50001 DROP VIEW IF EXISTS `grade`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `grade` AS select `e`.`studentId` AS `studentId`,`c`.`subj` AS `subj`,`c`.`crseNo` AS `crseNo`,`c`.`title` AS `title`,`e`.`assignment` AS `assignment`,`e`.`grade` AS `grade` from (`class` `c` join `enroll` `e`) where (`c`.`crn` = `e`.`crn`) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `studentclass`
--

/*!50001 DROP VIEW IF EXISTS `studentclass`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `studentclass` AS select `cg`.`studentId` AS `studentId`,`cg`.`crn` AS `crn`,`cg`.`subj` AS `subj`,`cg`.`crseNo` AS `crseNo`,`cg`.`title` AS `title`,`c`.`startTime` AS `startTime`,`c`.`endTime` AS `endTime`,`c`.`days` AS `days`,`c`.`deliveryMode` AS `deliveryMode` from (`classgrade` `cg` join `class` `c`) where (`cg`.`crn` = `c`.`crn`) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2017-04-27 13:47:23

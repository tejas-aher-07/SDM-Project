# CDAC Assessment System

## Document:
System Requirement Specification Document

## Title:
System Requirement Specification for Online Assessment for CDAC courses.

## Team:
Students, Exam Management Team, CDAC staff, Support staff, Operational Team, Administrative Team, Network Analyst, Cyber Security.

## Objective (Purpose):
A Web Application for the online assessment system for CDAC Courses is intended to provide complete online platform for conducting the Exam for various CDAC courses for next upcoming batches. 
It fully automates all the previous manual process of taking written exam. 
It saves time as it allows number of students to give the exam at same time.
It allows assessment to be evaluated in less time.

## Scope:
All Students will be able to give their exam at the same time.
This Automated process of examination is much better than the manual system as it is time saving, also has increased efficiency along with that it allows neat handling of data rather than error prone records, also it decreases overheads and is more accurate.
All Students will be getting their results in less time as no manual work of preparing and storing the result information.
This System will allow CDAC to be used in all cdac exam conducting centres as it is web based.
This System will reduces malpractices as it is proctored test.

## Definitions:
	CDAC : Centre for Development of Advanced Computing
	NA : Network Analyst
	EMT : Exam Management Team
	AT : Administrative Team
 OT : Operational Team

## Functional Requirements:

Particular Candidate will be able to view login Page Details available on dashboard page.
Login Page details will include Form Number and Password to authenticate registered candidate. 
Each Candidate will have to authenticate their details by entering his/her details on login page to get logged into the exam.
After logging in, A unique id will be generated and displayed on their individual screen to redirected back to its leftover state if gets logout by mistaken.
System will then redirected to page showing examination instruction including examination details and rules to be followed by candidate.
Candidate will have to click on proceed to start their exam and system will start the timer of examination which has been set by EMT.
EMT will be able to upload the question paper into the database which will be displayed onto the webpage.
Candidate will be able to view exam details including question number along with the question and their respective options. Also user will be able to view useful options on sidebar including "questions to be mark for review, clear answer, not answered, answered".
Candidate will be able to select the option as per their choice and system will store the option selected by user in database for that respective question.
System will auto submit the exam as examination time gets over. 
AT will be able to get access to all the options stored in the database which had been selected by the candidate for the respective questions would get stored in the database.
AT will be able to pass all the options selected by every individual to OT.
OT will get access to the result of every individual and will be able to display result in less time.
	
## NonFunctional Requirement:

### Security
System will allow only Registered Student to appear for the examination.	
Each Student will be able to access the examination questions after entering their specific Form No and Password through authentication process(Security is based upon the individual unique ID).
Student would be unable to access any part of the system without logging on to the system.
System will automatically log out after exam time gets over.
System will internally maintain secure communication channel between Servers ( Web Servers, databse Server)
Used proper firewall to protect servers from out side phishing, vulnerable attacks.

### Reliability

The dashboard will automatically highlights those students who are suspected of using unfair means. 
The system can then further evaluate and send warnings to the student or even end his/her exam.
This makes the system fairly reliable for conducting high stake examinations without the hassle and risk on centres for taking the exam. 
The system will backup student answers data in a database in short time duration to keep system operational.

### Availability

uptime:   From login to the webpage till the exam ends automatically.
	
### Maintainability:

A database software will be used to maintain system data persistence.
A  web server will be installed to manage the server capabilities.
OT will easily monitor and configure system present on each server.
Separate enviornment will be maintained for system for isolation.

### Portablility:

System will provide portable User Interface to the students.
System can be deployed to single server, multi server or to any OS.

### Accessibility:

Only registered students will be able to login after authentication.
	

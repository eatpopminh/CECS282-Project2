#include <iostream>
#include <string>
#include "Course.h"
#include "Student.h"
#include "Time.h"



using namespace std;

Course :: Course()
{
	this->numOfEnrolled = 0;
	this->courseNumber = "unknown";	//four-digit integer
	this->courseName = "unknown";		//e.g. CECS282
	this->semester = "unknown"; 		//Fall, Winter, Spring, Summer
	this->last_date_to_enroll = 0;	//time in secs
	this->students = NULL;
}
Course :: Course(string num, string name, string sem, Time last_date, Student* stdts, int numOfEnroll)
{
	this->numOfEnrolled = numOfEnroll;
	this->courseNumber = num;	//four-digit integer
	this->courseName = name;		//e.g. CECS282
	this->semester = sem; 		//Fall, Winter, Spring, Summer
	this->last_date_to_enroll = last_date;	//time in secs
	this->students = stdts;
}
Course :: Course(const Course& c)
{
	this->numOfEnrolled = c.numOfEnroll;
	this->courseNumber = c.num;	//four-digit integer
	this->courseName = c.name;		//e.g. CECS282
	this->semester = c.sem; 		//Fall, Winter, Spring, Summer
	this->last_date_to_enroll = c.last_date;	//time in secs
	this->students = c.stdts;
}
Course& Course :: operator=(const Course& c)
{
	
}
Course :: ~Course()
{
	
}
Student* Course :: getStudent() const
{
	
}
string Course :: getCourseNumber() const
{
	
}
string Course :: getCourseName() const
{
	
}
string Course :: getSemester() const
{
	
}
string Course :: getYear() const		//return the year of the semesster (assume to be the year of the last date to enroll
{
	
}
int Course :: getNumberOfEnrollment() const
{
	
}
string Course :: getLastDateToEnroll() const		//return as Www Mmm dd hh:mm:ss yyyy
{
	
}
Time Course :: getTimeLastDateToEnroll() const	//return in seconds
{
	
}
void Course :: setNumberOfEnrollment(int ne)
{
	
}
void Course :: setRoster(Student* stdts)
{
	
}




















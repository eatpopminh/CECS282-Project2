#ifndef COURSE_H
#define COURSE_H



#include <iostream>
#include <ctime>
#include <string>
#include "Time.h"
#include "Student.h"
using namespace std;

class Course
{
	private:
		int numOfEnrolled;
		string courseNumber;	//four-digit integer
		string courseName;		//e.g. CECS282
		string semester; 		//Fall, Winter, Spring, Summer
		Time last_date_to_enroll;	//time in secs
		Student* students;		//pointer to array of students
		Course();
		Course(string num, string name, string sem, Time last_date, Student* stdts, int numOfEnroll);	
		Course(const Course& c);
		Course& operator=(const Course& c);
		~Course();
		Student* getStudent() const;
		string getCourseNumber() const;
		string getCourseName() const;
		string getSemester() const;
		string getYear() const;		//return the year of the semesster (assume to be the year of the last date to enroll
		int getNumberOfEnrollment() const;
		string getLastDateToEnroll() const;		//return as Www Mmm dd hh:mm:ss yyyy
		Time getTimeLastDateToEnroll() const;	//return in seconds
		void setNumberOfEnrollment(int ne);
		void setRoster(Student* stdts);
		
};

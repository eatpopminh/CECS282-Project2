#include <iostream>
//#include "Course.h"
//#include "Instructor.h"
#include "Student.h"
#include "Time.h"
#include <ctime>
#include <string>

using namespace std;
const int CAPACITY = 2;
const int MAXCOURSE = 3;
int main()
{
    time_t secs = time(0);//This is the current time (GMT +0)
    
    //Time last_date(secs-10000);//Set up the last date of enrollment
    
    //Student* students = new Student[CAPACITY];//Set up the student dynamic array with CAPACITY. The CAPACITY for this test is 2.
    //Create 4 students
   // Student s("123456789", "Kobe Bryant", "Senior", 0);
//    Student s1("987654321", "Lebron James", "Sophomore", 1000);
//    Student s2("123654987", "James Harden", "Senior", secs - 10);
//    Student s3("345698712", "Anthony Davis", "Sophomore", 1007770);
//
//    Course* courses = new Course[MAXCOURSE];//Set up the courses dynamic array with MAXCOURSE. The MAXCOURSE for this test is 3
//    //Create 3 courses;
//    Course c("1456", "CECS228", "Fall", last_date, students, 0);
//    Course c1("1345", "CECS228", "Fall", last_date, students, 0);
//    Course c2("1234", "CECS282", "Fall", last_date, students, 0);
//    Course c3("1233", "CECS282", "Fall", last_date, students, 0);
//    
//    //Create an instructor
//    Instructor inst("Minhthong Nguyen", "Part-time", courses, 0);
//
//    //Comment out line(s) or combination of lines below and observe the effect of add and drop.
//    /*for instance, with line "inst.addCourse(c)" activated, the output is
//        Part-time Instructor: Minhthong Nguyen
//        Course Number: 1456
//        Course Name: CECS228
//        Semester: Fall 2019
//        Last Date To Enroll: Thu Sep 26 12:19:11 2019
//        Number of enrollment: 0
//        Maximum Enrollment: 2
//    */
//    //Add courses
//    inst.addCourse(c); 
//    inst.addCourse(c1);
//    inst.addCourse(c2);
//    inst.addCourse(c2);//Add the same course again should have no effect on the course that an instructor teaches.
//
//    //Add students to the courses
//    inst.addStudent(s, c);
//    inst.addStudent(s2, c);
//    inst.addStudent(s3, c);
//    inst.addStudent(s1, c);
//    inst.addStudent(s1, c);//Add the same student again to the same class should have no effect.
//   
//    inst.addStudent(s, c2);
//    inst.addStudent(s2, c2);
//    inst.addStudent(s3, c2);
//
//    inst.addStudent(s1, c1);
//    inst.addStudent(s, c1);
//    inst.addStudent(s2, c1);
//    inst.addStudent(s1, c1);
//    
//    //Add student to a non-existing course should have no effect, and the number of enrollment of that course should not increase.
//    inst.addStudent(s, c3);
//    //cout << "Enrollment: " << c3.getNumberOfEnrollment() << endl;
//
//    //Drop students from the courses
//    inst.dropStudent(s2, c, secs); 
//    inst.dropStudent(s1, c1, secs);
//    inst.dropStudent(s, c2, secs);
//    inst.dropStudent(s2, c2, secs);
//
//    //Drop student from a non-existing course should have no effect
//    inst.dropStudent(s, c3, secs);
//
//    //Displaying the Information of a course
//    //Also display all students in that course
//    Course* temp = inst.getCourse();
//    for(int i = 0; i < inst.getNumberOfCoursesTaught(); i++)
//    { 
//        cout <<inst.getStatus() << " Instructor: " << inst.getName() << endl;
//        cout << "Course Number: " << temp[i].getCourseNumber() << "\nCourse Name: " << temp[i].getCourseName()<<"\n" << "Semester: " << temp[i].getSemester() << " " << temp[i].getYear() << "\n" << "Last Date To Enroll: " << temp[i].getLastDateToEnroll() << "\nNumber of enrollment: " << temp[i].getNumberOfEnrollment() << "\nMaximum Enrollment: "<< CAPACITY << endl;
//        Student* tmp = temp[i].getStudent();
//        for(int j = 0; j < temp[i].getNumberOfEnrollment(); j++)
//        {
//             cout << tmp[j].getId() << " " << tmp[j].getName() << " " << tmp[j].getLevel() << " " << tmp[j].getStatus() << " " << tmp[j].getDateOfAction() << endl;        
//        }
//        cout << "---------------------------------------------------------------------" << endl;
//    }
    return 0;
}

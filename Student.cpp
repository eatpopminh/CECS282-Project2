#include <iostream>
#include <string>
#include "Student.h"
#include "Time.h"

using namespace std;

Student :: Student()
{
	this->id = "unknown";
	this->name = "unknown";
	this->level = "unknown";
	this->date_of_action = 0;
}
Student :: Student(string id, string name, string level, Time date_of_action)
{
	this->id = id;
	this->name = name;
	this->level = level;
	this->date_of_action = date_of_action;
}
Student :: Student(const Student& s)
{
	this->id = s.getId();
	this->name = s.getName();
	this->level = s.getLevel();
	this->date_of_action = s.getTimeOfAction();
}
Student& Student :: operator=(const Student& s)
{
	this->id = s.id;
	this->name = s.name;
	this->level = s.level;
	this->date_of_action = s.date_of_action;
	return (*this);
}
string Student :: getLevel() const
{
	return level;
}
string Student :: getId() const
{
	return id;
}
string Student :: getName() const
{
	return name;
}
string Student :: getDateOfAction() const		//return as Www Mmm dd hh:mm:ss yyyy
{
	return date_of_action.toString();
}
Time Student :: getTimeOfAction() const		//return date_of_action in seconds
{ 
	return date_of_action;
}
string Student :: getStatus() const
{
	return status;
}
void Student :: setStatus(string stat)
{
	this->status = stat;
}
void Student :: setTimeOfAction(Time act)
{
	this->date_of_action = act;
}

int main()
{
	 Student s("123456789", "Kobe Bryant", "Senior", 0);
	return 0;
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		

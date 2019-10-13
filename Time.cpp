#include <iostream>
#include <ctime>
#include <string>
#include "Time.h"

using namespace std;


Time :: Time()
{
	secs = time(0);
	//cout<<ctime(&secs)<<endl;
}
Time :: Time(time_t t)
{
	secs = t;
}

Time :: Time(const Time& t)
{
	
}
string Time :: toString() const //return time in the following format Www Mmm dd hh:mm:ss yyyy
{
	struct tm *myString = localtime(&secs);
	return asctime(myString);
	
	
}		
string Time :: getMMDDYYYY() const		//return time in the following format MM/DD/YYYY
{
	struct tm *myString = localtime(&secs);
	
}
string Time :: getYear() const 			//return year of time.
{
	
}
int Time :: compareTime(const Time& t)
{
			
}
int main()
{
	cout<<"HELLO"<<endl;
	Time t;
	cout<<t.toString()<<endl;;
	
	//time_t sec = time(0);
	//struct tm *myTime = localtime(&sec);
	//string mystring = to_string(myTime->tm_mon+1);
//	string mystring = asctime(myTime);
//	cout<<mystring<<endl;
	
}

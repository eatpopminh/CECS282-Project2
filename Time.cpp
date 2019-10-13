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
	return (to_string(myString -> tm_mon+1)+"/"+to_string(myString -> tm_mday)+"/"+to_string(myString -> tm_year + 1900));
	
}
string Time :: getYear() const 			//return year of time.
{
	struct tm *myString = localtime(&secs);
	return to_string(myString -> tm_year +1900);
}
int Time :: compareTime(const Time& t)
{
			
}
int main()
{
	cout<<"HELLO"<<endl;
	Time t;
	cout<<t.toString()<<endl;
	cout<<t.getMMDDYYYY()<<endl;
	cout<<t.getYear()<<endl;
	
	
	time_t sec = time(0);
	time_t sec2;
	time(&sec2);
	struct tm *myTime = localtime(&sec2);
	//string mystring = to_string(myTime->tm_mon+1);
	string mystring = asctime(myTime);
	cout<<mystring<<endl;
	
}

#include <iostream>
#include <ctime>
#include <string>
#include "Time.h"

using namespace std;


Time :: Time()
{
	secs = 0;
	//cout<<ctime(&secs)<<endl;
}
Time :: Time(time_t t)
{
	secs = t;
}

Time :: Time(const Time& t)
{
	this->secs = t.secs; 
}
string Time :: toString() const //return time in the following format Www Mmm dd hh:mm:ss yyyy
{
	//struct tm *myString = localtime(&secs);
	return asctime(gmtime(&secs));
	
	
}		
string Time :: getMMDDYYYY() const		//return time in the following format MM/DD/YYYY
{
	//struct tm *myString = localtime(&secs);
	//return (to_string(myString -> tm_mon+1)+"/"+to_string(myString -> tm_mday)+"/"+to_string(myString -> tm_year + 1900));
	struct tm *myString = gmtime(&secs);
	return (to_string(myString -> tm_mon+1)+"/"+to_string(myString -> tm_mday)+"/"+to_string(myString -> tm_year + 1900));
}
string Time :: getYear() const 			//return year of time.
{
	struct tm *myString = gmtime(&secs);
	return to_string(myString -> tm_year + 1900);
}
int Time :: compareTime(const Time& t)
{
	return 0;		
}
//int main()
//{
//	int var = 10000;
//	Time t(var);
//	cout<<t.toString()<<endl;
//	var=0;
//	Time s(t);
//	cout<<s.toString()<<endl;
	
//	cout<<"HELLO"<<endl;
//	Time t = 0;
//	cout<<t.toString()<<endl;
//	cout<<t.getMMDDYYYY()<<endl;
//	cout<<t.getYear()<<endl;
//	
//	
//	//time_t secs = 0;
//	//cout<<asctime(gmtime(&secs));
////	time(&sec);
////	cout<<ctime(&sec)<<endl;
////	struct tm *myString = {0};
////	myString->tm_hour = 0;
////	myString->tm_mday = 0;
////	myString->tm_min = 0;
////	myString->tm_mon = 1;
////	myString->tm_sec = 0;
////	myString->tm_year = 100;
////	cout<<asctime(myString)<<endl;
////	//cout<<(to_string(myString -> tm_mon-(myString -> tm_mon))+"/"+to_string(myString -> tm_mday-(myString->tm_mday))+"/"+to_string(myString -> tm_year+1781))<<endl;;
//	
//
//
////	time_t sec2 = 1000;
////	time(&sec2);
////	cout<<ctime (&sec2)<<endl;
//	//struct tm *myTime = localtime(&sec2);
//	//string mystring = to_string(myTime->tm_mon+1);
//	//string mystring = asctime(myTime);
//	//cout<<mystring<<endl;
//	return 0;	
//}

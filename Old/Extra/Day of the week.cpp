/* David Leake
   Programming 1
   Due: September 7th, 2011
   Day of the Week
   This program will input a month, day, and a year, then 
   output the Day of the Week.
*/
#include <iostream>
using namespace std;
int main ()
{
int day;
int month;
int year;
cout << ("Enter date in MM/DD/YYYY form") << endl;
cin >> month >> day >> year;

if (month ==1) month==1;
if (month ==2) month==4;
if (month ==3) month==4;
if (month ==4) month==0;
if (month ==5) month==2;
if (month ==6) month==5;
if (month ==7) month==0;
if (month ==8) month==3;
if (month ==9) month==6;
if (month ==10) month==1;
if (month ==11) month==4;
if (month ==12) month==6;
int dayoftheweekone;
int dayoftheweek;
if ((year % 400 == 0) && (month ==2)) month = month -5;
else if (year % 100 == 0) {} 
else if ((year % 4 == 0) && (month ==2))
	 month = month -5;
if ((year % 400 == 0) && (month ==1)) month = month -7;
else if (year % 100 == 0) {} 
else if ((year % 4 == 0) && (month ==1))
	 month = month -7;
dayoftheweekone = month + day + year +6;
dayoftheweek = dayoftheweekone + year / 4 - year / 100 + year / 400;
dayoftheweek = dayoftheweekone % 7;

if (dayoftheweek ==0) cout << "Sunday"<< endl;
if (dayoftheweek ==1) cout << "Monday" << endl;
if (dayoftheweek ==2) cout << "Tuesday" << endl;
if (dayoftheweek ==3) cout << "Wednesday" << endl;
if (dayoftheweek ==4) cout << "Thursday" << endl;
if (dayoftheweek ==5) cout << "Friday" << endl;
if (dayoftheweek ==6) cout << "Saturday" << endl;
cout << dayoftheweek ;
system ("pause");








}
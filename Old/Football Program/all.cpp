#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
#include <iomanip>
using namespace std;

int main (){
string first="st";
string second="nd";
string third="rd";
string forth="th";    
string append;    
int down=1;
int distance=10;
int ballon=0;
int gainloss=0;;
char ballsign;
cout << "Where is the ball?" <<endl;
cin >> ballsign >>ballon;
if (ballsign =='+' && ballon <= 9) 
             {
                 distance = ballon;
                
              }           
system("cls");
append = first;
if (ballsign =='+' && ballon==distance)
{
cout << fixed
<<"                      " 
<<"------------------------------------" <<endl
<<"                          "
<< setw(5)<< "Down" 
<< setw(10)<< "Distance"  
<< setw(12)<< "Ball On"
<<endl;

cout <<"                     "
<< setw(7)<< down <<append 
<< setw(8)<< "Goal" 
<< setw(10)<< ballsign << ballon
<<endl
<<"                      " 
<<"------------------------------------" <<endl 
<<endl;           
}
else
{                                                        
cout << fixed
<<"                      " 
<<"------------------------------------" <<endl
<<"                          "
<< setw(5)<< "Down" 
<< setw(10)<< "Distance"  
<< setw(12)<< "Ball On"
<<endl;


cout <<"                     "
<< setw(7)<< down <<append 
<< setw(8)<< distance 
<< setw(10)<< ballsign << ballon 
<<endl
<<"                      " 
<<"------------------------------------" <<endl
<<endl;
}
cin >> newBallon;



cin.get();
cin.get();





}

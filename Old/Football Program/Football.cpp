#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>

using namespace std;

void plusBallCalc (int ball){
     
     ball = 50-ball;
     ball = ball + 50;
     cout <<ball <<endl;
     return ball;
     }

int main(){
int down;
int distance;
int ballon;
int ballonout;
char ballsign;
string first = "st";
string second = "nd";
string third = "rd";
string fourth = "th";
cout << "What yardline is the ball on?" <<endl;
cin >> ballsign;
cin >> ballon;
if(ballsign == '+'){
       plusBallCalc (ballon);
       ballonout = ball; 
       }
cout << "Ball is on the " << ballsign << ballonout <<endl;
cin.get();
cin.get();




}


#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
using namespace std;

int main (){

string first="st";
string second="nd";
string third="rd";
string forth="th";    
string append;
char ballsign;
int ballon;
string gol ="";
turnover:
int down=1;
int distance=10;
int gainloss;
cout << "                           " << "What yardline is the ball on?" <<endl;
cin >> ballsign >> ballon;
if (ballsign =='+' && ballon <= 9) 
             {
                 distance = ballon;
                
              }           
system("cls");
append = first;
//if turnover 1st and goal
if (ballsign =='+' && distance <= 9){
cout <<"                           " << down << append << " and " << "Goal" << " ball is on the "<< ballsign << ballon <<endl;
                                    }
else {
cout <<"                           " << down << append<< " and " << distance << " ball is on the "<< ballsign << ballon <<endl;
}
cout << "\n\n\n\n\n\n\n\n\nWhat happened on the last play" <<endl;
begin:

cin >> gol;
if (gol =="turnover"){
        goto turnover;
        }
if (gol =="td"){
        system("cls");
                          ballsign ='+';
                          ballon =3;
                          cout << "*PAT*" << " and " <<"*PAT*" << " ball is on the "<< ballsign << ballon <<endl;
                          cout << "What happened on the last play" <<endl;
                          cout <<"Touchdown! " <<endl;
                          cin.get();
                          cin.get();
                          system("cls");
                          goto turnover;
                          }
        
string of;
cin >> of;
cin >> gainloss;

//if gain
if (gol == "gain")
    {     
            
               
         if (gainloss < distance)
               { down ++;
             if (ballsign =='+')
                {
                ballon=ballon-gainloss;
                distance = distance - gainloss;
               if(ballon < 1){
                          system("cls");
                          ballsign ='+';
                          ballon =3;
                          cout << "*PAT*" << " and " <<"*PAT*" << " ball is on the "<< ballsign << ballon <<endl;
                          cout << "What happened on the last play" <<endl;
                          cout <<"Touchdown! " <<endl;
                          cin.get();
                          cin.get();
                          system("cls");
                          goto turnover;
                          }
                 }
             //if ballsign is -
             else {
                  ballon=ballon + gainloss;
                   distance = distance - gainloss;
               
                  if (ballon > 50){
                                  ballsign='+';
                                  ballon=100-ballon;
                              
                                  }
                  }   
       
              
                 }
         //gainloss > distance
         else {
             down=1;
             distance =10;
             if (ballsign =='-'){
             ballon=gainloss + ballon;
             }
             else {
                  ballon = ballon - gainloss;
                 if(ballon < 1){
                          system("cls");
                          ballsign ='+';
                          ballon =3;
                          cout << "*PAT*" << " and " <<"*PAT*" << " ball is on the "<< ballsign << ballon <<endl;
                          cout << "What happened on the last play" <<endl;
                          cout <<"Touchdown! " <<endl;
                          cin.get();
                          cin.get();
                          system("cls");
                          goto turnover;
                          }
                  }
            if (ballon > 50)
            {
             ballsign ='+';
             ballon = ballon-50;
             ballon = 50-ballon;
                    if(ballon < 1){
                          system("cls");
                          ballsign ='+';
                          ballon =3;
                          cout << "*PAT*" << " and " <<"*PAT*" << " ball is on the "<< ballsign << ballon <<endl;
                          cout << "What happened on the last play" <<endl;
                          cout <<"Touchdown! " <<endl;
                          cin.get();
                          cin.get();
                          system("cls");
                          goto turnover;
                          }      
                  }
                  //cout << "ballon is "<< ballon << endl;
             
             //goal to go
             if (ballsign =='+' && ballon <= 9) 
                          {
             
                           distance = ballon;
                          if(ballon < 1){
                          system("cls");
                          ballsign ='+';
                          ballon =3;
                          cout << "*PAT*" << " and " <<"*PAT*" << " ball is on the "<< ballsign << ballon <<endl;
                          cout << "What happened on the last play" <<endl;
                          cout <<"Touchdown! " <<endl;
                          cin.get();
                          cin.get();
                          system("cls");
                          goto turnover;
                          }
                           } 
                 
         
              }
    
                                 
          }
//if loss
if (gol == "loss")
{
down ++;
distance = distance + gainloss;
                 if(ballsign =='+')
                             { 
                               ballon = ballon+gainloss;
                               if (ballon > 50)
                                      {
                                      ballsign ='-';
                                      ballon = 100-ballon;
                                      }
                              }
                 else 
                 {
                 ballon = ballon - gainloss;
                 }

}

if (down ==1)
{append = first;
}
if (down ==2)
{append = second;
}
if (down ==3)
{append = third;
}
if (down ==4)
{append = forth;
}

if (ballsign =='+' && ballon==distance)
{
cout << "                           " << down << append << " and " << "Goal" << " ball is on the "<< ballsign << ballon <<endl;            
}
else
{                                                        
cout << "                           " << down <<append << " and " << distance << " ball is on the "<< ballsign << ballon <<endl;
}
cout << "                           " << "What happened on the last play" <<endl;
//cout << ballsign <<endl;
while (down <5){
goto begin;   
}
system("pause");

}


#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
#include <iomanip>
using namespace std;

int main (){
char away[256];
char home[256];
char naway[256];
char nhome[256];
invalidAway:
cout << "\n\nWho is the away team?" <<endl;
cin.getline (away,35);
int asize=0;
for (asize = 0; away[asize] != NULL; asize++);
if (asize >= 11){
          cout << "Inalid Input" <<endl;
          cin.get();
          system("cls");
          goto invalidAway;
          }          
invalidHome:
system("cls");
cout << "\n\n\n\n\n\n\n\n\n\nWho is the home team?" <<endl;
cin.getline (home,35);
int hsize=0;
for (hsize = 0; home[hsize] != NULL; hsize++);
if (hsize >= 11){
          cout << "Inalid Input" <<endl;
          cin.get();
          system("cls");
          goto invalidHome;
          }
reset:
system("cls");
string qtr ="Quarter ";
char qtrn='1';  
int hw=19;
int aw=13;
int sw=18;
int conv=0;
if (asize <= 9){
        conv = 10 - asize;
        conv = conv / 2;
        sw = sw - conv;
        aw = aw + conv;
        }        
if (hsize <=9){
        conv =0;
        conv = 10 - hsize;
        conv = conv /2;
        hw = hw - conv;
        }

int homescore=0;
int awayscore=0;
int nhomescore=0;
int nawayscore=0;
int hometo =3;
int awayto=3;
char timeout='d';
char poss;
char nposs;
string patattempt ="PAT Attempt ";
string yards = " yards";
string touchdown = "TOUCHDOWN ";
string homeposs = "Possesion >";
string awayposs = " < Possesion  ";
string possposs = "Possesion  ";
char ispatgood;
string pats;
string first="st";
string second="nd";
string third="rd";
string forth="th";    
string append;
string of;
int cc;
char ballsign='s';
int ballon;
string gol="";
turnover:
gol ="";
yards="";
patattempt ="PAT Attempt ";        
if (possposs == homeposs){
                          possposs = awayposs;
                          goto TOcheck;
                          }
if (possposs == awayposs){
                          possposs = homeposs;
                          }
                          TOcheck:

int down=1;
int distance=10;
int gainloss=0;
int tdyards;
int i=0;
goto skip;
int ndown;
int ndistance;
char nballsign;
int nballon;
cout << "\n\n\n\n\n\n\n\n\n\nWho has the ball? 'h'home or 'a'way" <<endl;
cin >> poss;
if (poss =='a'){
         possposs = awayposs;
         }
if (poss =='h'){
         possposs = homeposs;
         }
if (ballsign =='+' && ballon <= 10) 
             {
                 distance = ballon; 
              }           
system("cls");
skip:
cout << "\n\n\n\n\n\n\n\n\n\nWhat yardline is the ball on?" <<endl;
cin >> ballsign;
if (ballsign =='r'){
             goto reset;
             }
cin >> ballon;
system("cls");
append = first;
//if turnover 1st and goal
goto output;

begin:
cin >> gol;
if (gol =="r"){
             goto reset;
             }
if (gol =="c"){
             goto correction;
             }
if (gol =="q"){
             if (qtr =="HALFTIME"){
                     qtr ="Quarter ";
                     qtrn='3';
                     goto output;
                     }
             if (qtrn =='1'){
                      qtrn = '2';
                      goto output;}
             if (qtrn =='1'){
                      qtrn = '2';
                      goto output;}
             if (qtrn =='2'){
                      qtrn = '3';
                      goto output;}
             if (qtrn =='3'){
                      qtrn = '4';
                      goto output;}
            if (qtrn =='4'){
                      qtrn= '1';
                    goto output;}
            
             } 
if (gol == "half"){
        qtrn = NULL;
        possposs = "   Possesion  ";
        qtr = "HALFTIME";
        awayto=3;
        hometo=3;
        goto ko;
        } 
if (gol == "final"){
        qtrn = NULL;
        qtr = "   FINAL";
        goto output;
        }              
if (gol =="p"){
             if (possposs == homeposs){
                          possposs = awayposs;
                          goto output;
                          }
             if (possposs == awayposs){
                          possposs = homeposs;
                          goto output;
                          }
             if (possposs != awayposs || possposs != homeposs){
                          possposs = awayposs;
                          goto output;
                          }
             }
if (gol =="pp") {
        string possposs = "  Possesion  ";
        goto output;
        }
if (gol =="timeout") {
        cout <<"Who called TO, 'h'ome or 'a'way?" <<endl;
        cin >> timeout;
        if (timeout == 'a'){
                    gol = "Timeout: ";
                    yards = away;
                    of ="";
                    gainloss=NULL;
                    awayto--;
                    goto output;
                    }
        if (timeout == 'h'){
                    gol = "Timeout: ";
                    yards = home;
                    hometo--;
                    goto output;
                    }
        }
if (gol =="to"){
        goto turnover;
        }
//Defensive TD              
if (gol =="dtd"){          
                          deftouchdown:
                          if (possposs == homeposs){
                          awayscore = awayscore +6;
                          touchdown = "Touchdown ";
                          yards = away;
                          goto TDcheckdef;
                          }
                          if (possposs == awayposs){
                          homescore = homescore +6;
                          touchdown = "TOUCHDOWN ";
                          yards = home;
                          goto TDcheckdef;
                          }
                          TDcheckdef:
                          if (possposs == homeposs){
                          possposs=awayposs;
                          }
                          if (possposs == awayposs){
                          possposs=homeposs;
                          }
                          system("cls");    
                          if (ballsign =='+'){
                          tdyards = 50 - ballon;
                          tdyards = 50 + ballon;
                          }
                          else {
                          tdyards = ballon;
                          }
                          tdyards =NULL;
                          ballsign ='+';
                          ballon =3;
                          cout << fixed
                          << setw(37) <<"Previous Play: "<<touchdown <<yards <<endl
                          <<"                      " <<"------------------------------------" <<endl
                          << setw(sw)
                          << away
                          << setw(aw)<< "Down" 
                          << setw(11)<< "Distance"  
                          << setw(11)<< "Ball On"
                          << setw(hw)<< home
                          <<endl;
                            
                            
                          cout  
                          << setw(14) << awayscore 
                          << setw(17)<< "PAT"
                          << setw(8)<< "PAT" 
                          << setw(10)<< ballsign << ballon 
                          << setw(18)<< homescore 
                          << endl << setw(58) <<"------------------------------------" 
                          <<endl <<setw(29) <<"TOL" <<setw(14) <<  qtr << qtrn << setw(9) << "TOL" 
                          <<endl <<setw(28) << awayto <<setw(18) << possposs << setw(6) << hometo 
                          << endl
                          <<setw(58) <<"------------------------------------" <<endl
                          <<endl; 
                          goto extrap;      
                          }                   
                          
if (gol =="td"){          
                          touchdown:
                          if (possposs == homeposs){
                          touchdown = "TOUCHDOWN ";
                          yards = home;
                          homescore = homescore +6;
                          goto TDcheck;
                          }
                          if (possposs == awayposs){
                          touchdown = "Touchdown ";
                          yards = away;
                          awayscore = awayscore +6;
                          goto TDcheck;
                          }
                          TDcheck:
                          system("cls");    
                          if (ballsign =='-'){
                          tdyards = 100 - ballon;
                          }
                          else {
                          tdyards = ballon;
                          }
                          ballsign ='+';
                          ballon =3;
                          cout << fixed
                          << setw(37) <<"Previous Play: "<<touchdown <<yards <<endl
                          <<"                      " <<"------------------------------------" <<endl
                          << setw(sw)
                          << away
                          << setw(aw)<< "Down" 
                          << setw(11)<< "Distance"  
                          << setw(11)<< "Ball On"
                          << setw(hw)<< home
                          <<endl;
                            
                            
                          cout  
                          << setw(14) << awayscore 
                          << setw(17)<< "PAT"
                          << setw(9)<< "PAT" 
                          << setw(9)<< ballsign << ballon 
                          << setw(18)<< homescore 
                          << endl << setw(58) <<"------------------------------------" 
                          <<endl <<setw(29) <<"TOL" <<setw(14) <<  qtr << qtrn << setw(9) << "TOL" 
                          <<endl <<setw(28) << awayto <<setw(18) << possposs << setw(6) << hometo 
                          << endl
                          <<setw(58) <<"------------------------------------" <<endl
                          <<endl; 
                        
                          
  extrap:                        
    cout << "\n\n\n\n\n\n\n\n\n\nis PAT good? Enter 'y' for FG, 'c' for 2PT, 'n' for no good" <<endl;
                          cin >> ispatgood;     
                          if(possposs ==homeposs && ispatgood=='c'){
                          homescore = homescore +2;
                          patattempt ="2PT Conversion ";
                          pats = "is GOOD!";
                          }
                          else if (possposs==awayposs && ispatgood=='c'){awayscore = awayscore+2;
                          patattempt ="2PT Conversion ";
                          pats = "is good";}
                          else { pats = "No good";}
                          
                          if(possposs ==homeposs && ispatgood=='y'){
                          homescore = homescore +1;
                          pats = "is GOOD!";
                          }
                          else if (possposs==awayposs && ispatgood=='y'){awayscore = awayscore+1;
                           pats = "is good";}
                          else if (ispatgood =='n'){ pats = "No good";}
                          ko:
                          system("cls");    
                          ballsign ='-';
                          ballon =40;
                          cout << fixed
                          << setw(37) <<"Previous Play: "<<patattempt << pats <<endl
                          <<"                      " <<"------------------------------------" <<endl
                          << setw(sw)
                          << away
                          << setw(aw)<< "Down" 
                          << setw(11)<< "Distance"  
                          << setw(11)<< "Ball On"
                          << setw(hw)<< home
                          <<endl;
                            
                            
                         cout  
                          << setw(14) << awayscore 
                          << setw(17)<< "KO"
                          << setw(8)<< "KO" 
                          << setw(10)<< ballsign << ballon 
                          << setw(17)<< homescore 
                          << endl << setw(58) <<"------------------------------------" 
                          <<endl <<setw(29) <<"TOL" <<setw(14) <<  qtr << qtrn << setw(9) << "TOL" 
                          <<endl <<setw(28) << awayto <<setw(18) << possposs << setw(6) << hometo 
                          << endl
                          <<setw(58) <<"------------------------------------" <<endl
                          <<endl; 
                          cin.get();
                          cin.get();       
                          //system("cls");
                          touchdown = "Kickoff";
                          goto turnover;
                          }
if (gol =="saf"){          
                          defsaf:
                          if (possposs == homeposs){
                          awayscore = awayscore +2;
                          touchdown = "Saftey, ";
                          yards = away;
                          goto safcheckdef;
                          }
                          if (possposs == awayposs){
                          homescore = homescore +2;
                          touchdown = "SAFTEY! ";
                          yards = home;
                          goto safcheckdef;
                          }
                          safcheckdef:
                          system("cls");    
                          if (ballsign =='+'){
                          tdyards = 50 - ballon;
                          tdyards = 50 + ballon;
                          }
                          else {
                          tdyards = ballon;
                          }
                          ballsign ='-';
                          ballon =40;
                          cout << fixed
                          << setw(37) <<"Previous Play: "<<touchdown <<yards <<endl
                          <<"                      " <<"------------------------------------" <<endl
                          << setw(sw)
                          << away
                          << setw(aw)<< "Down" 
                          << setw(11)<< "Distance"  
                          << setw(11)<< "Ball On"
                          << setw(hw)<< home
                          <<endl;
                            
                            
                          cout  
                          << setw(14) << awayscore 
                          << setw(17)<< "FK"
                          << setw(8)<< "FK" 
                          << setw(10)<< ballsign << ballon 
                          << setw(17)<< homescore 
                          << endl << setw(58) <<"------------------------------------" 
                          <<endl <<setw(29) <<"TOL" <<setw(14) <<  qtr << qtrn << setw(9) << "TOL" 
                          <<endl <<setw(28) << awayto <<setw(18) << possposs << setw(6) << hometo 
                          << endl
                          <<setw(58) <<"------------------------------------" <<endl
                          <<endl;  
                          cin.get();
                          cin.get();  
                          goto turnover;      
                          }                   
                          
if (gol =="fg"){          cout << "\n\n\nis Field Goal good?" <<endl;
                          cin >> ispatgood;     
                          if(possposs ==homeposs && ispatgood=='y'){
                          homescore = homescore +3;
                          pats = "is GOOD";
                          }
                          else if (possposs==awayposs && ispatgood=='y'){awayscore = awayscore+3;
                           pats = "is GOOD";}
                          else { 
                          if (possposs == homeposs){
                          possposs = awayposs;
                          goto output;
                          }
             if (possposs == awayposs){
                          possposs = homeposs;
                          goto output;
                          }
             if (possposs != awayposs || possposs != homeposs){
                          possposs = awayposs;
                          down =1;
                          distance = 10;
                          goto output;
                          }     
                          pats = "No Good";
                          goto output;
                          }

                          fgcheckdef:
                          system("cls");    
                          if (ballsign =='+'){
                          tdyards = ballon + 17;
                          }
                          else {
                          tdyards = 50 - ballon;
                          tdyards = 50 + tdyards;
                          tdyards = tdyards + 17;
                          }
                          ballsign ='-';
                          ballon =40;
                          cout << fixed
                          << setw(37) <<"Previous Play: "<<"Field Goal of " <<tdyards <<yards <<endl
                          <<"                      " <<"------------------------------------" <<endl
                          << setw(sw)
                          << away
                          << setw(aw)<< "Down" 
                          << setw(11)<< "Distance"  
                          << setw(11)<< "Ball On"
                          << setw(hw)<< home
                          <<endl;
                            
                            
                          cout  
                          << setw(14) << awayscore 
                          << setw(17)<< "KO"
                          << setw(8)<< "KO" 
                          << setw(10)<< ballsign << ballon 
                          << setw(17)<< homescore 
                          << endl << setw(58) <<"------------------------------------" 
                          <<endl <<setw(29) <<"TOL" <<setw(14) <<  qtr << qtrn << setw(9) << "TOL" 
                          <<endl <<setw(28) << awayto <<setw(18) << possposs << setw(6) << hometo 
                          << endl
                          <<setw(58) <<"------------------------------------" <<endl
                          <<endl; 
                          cin.get();
                          cin.get(); 
                          goto turnover;      
                          }                   
                          

if (gol == "b"){
        goto newballon;
        }

cin >> of;
cin >> gainloss;

system("cls");
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
                          goto touchdown;
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
                          goto touchdown;
                          goto turnover;
                          }
                  }
            if (ballon > 50)
            {
             ballsign ='+';
             ballon = ballon-50;
             ballon = 50-ballon;
                    if(ballon < 1){
                          goto touchdown;
                          goto turnover;
                          }
                  }
                  //cout << "ballon is "<< ballon << endl;
             
             //goal to go
             if (ballsign =='+' && ballon <= 9) 
                          {
             
                           distance = ballon;
                          if(ballon < 1){
                          goto touchdown;
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
correction:
while (gol == "c" && i < 1)
{system("cls");
cout << "****CORRECTIONS****" <<endl;
cout << "Press 0 to void a change in data, press 00 to void a score change" <<endl;
cout << "enter down" <<endl;
cin >> ndown;
cout << "enter distance" <<endl;
cin >> ndistance;
cout << "enter ball on" <<endl;
cin >> nballsign;
cin >> nballon;
cout <<"Enter the " << home << " score" <<endl;
cin >> nhomescore;
cout <<"Enter the " << away << " score" <<endl;
cin >> nawayscore;
cout <<"Who has the ball? 'h' or 'a' ?" <<endl;
cin >>nposs;
cout <<"How many timeouts does the " << away << " team have?" <<endl;
cin >>awayto;
cout <<"How many timeouts does the "<< home << " team have?" <<endl;
cin >>hometo;


//cout <<"Re-Type Away name" <<endl;
//cin >> naway;
//cout <<"Re-Type Home name" <<endl;
//cin >> nhome;
system("cls");
//if (naway !=away && naway !="0"){
//          away = naway;
//          }
//else {away = away;} 
//if (nhome !=home && nhome !="0"){
//          home = nhome;
//          }
//else {home = home;}           
if (ndown ==0){
         down =down;
         }
else {down = ndown;}
if (ndistance ==0){
              distance = distance;
          }
else {distance = ndistance;}
if (nballsign==0 || nballon ==0){
            ballsign = ballsign;
            ballon = ballon;
            }
else {ballon=nballon; ballsign = nballsign;}          
if (nhomescore != homescore && nhomescore != 00){
homescore = nhomescore;
}
if (nawayscore != awayscore && nawayscore != 00){
awayscore = nawayscore;
}
if (nposs ==0){
         poss =poss;
         }
else {poss = nposs;}

i++;
i=0;
goto output;
newballon:

if (gol == "b")
{
cout << "New Ballspot?" <<endl;
cin >> nballsign >> nballon;
if (nballon == ballon){
            down++;
            }
if (nballsign =='+' && ballsign=='-'){
              gol = "gain";
              of = "of";
              gainloss = (100 - (ballon + nballon));
              }
if (nballsign =='-' && ballsign=='+'){
              gol = "loss";
              of = "of";
              gainloss = (100 - (ballon + nballon));
              }
if (nballsign =='+' && ballsign=='+' && nballon < ballon){
              gol = "gain";
              of = "of";
              gainloss = (ballon - nballon);
              }
if (nballsign =='+' && ballsign=='+' && nballon > ballon){
              gol = "loss";
              of = "of";
              gainloss = (nballon - ballon);
              }
if (nballsign =='-' && ballsign=='-' && nballon > ballon){
              gol = "gain";
              of = "of";
              gainloss = (nballon - ballon);
              }
if (nballsign =='-' && ballsign=='-' && nballon < ballon){
              gol = "loss";
              of = "of";
              gainloss = (ballon - nballon);
              }
ballsign= nballsign;
ballon = nballon;
if (gol =="gain" && gainloss < distance)
{down ++;
distance = distance - gainloss;
goto output;
}
if (gol =="gain" && gainloss > distance)
{down =1;
distance=10;
}
if (gol =="gain" && gainloss > distance && (ballsign !='+' && ballon <= 10))
{down =1;
distance =10;
}
if (gol =="gain" && gainloss > distance && (ballsign =='+' && ballon <= 10) && distance != ballon)
{down =1;
distance =ballon;
}
if (gol =="loss")
{down ++;
distance = distance + gainloss;
}
}

}
output:
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
if (gol =="c")
{gol ="";
gainloss=0;
}

system("cls");
if (ballsign =='+' && ballon==distance)
{
//if (gol != "gain" || "loss")
//{
// gol = " ";
// of = " ";
// gainloss = 0;       
//}
cout << fixed
<< setw(40) <<"  Previous Play: "<<gol <<" " << of << " "<<gainloss <<yards <<endl
<<"                      " <<"------------------------------------" <<endl
                          << setw(sw)
                          << away
                          << setw(aw)<< "Down" 
                          << setw(11)<< "Distance"  
                          << setw(11)<< "Ball On"
                          << setw(hw)<< home
                          <<endl;
                            
                            
                       
                          cout  
                          << setw(13) << awayscore 
                          << setw(17)<< down << append
                          << setw(9)<< "Goal" 
                          << setw(9)<< ballsign << ballon 
                          << setw(18)<< homescore 
                          << endl << setw(58) <<"------------------------------------" 
                          <<endl <<setw(29) <<"TOL" <<setw(14) <<  qtr << qtrn << setw(9) << "TOL" 
                          <<endl <<setw(28) << awayto <<setw(18) << possposs << setw(6) << hometo 
                          << endl
                          <<setw(58) <<"------------------------------------" <<endl
                          <<endl;  
}
else
{                                                        
cout << fixed
<< setw(40) <<"  Previous Play: "<<gol <<" " << of << " "<<gainloss <<yards <<endl
<<"                      " <<"------------------------------------" <<endl
                       
                          << setw(sw)
                          << away
                          << setw(aw)<< "Down" 
                          << setw(11)<< "Distance"  
                          << setw(11)<< "Ball On"
                          << setw(hw)<< home
                          <<endl;
                            
                            
                        
                          cout  
                          << setw(14) << awayscore 
                          << setw(15)<< down <<append
                          << setw(8)<< distance 
                          << setw(10)<< ballsign << ballon 
                          << setw(17)<< homescore 
                          << endl << setw(58) <<"------------------------------------" 
                          <<endl <<setw(29) <<"TOL" <<setw(14) <<  qtr << qtrn << setw(9) << "TOL" 
                          <<endl <<setw(28) << awayto <<setw(18) << possposs << setw(6) << hometo 
                          << endl
                          <<setw(58) <<"------------------------------------" <<endl
                          <<endl; 

}
gol ="";
yards="";
 if (qtr =="HALFTIME"){
                     qtr ="Quarter ";
                     qtrn='3';
                     goto output;
                     }
cout << "\n\n\n\n\n\n\n\n\n\nWhat happened on the previous play? \nPress 'r' to Reset Program\nPress 'c' for Corrections\nPress 'b' for new ballspot" <<endl;
//cout << ballsign <<endl;
while (down <=4){

goto begin;  
 
}
system("pause");

}


#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
using namespace std;

int main (){
  
      //***********************************************
  
    ifstream myfile ("password.txt");
    if (myfile.is_open()){
    cout << "Good File...please wait" <<endl;
     Sleep(100);
     system("cls");
     string usernamecheck;
     string passwordcheck;
     getline(myfile,usernamecheck);
     getline(myfile,passwordcheck);
     
       string username;
    string password;
    cout << "please enter username " <<endl;
    cin >> username;
    system("cls");
    cout << "please enter password " <<endl;
    //cin >> password;
 
    char c=' ';
    string pass="";
    
    while (c!=13) /* ENTER KEY */
    {
          c=getch();
          
          if (c!=13)
          {        
                    password+=c;
                    cout<<"*";
                    //cout << "c is equal to " << c << " " <<endl;
          if (c==8){
                          
                          cout << "\b" << "\b";
                          //cout << "if c==8 " << c <<endl;
                          
                          }
                    }
          }
   
 
    
    //***********************************************
     
     
     
     //cout <<"username is "<<username <<endl;
     //cout <<"usernamecheck is "<<usernamecheck <<endl;
     //cout <<"password is "<<password <<endl;
     //cout <<"passwordcheck is "<<passwordcheck <<endl;
     
     if(username == usernamecheck && password == passwordcheck){
                 cout <<"\nSucess Bitches!" <<endl;
                 }
     else { cout << " Wrong Username or Password" <<endl; } 
     cout << password << " this is the password " <<endl;
     cin.get();
     cin.get();
     
     
     
     myfile.close();
}  

  else cout << "Unable to open file"; 
  cout << "\n\n\nBye" << endl;
  cin.get();
  
}

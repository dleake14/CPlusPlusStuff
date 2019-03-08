// written by Cipherence
// compiled with Dev-C++
// use, re-write, claim as your own. whatever
// hope you learn, it lacks comments
#include<iostream>
#include<fstream>
#include<conio.h>

using namespace std;

void Auth();
void Members();
void Userchange();
void Passchange();

string inuser;
string inpass;
string user;
string pass;
int num = 0;
string com;

main()
{
      system("cls");
      cout<<"Welcome\n---------------------------\n\n";
      while(num==0)
      {
      system("cls");
      cout<<"Command: ";
      cin>>com;
      if(com=="login")
      {
      Auth();
      }
      else if(com=="change-pass")
      {
           Passchange();
           }
      else if(com=="change-user")
      {
           Userchange();
           }
      else if(com=="credits")
      {
           cout<<"written by Jason Parker"; // cuz it was
           }
      else if(com=="exit")
      {
           cout<<"written by Cipherence SoftWurx";
           getch();
           break;
           }
      else if(com==com)
      {
           cout<<"Unknown command\n";
           }
      }
}
void Auth()
{
     ifstream Passfile("password.txt", ios::in);
     Passfile>>inpass;
     ifstream Userfile("username.txt", ios::in);
     Userfile>>inuser;
     system("cls");
     cout<<"USERNAME: ";
     cin>>user;
     cout<<"PASSWORD: ";
     cin>>pass;
     Userfile.close();
     Passfile.close();
     if(user==inuser&&pass==inpass)
     {
     cout<<"\nHit enter to continue to members area";
     getch();
     Members();
     }
     else
     {
         cout<<"nope";
         getch();
         main();
         }
}
void Userchange()
{
     string tempass;
     system("cls");
     cout<<"enter current password: ";
     cin>>tempass;
     if(tempass==inpass)
     {
     cout<<"utility to change username stored in file\n";
     cout<<"CHANGE USER TO: ";
     cin>>user;
     ofstream Userfile("username.txt", ios::out);
     Userfile<<user;
     Userfile.close();
     cout<<"Username successfully changed";
     getch();
     main();
}
else
{
    cout<<"Invalid Password";
    getch();
    main();
}
}
void Passchange()
{
     string tempass;
     system("cls");
     cout<<"enter current password: ";
     cin>>tempass;
     if(tempass==inpass)
     {
     cout<<"utility to change password stored in file\n";
     cout<<"CHANGE PASS TO: ";
     cin>>user;
     ofstream Passfile("password.txt", ios::out);
     Passfile<<user;
     Passfile.close();
     cout<<"password successfully changed";
     getch();
     main();
}
else
{
    cout<<"Invalid Password: ";
    getch();
    main();
}
}
void Members()
{
     cout<<"nothing";// put members code here
     // like a while(){} loop or somethin like that
     // comment please
}

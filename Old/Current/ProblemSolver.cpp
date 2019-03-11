#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;

int main () {
system ("title Problem Solver: By David Leake");
cout << "Welcome to the random number problem solver by David Leake" << endl;
cout << "Press enter to continue" << endl;
cin.get();
system("cls");
cout << "Enter the question you want randomly answered" <<endl;
string question = "";
getline (cin, question);
system("cls");
cout << "\nHow many answers are there?" <<endl;
int answers=0;
while (!(cin>>answers)){
	cout <<"\nInvalid Input, plese neter a number" <<endl;
	cin.clear();
	cin.ignore();
}
cin.get();
string *answerArr = new string [answers];
int i =1;
while (i < answers+1){
	cout << "\nEnter the option for answer #" << i << " please" <<endl;
	string line;
	getline (cin, line);
	i -=1;
	answerArr[i] = line;
	i+=2;
}
system ("cls");
cout << question << endl;
cout << "\n\n\nThe randomly generated answer is: ";
srand ( time(NULL) );
int r = rand () % answers;
cout << answerArr[r] << endl;
cin.get();

}

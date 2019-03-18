#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int minDiv (int n){
	int num =n;
	int dis = num;
	int test=2;
	while (num != 1){
	if (num % test ==0){
	cout <<test << " ";
	num = num / test;
	}
	else {test +=1;}
	}
	return 1;
}
int minDivLong (long long n){
	int count =0;
	long long num =n;
	long long test=2;
	while (num != 1){
	if (num % test ==0){
	cout << test << " ";
	num = num / test;
	}
	else {test +=1;}
	}
	return 1;
}


int main () {
	
double start, elap;

int n=-1;
while (n < 1){
n=-1;
cout << "Please enter a positive integer" <<endl;
cin >>n;
if (n > 0){
	break;
}
cin.clear();
}
cin.ignore();
system ("cls");
minDiv(n);
cin.get();
system ("cls");
cout << "Would you like to try with a long long data type?" <<endl;
cout << "yes or no?" <<endl;
string answer ="";
cin >> answer;
if (answer == "yes" || answer == "y"){
long long m=-1;
while (m < 1){
m=-1;
cout << "Please enter a positive integer" <<endl;
cin >>m;
if (m > 0){
	break;
}
cin.clear();
}
cin.ignore();
system ("cls");
start = clock();
minDivLong(m);
elap = (clock()-start) /CLOCKS_PER_SEC;
cout << "Time was: "<< setprecision(2) << elap << endl;
}
cin.get();
}



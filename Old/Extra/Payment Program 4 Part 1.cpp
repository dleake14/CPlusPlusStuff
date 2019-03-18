/* David Leake
   Programming 1
   Due: September 26, 2011
   Payment Program 4 Part 1
   This program with recieve an input of a total borrowed, a number of months, and an interest rate and 
   then give out a monthly payemnt. 
   */
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <math.h>
#include <iomanip>
using namespace std;

double main2(double interest, double total, double years)
{
	
double monthlyinterestRate = interest / 1200;
double a = 1 + monthlyinterestRate;
double b = 1 / a;
double c = 12 * years;
double d = pow(b, c);
double e=1-d;
double f = total * monthlyinterestRate;
double payment = f / e;

return payment;
}

int main()

{

cout << "Please enter the total amount borrowed (ex. 215000)" << endl;
double total;
cin >> total;
system ("cls");
cout << "You entered " << endl;;
cout << endl << total << "$" << endl;
cin.get();
cout << endl << "Press any key to continue" << endl;
cin.get();

system("cls");

cout << endl << "Please enter the interest rate (ex. 9.752)" << endl;
double interest;
cin >> interest;
system ("cls");
cout << "You entered " << endl;;
cout << endl << interest << "%" << endl;
cin.get();

cout << endl << "Press any key to continue" << endl;

cin.get();

system("cls");

cout << endl << "Please enter the number of years for the loan (ex. 30)" << endl;
double years;
cin >> years;
system ("cls");
cout << "You entered " << endl;;
cout << endl << years << " Years" << endl;
cin.get();
cout << endl << "Press any key to continue" << endl;
cin.get();


double z = main2 (interest, total, years);


cout.setf(ios::fixed);

cout << "Total Amount to Borrow " << setprecision(0) << total << "$" << endl;
cout << "Interest Rate " << setprecision(2) << interest << "%" << endl;
cout << "Total Amount of Years " << setprecision(0) << years << endl;
cout << "And " << endl;
cout << "Your monthly payment would be " << endl << setprecision(2) << z << endl;
cin.get();
return 0;


}


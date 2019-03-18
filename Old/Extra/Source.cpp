#include <iostream>
#include <string>
#include "Class.h"

using namespace std;


void optionPrint(int empTotal){
	cout << "Employee total is " << empTotal << "/5 (required)" << endl;
	cout << "To input an employee, press 1" << endl;
	cout << "To search an employee, press 2" << endl;
	cout << "To End Porgram, press 0" << endl;

}



int main() {
	const int MAX = 1000;
	int i = 0;
	int si = 0;
	int input = 0;
	int empCount = 0;
	string sInput = "";
	string inFirst, inLast = "";
	int inYears = 0;
	double inSal = 0;
	Employee * ar[MAX];
	Employee * mainPoint;
	optionPrint(empCount);
	cin >> input;
	if (cin.fail() == true){
		cin.clear();
		cin.ignore();
		optionPrint(empCount);
		cin >> input;
	}
	while (input != 0){
		if (input == 1){
			mainPoint = new Employee;
			cout << "Enter Employee First Name" << endl;
			cin >> inFirst;
			cout << "Enter Employee Last Name" << endl;
			cin >> inLast;
			cout << "Enter Employee Salary" << endl;
			cin >> inSal;
			cout << "Enter Employee Years" << endl;
			cin >> inYears;
			mainPoint->set(inLast, inFirst, inSal, inYears);
			ar[i] = mainPoint;
			i++;
			empCount++;
			optionPrint(empCount);
			cin >> input;
			while (cin.fail() == true){
				cin.clear();
				cin.ignore();
				optionPrint(empCount);
				cin >> input;
			}
			
		}
		if (input == 2){
			cout << "Enter a first or last name" << endl;
			cin >> sInput;
			if (cin.fail() == false){
			for (si = 0; si < i; si++){
				if (ar[si]->searchFirstName(sInput) == true || ar[si]->searchLastName(sInput) == true){
					ar[si]->display();
				}
			}
			cout << "\n\n\n\n\nPress any key to go back to options" << endl;
			cin.ignore();
			cin.get();
			}
			optionPrint(empCount);
			cin >> input;
		}

	}
	cout << "\n\n\n\n\nProgram Ended - Press any key to exit" << endl;
	cin.ignore();
	cin.get();

}


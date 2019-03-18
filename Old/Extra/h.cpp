#include "EmployeeClass.h"
#include <iostream>
using namespace std;

	void Employee::display(){
		cout << "Employee Name: " << lastName << ", " << firstName << endl;
		cout << "Net Pay: " << netPay << endl;
		cout << "SSN: " << ssn << endl;
	}
	bool Employee::searchFirstName(string firstTest){
		if (firstTest == firstName){ return true; }
		else return false;
	}
	bool Employee::searchLastName(string lastTest){
		if (lastTest == lastName){ return true; }
		else return false;
	}
	void const Employee::setFirst(string fn){
		firstName = fn;
	}
	void const Employee::setLast(string ln){
		lastName = ln;
	}
	void const Employee::setSSN(int sn){
		ssn = sn;
	}
	void const Employee::setNetPay(double np){
		netPay = np;
	}

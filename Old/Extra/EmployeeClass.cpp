#include "EmployeeClass.h"
#include <iostream>
using namespace std;


void Employee::printCheck(){
	cout << "Employee Name: " << lastName << ", " << firstName << endl;
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
void const Employee::setFirst(string frstname){
	firstName = frstname;
}
void const Employee::setLast(string lstname){
	lastName = lstname;
}
void const Employee::setSSN(int sn){
	ssn = sn;
}



#include "Class.h"
#include <iostream>
using namespace std;


	

	void Employee::display(){
		cout << "Employee Name: " << last << ", " << first << endl;
		cout << "Salary: " << salary << endl;
		cout << "Years: " << years << endl;
	}
	bool Employee::searchFirstName(string firstTest){
		if (firstTest == first){ return true; }
	}
	bool Employee::searchLastName(string lastTest){
		if (lastTest == last){ return true; }
	}
	void Employee::set(string lst, string frst, double sal, int yars){
		last = lst;
		first = frst;
		salary = sal;
		years = yars;
	}


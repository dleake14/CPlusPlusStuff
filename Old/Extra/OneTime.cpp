#include <iostream>
#include "OneTime.h"

OneTime :: OneTime(string desc, Date d, Time s, Time e): Appointment(desc,s,e){
	date = d;
}

//void OneTime :: print() const{
//	cout << description  << endl;
//	}

bool OneTime :: occurs_on(int year, int month, int day) const{
	Date otherdate = Date(year,month,day);
	if(date.equals(otherdate)){
		print();
	}
}

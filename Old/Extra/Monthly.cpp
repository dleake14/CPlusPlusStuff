#include "Monthly.h"

Monthly :: Monthly(string desc, int d, Time s, Time e): Appointment(desc,s,e){
	day = d;
}

bool Monthly :: occurs_on(int year,int month, int oday) const{
	if(day == oday){
		print();
	}
}

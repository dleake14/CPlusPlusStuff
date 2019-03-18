#include <iostream>
#include "Appointment.h"

Appointment :: Appointment(){
	description = "Nothing";
}


Appointment :: Appointment(string desc, Time s, Time e){
	description = desc;
	start = s;
	end = e;
}

void Appointment :: print() const{
	cout << start.get_hours() << ":" << start.get_minutes() << " - "<< end.get_hours() << ":" << end.get_minutes()
	 << " " << description <<  endl;
}


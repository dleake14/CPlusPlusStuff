#include "Student.h"

Student::Student()
{
	name = "No Name";
	id = 000000;
}

Student::Student(string name, int id)
{
	this->name = name;
	this->id = id;
}

bool Student::operator!=(Student& compare) const
{
	int check = 0;
	if (this->name == compare.name)
		check++;
	if (this->id == compare.id)
		check++;
	if (check == 2)
		return false;
	return true;
}

bool Student::operator==(Student& compare) const
{
	int check = 0;
	if (this->name == compare.name)
		check++;
	if (this->id == compare.id)
		check++;
	if (check == 2)
		return true;
	return false;
}
#include "Checking.h"

Checking::Checking() : Account()
{
	// Super class constructor called
}

Checking::Checking(double b) : Account(b)
{
	// Super class constructor called
}

void Checking::daily_interest()
{
	double interest = 0;
	if (get_balance() > 1000)
	{
		interest = ((get_balance() - 1000) * 0.03) / 30;
	}
	deposit(interest);
	if (get_balance() < 50)
		throw myex;
}


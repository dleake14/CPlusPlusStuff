#include "Savings.h"

Savings::Savings() : Account()
{
	// Super class constructor called
}

Savings::Savings(double b) : Account(b)
{
	// Super class constructor called
}

void Savings::daily_interest()
{
	double interest;
	interest = (get_balance() * 0.06) / 30;
	deposit(interest);
	if (get_balance() > 20000)
		throw myex;
}

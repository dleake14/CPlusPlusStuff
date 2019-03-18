#include "Money.h"

void Money::print() const
{
	cout << dollars << " dollars " << cents << " cents" << endl;
}

Money::Money(int dollars, int cents)
{
	this->dollars = dollars;
	this->cents = cents;
	while (this->cents >= 100)
	{
		this->dollars = this->dollars + 1;
		this->cents = this->cents - 100;
	}
}

Money Money::operator+(const Money& b) const
{
	int dollars = this->dollars + b.dollars;
	int cents = this->cents + b.cents;
	while (cents >= 100)
	{
		dollars = dollars + 1;
		cents = cents - 100;
	}
	return Money(dollars, cents);
}

Money Money::operator-(const Money& b) const
{
	int dollars;
	int cents;
	if (this->dollars > b.dollars)
	{
		dollars = this->dollars - b.dollars;
	}
	else
	{
		dollars = b.dollars - this->dollars;
	}
	if (this->cents > b.cents)
	{
		cents = this->cents - b.cents;
	}
	else
	{
		cents = b.cents - this->cents;
	}
	while (cents >= 100)
	{
		dollars = dollars + 1;
		cents = cents - 100;
	}
	return Money(dollars, cents);
}

Money Money::operator*(double m) const
{
	int dollars = this->dollars * m;
	int cents = this->cents * m;
	while (cents >= 100)
	{
		dollars = dollars + 1;
		cents = cents - 100;
	}
	return Money(dollars, cents);
}

Money Money::operator/(double d) const
{
	int dollars = this->dollars / d;
	int cents = this->cents / d;
	while (cents >= 100)
	{
		dollars = dollars + 1;
		cents = cents - 100;
	}
	return Money(dollars, cents);
}
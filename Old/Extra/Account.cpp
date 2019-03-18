#include "Account.h"

Account::Account()
{
   balance = 0;
}

Account::Account(double b)
{
   balance = b;
}

void Account::deposit(double amount)
{
   balance = balance + amount;
}

void Account::withdraw(double amount)
{
   balance = balance - amount;
}

double Account::get_balance() const
{
   return balance;
}

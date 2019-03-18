// LongPrimeSieve.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <algorithm>
#include <chrono>
#include <iostream>
#include <vector>

using namespace std;
using chrono::duration_cast;
using chrono::milliseconds;

#define ull unsigned long long

const int maxB0 = 10000000;
const int ssize = maxB0 / 64 + 1;
int b0, B0;
ull sumNumbers2, sumNumbers3, sumNumbers4;
ull a[] = { 1, 3, 7, 9, 13, 27 };
ull psieve[ssize], table[64];
vector<vector<ull>> primes;

struct PrimeIndex
{
	ull prime;
	int index;
};

vector<PrimeIndex> piVector;

bool PIPredicatePrime(PrimeIndex l, PrimeIndex r)
{
	return l.prime < r.prime;
}

bool PIPredicateIndex(PrimeIndex l, PrimeIndex r)
{
	return l.index < r.index;
}

void ClrBit(int n, ull *sieve)
{
	ull index = n / 64;
	ull mod64 = n % 64;
	ull power = table[mod64];
	ull word = sieve[index];
	ull mask = word & ~power;

	sieve[index] = mask;
}

int GetBit(int n, ull *sieve)
{
	ull index = n / 64;
	ull mod64 = n % 64;
	ull power = table[mod64];
	ull word = sieve[index];
	ull set = word & power;

	set >>= mod64;
	return (int)set;
}

void SetBit(int n, ull *sieve)
{
	ull index = n / 64;
	ull mod64 = n % 64;
	ull power = table[mod64];
	ull word = sieve[index];
	ull mask = word | power;

	sieve[index] = mask;
}

void Sieve(int limit, ull *sieve)
{
	// Sieve of Eratosthenes
	// find all prime numbers
	// less than or equal B0

	int c = 3, i, inc;

	SetBit(2, sieve);

	for (i = 3; i <= limit; i += 2)
		SetBit(i, sieve);

	do
	{
		i = c * c;
		inc = c + c;

		while (i <= limit)
		{
			ClrBit(i, sieve);
			i += inc;
		}

		c += 2;

		while (GetBit(c, sieve) == 0)
			c++;

	} while (c * c <= limit);
}

bool IsProbablyPrime(ull n)
{
	if (n <= maxB0)
		return GetBit((int)n, psieve) == 1;

	ull ns = (ull)sqrt(n);

	for (int p = 2; p <= ns + 1; p++)
		if (GetBit(p, psieve) == 1 && n % p == 0)
			return false;

	return true;
}

int main()
{
	std::cout << "max B0 = " << maxB0 << endl;
	std::cout << "B0 = ";
	cin >> B0;
	std::cout << "b0 = ";
	cin >> b0;

	if (B0 > maxB0)
	{
		std::cout << "error B0 must be less or equal than max B0" << endl;
		return 0;
	}

	if (b0 > maxB0)
	{
		std::cout << "error b0 must be less than or equal max B0" << endl;
		return 0;
	}

	cout << "B0 * B0 = " << (ull)B0 * (ull)B0 << endl;

	auto start1 = chrono::steady_clock::now();

	int mcount = 0, pcount = 0, scount = 0;
	int psize = (int)((double)maxB0 / 64) + 1;

	memset(psieve, 0, psize * sizeof(ull));

	for (int i = 0; i < 64; i++)
		table[i] = (ull)pow(2, i);

	Sieve(maxB0, psieve);

	auto final1 = chrono::steady_clock::now();

	for (int i = 2; i <= maxB0; i++)
		if (GetBit(i, psieve) == 1)
			mcount++;

	for (int i = 2; i <= B0; i++)
		if (GetBit(i, psieve) == 1)
			pcount++;

	for (int i = 2; i <= b0; i++)
		if (GetBit(i, psieve) == 1)
			scount++;

	std::cout << "Super prime sieve count = " << mcount << endl;
	std::cout << "Large prime sieve count = " << pcount << endl;
	std::cout << "Small prime sieve count = " << scount << endl;

	auto start2 = chrono::steady_clock::now();

	for (ull n = 10; n <= B0; n += 10)
	{
		ull lns2 = n * n;

		if (lns2 % 3 != 1)
			continue;

		if (lns2 % 7 != 2 &&
			lns2 % 7 != 3)
			continue;

		if (lns2 % 9 == 0 ||
			lns2 % 13 == 0 ||
			lns2 % 27 == 0)
			continue;

		if (lns2 <= maxB0 - 27)
		{
			int ns2 = n * n;
			int p01 = ns2 + 1;
			int p03 = ns2 + 3;
			int p07 = ns2 + 7;
			int p09 = ns2 + 9;
			int p13 = ns2 + 13;
			int p27 = ns2 + 27;

			if (GetBit(p01, psieve) == 1 && GetBit(p03, psieve) == 1 &&
				GetBit(p07, psieve) == 1 && GetBit(p09, psieve) == 1 &&
				GetBit(p13, psieve) == 1 && GetBit(p27, psieve) == 1)
			{
				std::cout << n << " " << p01 << endl;
				sumNumbers2 += n;
			}
		}

		else
		{
			ull p01 = lns2 + 1;
			ull p03 = lns2 + 3;
			ull p07 = lns2 + 7;
			ull p09 = lns2 + 9;
			ull p13 = lns2 + 13;
			ull p27 = lns2 + 27;

			if (IsProbablyPrime(p01) && IsProbablyPrime(p03) &&
				IsProbablyPrime(p07) && IsProbablyPrime(p09) &&
				IsProbablyPrime(p13) && IsProbablyPrime(p27))
			{
				std::cout << n << " " << p01 << endl;
				sumNumbers2 += n;
			}
		}
	}

	std::cout << "Brute force sum numbers = " << sumNumbers2 << endl;

	auto final2 = chrono::steady_clock::now();
	auto start3 = chrono::steady_clock::now();

	for (int i = 0; i < 6; i++)
	{
		vector<ull> pr;

		for (ull n = 10; n <= B0; n += 10)
		{
			ull n2 = n * n;

			if (n2 % 3 != 1)
				continue;

			if (n2 % 7 != 2 &&
				n2 % 7 != 3)
				continue;

			if (n2 % 9 == 0 ||
				n2 % 13 == 0 ||
				n2 % 27 == 0)
				continue;

			ull na = n2 + a[i];

			if (na <= maxB0)
			{
				if (GetBit((int)na, psieve) == 1)
					pr.push_back(na);
			}

			else
			{
				if (IsProbablyPrime(na))
					pr.push_back(na);
			}
		}

		primes.push_back(pr);
	std:cout << "Number of primes of the form: n * n + " << a[i] << " = " << pr.size() << endl;
	}

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < primes[i].size(); j++)
		{
			PrimeIndex pi;

			pi.index = i;
			pi.prime = primes[i][j];
			piVector.push_back(pi);
		}
	}

	sort(piVector.begin(), piVector.end(), PIPredicatePrime);

	for (int i = 0; i < piVector.size(); i++)
	{
		bool found = true;
		vector<PrimeIndex> piV;

		for (int j = 0; found && j < 6; j++)
		{
			if (i + j < piVector.size())
			{
				PrimeIndex pi;

				pi.index = piVector[i + j].index;
				pi.prime = piVector[i + j].prime;
				piV.push_back(pi);
			}

			else
				found = false;
		}

		if (!found)
			continue;

		sort(piV.begin(), piV.end(), PIPredicateIndex);

		if (piV[0].index == 0 && piV[1].index == 1 &&
			piV[2].index == 2 && piV[3].index == 3 &&
			piV[4].index == 4 && piV[5].index == 5)
		{
			bool consecutive = true;
			ull p = piV[0].prime;

			for (int j = 1; consecutive && j < 6; j++)
			{
				ull q = p + 2;

				while (!IsProbablyPrime(q))
					q += 2;

				consecutive = q == piV[j].prime;

				if (consecutive)
					p = q;
			}

			if (consecutive)
			{
				ull ns = (ull)sqrt(piV[0].prime - 1);

				std::cout << ns << " " << piV[0].prime << endl;
				sumNumbers3 += ns;
			}
		}
	}

	std::cout << "Other force sum numbers = " << sumNumbers3 << endl;

	auto final3 = chrono::steady_clock::now();

	std::cout << "Sieve time = " << duration_cast<milliseconds>(final1 - start1).count() << " ms" << endl;
	std::cout << "Brute time = " << duration_cast<milliseconds>(final2 - start2).count() << " ms" << endl;
	std::cout << "Other time = " << duration_cast<milliseconds>(final3 - start3).count() << " ms" << endl;
	return 0;
}
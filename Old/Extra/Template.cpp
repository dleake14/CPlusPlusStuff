#include "Template.h"

template <class temp1>
temp1 Template<temp1>::sum(temp1 one, temp1 two)
{
	temp1 temp;
	temp = one + two;
	return temp;
}

template <class temp1>
temp1 Template<temp1>::sum(temp1 one, temp1 two, temp1 three)
{
	temp1 temp;
	temp = one + two + three;
	return temp;
}

template <class temp1>
temp1 Template<temp1>::max(temp1 one, temp1 two, temp1 three)
{
	temp1 max = one;
	if(two > max)
	{
		max = two;
	}
	if (three > max)
	{
		max = three;
	}

	return max;
}

template <class temp1>
temp1 Template<temp1>::min(temp1 one, temp1 two, temp1 three)
{
	temp1 min = one;
	if (two < min)
	{
		min = two;
	}
	if (three < min)
	{
		min = three;
	}

	return min;
}
#include "rsa.h"

unlong	get_prime_number(unlong min, unlong max)
{
	srand(time(nullptr));

	unlong x;

	x = 0;
	if (min == 0)
		min = 1 + rand() % max;

	for (size_t i = (min + 1); !x; i++)
	{
		for (size_t j = 2; j <= i; j++)
		{
			if (j == i)
				x = unlong(i);
			if ((i % j) == 0)
				break;
		}
	}
	return (x);
}
	

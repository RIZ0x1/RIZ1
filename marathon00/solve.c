#include "header.h"

void	solve(void)
{
	int y;
	int x;

	y = 0;
	x = 0;
	while (isDone())
		while (y < 9)
		{
			while (x < 9)
			{
				checkX(y, x);
				checkY(y, x);
				checkCage(y, x);
				(x++);
			}
			x = 0;
			(y++);
		}
}

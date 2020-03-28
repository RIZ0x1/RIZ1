#include "header.h"

int	main(int argc, char argv[][])
{
	if (error(argc, argv))
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	while (isdone(argv))
	{
		solve(argv);
	}
	return (0);
}

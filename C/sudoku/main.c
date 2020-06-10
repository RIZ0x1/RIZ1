#include "header.h"

int	main(int argc, char **argv)
{
	if (error(argc, argv))
		return (-1);
	tableFilling(argv);
	while (isDone(argv))
	{
		solve(argv);
	}
	showTable();
	return (0);
}

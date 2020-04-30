#include "header.h"

void	exit_failure(char *error)
{
	printf("ERROR: %s \n", error);
	exit(EXIT_FAILURE);
}

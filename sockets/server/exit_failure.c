#include "header.h"

void	exit_failure(char *error)
{
	printf("ERROR: %s", error);
	exit(EXIT_FAILURE);
}

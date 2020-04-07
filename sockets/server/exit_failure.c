#include "header.h"

void	exit_failure(char *error)
{
	perror("ERROR: ");
	perror(error);
	exit(EXIT_FAILURE);
}

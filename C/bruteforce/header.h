#ifndef HEADER_H
# define HEADER_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

void	create_file(FILE *file, char *name, char *birth, char *phone);
void	check_errors(FILE *file, char *name, char *birth, char *phone);

# endif //HEADER_H

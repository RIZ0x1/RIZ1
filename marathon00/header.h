# ifndef HEADER_H
#define HEADER_H

#include <unistd.h>

char table[9][9][10]

void	tableFilling(char **argv);
int	error(int argc, char **argv);
int	putError();
int	isDone(char argv[][]);
void	solve(char argv[][]);

# endif

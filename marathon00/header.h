# ifndef HEADER_H
#define HEADER_H

#include <unistd.h>

char table[9][9][10]

void	tableFilling(char **argv); 	// DONE
int	error(int argc, char **argv);
int	putError();			// DONE
int	isDone(char argv[][]);
void	solve(char argv[][]);
void	showTable();			// DONE

# endif

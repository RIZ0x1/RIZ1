# ifndef HEADER_H
#define HEADER_H

#include <unistd.h>

char table[9][9][10]

void	tableFilling(char **argv); 	// DONE
int	error(int argc, char **argv);
int	putError(void);			// DONE
int	isDone(void);
void	solve(void);
void	showTable(void);		// DONE

# endif

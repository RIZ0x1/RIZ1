# ifndef HEADER_H
# define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <unistd.h>

#define PORT 6666
#define SIZE 80

void	exit_failure(char *error);
void	data_exchange(int sock); 

# endif //HEADER_H

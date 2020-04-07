#include "header.h"

void	data_exchange(int sock)
{
	char	buffer_get[SIZE];
	char	buffer_send[SIZE];
	char	name[21];
	int	sock_cp;

	sock_cp = accept(sock, 0, 0);

	strcpy(buffer_send, "Input your name: ");
	send(sock_cp, buffer_send, sizeof(buffer_send), 0);

	do
	{
		recv(sock_cp, buffer_get, SIZE, 0);
		if (strlen(buffer_get) > 20)
		{
			strcpy(buffer_send, "ERROR: Too large name. Try again\n");
			send(sock_cp, buffer_send, sizeof(buffer_send), 0);
			continue ;
		}
		strcpy(name, buffer_get);
		strcpy(buffer_send, "Hello, ");
		strcat(buffer_send, name);
		send(sock_cp, buffer_send, sizeof(buffer_send), 0);
	} while (strlen(buffer_get) > 20);
}

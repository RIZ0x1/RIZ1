#include "header.h"

void	data_exchange(int sock)
{
	char	buffer_get[SIZE];
	char	buffer_send[SIZE];
	char	name[21];
	int	sock_cp;

	while (1)
	{
		sock_cp = accept(sock, 0, 0);

		strcpy(buffer_send, "Input your name: ");
		send(sock_cp, buffer_send, sizeof(buffer_send), 0);

		while (1)
		{
			recv(sock_cp, buffer_get, SIZE, 0);
			if (strlen(buffer_get) > 20)
			{
				strcpy(buffer_send, "ERROR: Too large string. Try again\n");
				send(sock_cp, buffer_send, sizeof(buffer_send), 0);
				strcpy(buffer_get, "");
			}
			else
			{
				strcpy(name, buffer_get);
				strcpy(buffer_send, "Hello, ");
				strcat(buffer_send, name);
				send(sock_cp, buffer_send, sizeof(buffer_send), 0);
			}
		}
		printf("Connection aborted \n");
	}
}

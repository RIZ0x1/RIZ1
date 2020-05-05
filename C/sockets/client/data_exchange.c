#include "header.h"

void	data_exchange(int sock)
{
	char	buff_get[SIZE];
	char	buff_send[SIZE];

	recv(sock, buff_get, sizeof(buff_get), 0);
	printf("%s", buff_get);

	while (1)
	{
		printf("\n>: ");
		scanf("%s", buff_send);
		if (!strcmp(buff_send, "/exit"))
		{
				break ;
		}
		else
		{
			send(sock, buff_send, sizeof(buff_send), 0);
			recv(sock, buff_get, sizeof(buff_get), 0);
			printf("%s", buff_get);
		}
	}
	printf("Connection aborted \n");
}

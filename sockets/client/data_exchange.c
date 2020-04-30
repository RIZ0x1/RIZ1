#include "header.h"

void	data_exchange(int sock)
{
	char	buff_get[SIZE];
	char	buff_send[SIZE];

	recv(sock, buff_get, sizeof(buff_get), 0);
	printf("%s", buff_get);

	while (strcmp(buff_send, "/exit"))
	{
		printf("\n>: ");
		scanf("%s", buff_send);
		send(sock, buff_send, sizeof(buff_send), 0);
		recv(sock, buff_get, sizeof(buff_get), 0);
		printf("%s", buff_get);
	}
	printf("The connection has been cropped \n");
}

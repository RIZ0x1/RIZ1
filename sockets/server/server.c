#include "header.h"

int	main()
{
	int			sock;
	struct sockaddr_in	addr;

	sock = socket(AF_INET, SOCK_STREAM, 0);
	if (sock < 0)
		exit_failure("Can't create socket");	
	
	addr.sin_family		= AF_INET;
	addr.sin_port		= htons(PORT);
	addr.sin_addr.s_addr	= htons(INADDR_ANY);

	if (bind(sock, (struct sockaddr*)&addr, sizeof(addr)) < 0)
		exit_failure("Binding error");
	if (listen(sock, 10) < 0)
		exit_failure("Listening error");

	data_exchange(sock);

	return (0);
}

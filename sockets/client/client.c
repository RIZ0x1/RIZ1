#include "header.h"

int	main()
{
	int			sock;
	struct sockaddr_in	addr;

	sock = socket(AF_INET, SOCK_STREAM, 0);
	if (sock < 0)
		exit_failure("Socket creating error");

	addr.sin_family		= AF_INET;
	addr.sin_port		= htons(PORT);
	addr.sin_addr.s_addr	= htonl(INADDR_LOOPBACK);

	if (bind(sock, (struct sockaddr*)&addr, sizeof(addr)) < 0)
		exit_failure("Binding error");
	if (connect(sock, (struct sockaddr*)&addr, sizeof(addr)) < 0)
		exit_failure("Connecting error");

	data_exchange(sock);

	return (0);
}

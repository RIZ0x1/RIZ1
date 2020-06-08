#include "header.h"

int	main()
{
	char name[30];
	char birth[11];
	char phone[12];
//	char additinal[300];
	FILE *file;

	printf(" HELLO ");
	printf("\n");

	printf("Victims name (lower case): ");
	scanf("%s", name);
	printf("Victims birth date (dd.mm.yyyy): ");
	scanf("%s", birth);
	printf("Victims phone number (full, without brackets): ");
	scanf("%s", phone);

	create_file(file, name, birth, phone);

	return (0);
}

#include "header.h"

void	create_file(FILE *file, char *name, char *birth, char *phone)
{
	check_errors(file, name, birth, phone);
	
}

void	check_errors(FILE *file, char *name, char *birth, char *phone)
{
	int	i;

	file = fopen("brutbase", "w");
	if (file == NULL)
	{
		printf("ERROR: Can't open file \n");
		exit(2);
	}

	i = 0;
	if (strlen(name) > 30)
	{
		printf("ERROR: Too large name \n");
		exit(2);
	}
	while (name[i])
	{
		if ((name[i] < 97 || name[i] > 122) && (name[i] != '-'))
		{
			printf("ERROR: The name has forbidden symbols \n");
			exit(2);
		}
		(i++);
	}

	i = 0;
	if (strlen(birth) != 11 && birth[10] != '\0')
	{
		printf("ERROR: Wrong date format \n");
		exit(2);
	}
	if (birth[2] != '.' || birth[5] != '.')
	{
		printf("ERROR: Wrong date format \n");
		exit(2);
	}
	while (birth[i])
	{
		if (i == 2 || i == 5)
			(i++);
		if (birth[i] < 48 || birth[i] > 57)
		{
			printf("ERROR: Wrong date format \n");
			exit(2);
		}
		(i++);
	}

	i = 0;
	if (strlen(phone) != 12 && phone[11] != '\0')
	{
		printf("ERROR: Too large number \n");
		exit(2);
	}
	while (phone[i])
	{
		if (phone[i] < 48 || phone[i] > 57)
		{
			printf("ERROR: Forbidden symbols in the phone number \n");
			exit(2);
		}
		(i++);
	}
}


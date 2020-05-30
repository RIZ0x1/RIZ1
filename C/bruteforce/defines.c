#include "heaader.h"

void	create_file(FILE *file, char *name, char *birth, char *phone)
{
	file = fopen("brutbase", "w");

	errors_checking(file, name, birth, phone);


}

void	errors_checking(FILE *file, char *name, char *birth, char *phone)
{
	int	i;

	if (file == NULL)
	{
		printf("ERROR: Can't open file \n");
		exit(2);
	}
	
	i = 0;
	while (name[i])
	{
		if (strlen(name) > 30)
		{
			printf("ERROR: Too large name \n");
			exit(2);
		}
		if ((name[i] < 97 || name[i] > 122) && (name[i] != '-'))
		{
			printf("ERROR: The name has forbidden symbols \n");
			exit(2);
		}
		(i++);
	}
	i = 0;
	if (strlen(birth) != 9 && birth[8] != '\0')
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
	// PHONE
}


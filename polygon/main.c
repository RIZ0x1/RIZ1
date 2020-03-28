#include <unsitd.h>

void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
int	atoi(char *str);

int	main()
{
	
	return (0);
}

int	atoi(char *str)
{
	int sum;
	int dec;

	sum = 0;
	dec = 1;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			sum += (*str - '0') * dec;
			dec *= 10;
		}
		(str++);
	}
	return (sum);
}

void	ft_putnbr(int nbr)
{
	int	buff;
	int	dec;
	char	symb;

	buff = nbr;
	symb = '\0';
	dec = 1;
	while ( > 0)
	{
		
	} //undone
	
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		(str++);
	}
}

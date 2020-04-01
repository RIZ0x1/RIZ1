void	checkX(int y, int x)
{
	char	*current;
	int	z;

	current = &table[y][x][0];
	z = 1;
	x = 0;
	while (x < 9)
	{
		if (table[y][x][0] != '.')
			while (z < 10)
			{
				if (*(current + z) == table[y][x][0])
					*(current + z) = '.';
				(z++);
			}
		z = 1;
		(x++);
	}
}

int	isDone(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			if (table[i][j][0] == '.')
				return (0);
			(j++);
		}
		j = 0;
		(i++);
	}
	return (1);
}

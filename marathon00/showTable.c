void	showTable()
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			write(1, &table[i][j][0], 1);
			if (j == 8)
				write(1, "\n", 1);
			else
				write(1, " ", 1);
			(j++);
		}
		(i++);
	}
}

void	tableFilling(char **argv)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 1;
	while (i < 9)
	{
		while (j < 9)
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
				table[i][j][0] = argv[i][j];
			else
				while (k < 10)
				{
					table[i][j][0] = '.';
					table[i][j][k] = k;
					(k++);
				}
			k = 1;
			(j++);
		}
		j = 0;
		(i++);
	}
}

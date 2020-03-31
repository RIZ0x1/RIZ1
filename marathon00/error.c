int	error(int argc, char argv[][], int done)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if	(argc != 10)
		return (putError());
	while	(i < 9)
	{
		while (j < 9)
		{
			if ((argv[i][j] > '9' || argv[i][j] < '0') && (argv[i][j] != '.'))
				return (putError());
			(j++);
		}
		j = 0;
		(i++);
	}
	if (isDone(argv))
		
	else

	return (0);
}

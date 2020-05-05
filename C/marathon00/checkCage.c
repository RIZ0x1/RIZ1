void	checkCage(int y, int x)
{
	char	*n;
	int	i;

	if	((x + 1) % 3 == 0)
		n = table[y][(x - 2)][0];
	else if	((x + 2) % 3 == 0)
		n = table[y][(x - 1)][0];
	else
		n = table[y][x][0];

	i = 0;
	while (i < 3)
	{
		while // Как же лень бляяять :( 

int	check_diago(int grid[10][10], int x, int y)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (y > count && x > count)
	{
		if ((grid[y - count][x - count] == 1) && (y > 0 && x > 0))
			return (0);
		else if ((grid[y - count][x + count] == 1) && (y > 0 && x > 0))
			return (0);
		count++;
	}
	count = 1;
	while (y > count && x > count)
	{
		if ((grid[y + count][x + count] == 1) && (y < 9 && x < 8))
			return (0);
		else if ((grid[y + count][x + count] == 1) && (y < 9 && x < 8))
			return (0);
		count--;
	}
	return (1);
}

int	check_diago(int grid[10][10], int x, int y)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (y > count && x > count)
	{
		if ((grid[y - count][x - count] == 1) && (y > 0 && x > 0))
			return (0);
		else if ((grid[y - count][x + count] == 1) && (y > 0 && x > 0))
			return (0);
		count++;
	}
	count = 1;
	while (y > count && x > count)
	{
		if ((grid[y + count][x + count] == 1) && (y < 9 && x < 8))
			return (0);
		else if ((grid[y + count][x + count] == 1) && (y < 9 && x < 8))
			return (0);
		count--;
	}
	return (1);

int	check_diago(int grid[10][10], int x, int y)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (y > count && x > count)
	{
		if ((grid[y - count][x - count] == 1) && (y > 0 && x > 0))
			return (0);
		else if ((grid[y - count][x + count] == 1) && (y > 0 && x > 0))
			return (0);
		count++;
	}
	count = 1;
	while (y > count && x > count)
	{
		if ((grid[y + count][x + count] == 1) && (y < 9 && x < 8))
			return (0);
		else if ((grid[y + count][x + count] == 1) && (y < 9 && x < 8))
			return (0);
		count--;
	}
	return (1);
}int	check_diago(int grid[10][10], int x, int y)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (y > count && x > count)
	{
		if ((grid[y - count][x - count] == 1) && (y > 0 && x > 0))
			return (0);
		else if ((grid[y - count][x + count] == 1) && (y > 0 && x > 0))
			return (0);
		count++;
	}
	count = 1;
	while (y > count && x > count)
	{
		if ((grid[y + count][x + count] == 1) && (y < 9 && x < 8))
			return (0);
		else if ((grid[y + count][x + count] == 1) && (y < 9 && x < 8))
			return (0);
		count--;
	}
	return (1);
}int	check_diago(int grid[10][10], int x, int y)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (y > count && x > count)
	{
		if ((grid[y - count][x - count] == 1) && (y > 0 && x > 0))
			return (0);
		else if ((grid[y - count][x + count] == 1) && (y > 0 && x > 0))
			return (0);
		count++;
	}
	count = 1;
	while (y > count && x > count)
	{
		if ((grid[y + count][x + count] == 1) && (y < 9 && x < 8))
			return (0);
		else if ((grid[y + count][x + count] == 1) && (y < 9 && x < 8))
			return (0);
		count--;
	}
	return (1);
}int	check_diago(int grid[10][10], int x, int y)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (y > count && x > count)
	{
		if ((grid[y - count][x - count] == 1) && (y > 0 && x > 0))
			return (0);
		else if ((grid[y - count][x + count] == 1) && (y > 0 && x > 0))
			return (0);
		count++;
	}
	count = 1;
	while (y > count && x > count)
	{
		if ((grid[y + count][x + count] == 1) && (y < 9 && x < 8))
			return (0);
		else if ((grid[y + count][x + count] == 1) && (y < 9 && x < 8))
			return (0);
		count--;
	}
	return (1);
}int	check_diago(int grid[10][10], int x, int y)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (y > count && x > count)
	{
		if ((grid[y - count][x - count] == 1) && (y > 0 && x > 0))
			return (0);
		else if ((grid[y - count][x + count] == 1) && (y > 0 && x > 0))
			return (0);
		count++;
	}
	count = 1;
	while (y > count && x > count)
	{
		if ((grid[y + count][x + count] == 1) && (y < 9 && x < 8))
			return (0);
		else if ((grid[y + count][x + count] == 1) && (y < 9 && x < 8))
			return (0);
		count--;
	}
	return (1);
}int	check_diago(int grid[10][10], int x, int y)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (y > count && x > count)
	{
		if ((grid[y - count][x - count] == 1) && (y > 0 && x > 0))
			return (0);
		else if ((grid[y - count][x + count] == 1) && (y > 0 && x > 0))
			return (0);
		count++;
	}
	count = 1;
	while (y > count && x > count)
	{
		if ((grid[y + count][x + count] == 1) && (y < 9 && x < 8))
			return (0);
		else if ((grid[y + count][x + count] == 1) && (y < 9 && x < 8))
			return (0);
		count--;
	}
	return (1);
}int	check_diago(int grid[10][10], int x, int y)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (y > count && x > count)
	{
		if ((grid[y - count][x - count] == 1) && (y > 0 && x > 0))
			return (0);
		else if ((grid[y - count][x + count] == 1) && (y > 0 && x > 0))
			return (0);
		count++;
	}
	count = 1;
	while (y > count && x > count)
	{
		if ((grid[y + count][x + count] == 1) && (y < 9 && x < 8))
			return (0);
		else if ((grid[y + count][x + count] == 1) && (y < 9 && x < 8))
			return (0);
		count--;
	}
	return (1);
}}

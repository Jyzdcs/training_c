#include <unistd.h>

int	check_recurrence(int grid[10][10], int y, int x)
{
	int	i;

	i = 0;
	while (i != 10)
	{
		if (grid[y][i] == 1 && i != x)
			return (0);
		i++;
	}
	i = 0;
	while (i != 10)
	{
		if (grid[i][x] == 1 && i != y)
			return (0);
		i++;
	}
	return (1);
}

int	check_diago(int grid[10][10], int y, int x)
{
	int	diago_p;
	int	diago_s;
	int	i;
	int	j;

	diago_p = y - x;
	diago_s = y + x;
	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < 10)
		{
			if (grid[i][j] == 1 && (i - j == diago_p || i + j == diago_s))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	print_grid(int grid[10][10])
{
	int		i;
	int		j;
	char	c;

	i = -1;
	while (i++ < 9)
	{
		j = -1;
		while (j++ < 9)
		{
			if (grid[i][j] == 1)
			{
				c = j + 48;
				write(1, &c, 1);
			}
		}
	}
}

int	solve(int grid[10][10], int y)
{
	int	i;

	if (y == 9)
	{
		print_grid(grid);
		write(1, "\n", 1);
		return (0);
	}
	y++;
	i = 0;
	while (i < 10)
	{
		grid[y][i] = 1;
		if (check_diago(grid, y, i) && check_recurrence(grid, y, i))
		{
			if (solve(grid, y))
				return (1);
		}
		grid[y][i] = 0;
		i++;
	}
	return (0);
}

int	ft_ten_queens_puzzle(void)
{
	int	grid[10][10];
	int	i;
	int	j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
			grid[i][j++] = 0;
		i++;
	}
	i = 0;
	while (i < 10)
	{
		grid[0][i] = 1;
		solve(grid, 0);
		grid[0][i++] = 0;
	}
	return (0);
}
/*
int	main(void)
{
	ft_ten_queens_puzzle();
	return (0);
}*/
#include <stdio.h>
#include <stdlib.h>
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
	int	i;
	int	j;
	char	c;

	i = 0;
	j = 0;
	while (i < 10)
	{
		while (j < 10)
		{
			c = grid[i][j] + '0';
			write(1, &c, 1);
			write(1, " ", 1);
			j++;
		}
		printf("\n");
		j = 0;
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	grid[10][10];
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 10)
	{
		while (j < 10)
		{
			grid[i][j] = 0;
			j++;
		}
		j = 0;
		i++;
	}
	grid[4][5] = 1;
	grid[1][9] = 1;
	if (check_diago(grid, 4, 5) && check_recurrence(grid, 4, 5))
		printf("NO RECURRENCE !\n");
	else
		printf("RECURRENCE !\n");
	print_grid(grid);
	return (0);
}

int	main(void)
{
	ft_ten_queens_puzzle();
	return (0);
}
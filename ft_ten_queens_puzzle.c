#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	check_recurrence(int grid[10][10], int x, int y)
{
	int	i;

	i = 0;
	while (i != '\0')
	{
		if (grid[y][x] == grid[y][i] && i != x)
			return (0);
		i++;
	}
	i = 0;
	while (i != '\0')
	{
		if (grid[y][x] == grid[i][x] && i != y)
			return (0);
		i++;
	}
	return (1);
}

int	check_diago(int grid[10][10], int x, int y)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (y < count && x < count)
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
	if (check_diago(grid, 0, 0), check_recurrence(grid, 0, 0))
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
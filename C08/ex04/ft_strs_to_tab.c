#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_strs.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct s_stock_strs	*ft_strs_to_tab(int ac, char **av)
{
	int	i;
	int	j;
	t_stock_str	*tab_struct;
	tab_struct = malloc (1 + ac * sizeof(t_stock_str));

	i = 0;
	j = 0;
	while (i < ac)
	{
		while (j < ft_strlen(av[i]))
		{
			tab_struct->str[i][j] = av[i][j];
		}
	}
}

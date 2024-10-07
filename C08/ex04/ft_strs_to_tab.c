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

char	*ft_strdup(char *str)
{
	char	*ptr;
	ptr = malloc(1 + ft_strlen(str) * sizeof(char));
	if (ptr == NULL)
		return (NULL);	
	int	i;

	i = -1;
	while (str[++i])
		ptr[i] = str[i];
	ptr[i] = '\0';
	return (ptr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int	i;
	int	l_word;
	t_stock_str	*tab_struct;

	tab_struct = (t_stock_str *) malloc(1 + ac * sizeof(t_stock_str));
	if (tab_struct == NULL)
		return NULL;
	i = 0;
	while (i < ac && av[i])
	{
		tab_struct[i].size = ft_strlen(av[i]);
		tab_struct[i].str = ft_strdup(av[i]);
		tab_struct[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab_struct[i].str = 0;
	return (tab_struct);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	struct s_stock_str	*tab;
	tab = ft_strs_to_tab(4, &argv[1]);
	ft_show_tab(tab);
}*/
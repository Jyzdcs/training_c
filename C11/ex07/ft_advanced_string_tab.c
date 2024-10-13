#include <stdio.h>

int	ft_len(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
		i++;
	return (s2[i] - s1[i]);
}

void ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int		i;
	int		j;
	int const	size = ft_len(tab);
	char	*tmp;

	i = 0;
	while (i != size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i = 1;

	while (argv[i] != NULL)
		printf("%s\n", argv[i++]);
	i = 1;
	ft_advanced_sort_string_tab(argv, ft_strcmp);
	printf("----------------------------\n");
	while (argv[i] != NULL)
		printf("%s\n", argv[i++]);
}
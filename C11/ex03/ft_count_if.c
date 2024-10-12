#include <stdio.h>

int	ft_count_if(char **tab, int length, int(*f)(char *))
{
	int	i;
	int	count;

	if (tab[length] != NULL)
		return (0);
	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}

int	is_numeric(char *str)
{
	int	i;

	i = 0;
	while ('0' <= str[i] && str[i] <= '9')
		i++;
	if (str[i] != '\0')
		return (0);
	return (1);
}

int	main(int argc, char *argv[])
{
	int boolean = ft_count_if(&argv[1], argc - 1, is_numeric);
	printf("%d\n", boolean);
}
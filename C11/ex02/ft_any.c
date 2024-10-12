
#include <stdio.h>

int	ft_any(char **tab, int(*f)(char *))
{
	int	i;

	i = 0;
	while (tab[i] != NULL && f(tab[i]) != 0)
		i++;
	if (tab[i] != NULL)
		return (1);
	return (0);
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
	int boolean = ft_any(&argv[1], is_numeric);
	printf("%d\n", boolean);
}
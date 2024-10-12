#include <stdio.h>

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	j;

	i = 0;
	while (i < length)
	{
		j = i + 1;
		while (j < length - i)
		{
			if (f(tab[i], tab[j]) < 0)
			{
				printf("%d : %d\n", tab[i], tab[j]);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_intcmp(int nb_1, int nb_2)
{
	if (nb_1 <= nb_2)
		return (1);
	return (-1);
}

int	main()
{
	int tab[9] = {1, 2, 3 ,3 ,5 ,6 ,7, 8,9};
	int b = ft_is_sort(tab, 9, ft_intcmp);
	printf("%d\n", b);
}
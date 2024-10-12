#include <stdlib.h>
#include <stdio.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	*new_tab;
	int	i;

	new_tab = malloc(length * sizeof(int));
	if (new_tab == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		new_tab[i] = f(tab[i]);
		i++;
	}
	return (new_tab);
}

int	addition(int nb)
{
	return (nb + nb);
}

int	main()
{
	int tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *arr = ft_map(tab, 10, addition);
	int i = 0;
	while (i < 10)
		printf("%d\n", arr[i++]);
}
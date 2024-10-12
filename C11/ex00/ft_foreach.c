#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			write(1, "2147483648", 10);
			return ;
		}
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
		return ;
	}
	ft_putchar(nb + '0');
}

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		ft_putchar('\n');
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	tab[10] = {1, 2, 3 ,4 ,5 ,6 ,7 ,8 ,9 , 10};
	ft_foreach(tab, 10, &ft_putnbr);
}
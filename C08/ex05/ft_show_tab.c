#include "../ex04/ft_stock_strs.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	int	j;
	char	n;

	i = 0;
	while (par[i].str != 0)
	{
		j = 0;
		while (par[i].str[j] != '\0')
			ft_putchar(par[i].str[j++]);
		ft_putchar('\n');
		ft_putchar(par[i].size + '0');
		ft_putchar('\n');
		j = 0;
		while (par[i].copy[j] != '\0')
			ft_putchar(par[i].copy[j++]);
		ft_putchar('\n');
		i++;
	}
}

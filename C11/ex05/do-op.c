int		addition(int a, int b);
int		soustraction(int a, int b);
int		division(int a, int b);
int		multiplication(int a, int b);
int		modulo(int a, int b);
void	ft_putchar(char c);
void	ft_putnbr(int nbr);
void	ft_putstr(char *str);

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	sign;

	i = 0;
	sign = 1;
	nbr = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
		nbr = nbr * 10 + (str[i++] - '0');
	if (sign == -1)
		return (-nbr);
	return (nbr);
}

int	detect_by_zero(char sign, char *right_nb)
{
	int	i;
	int	zero_counter;

	i = 0;
	zero_counter = 0;
	while ('0' <= right_nb[i] && right_nb[i] <= '9')
	{
		if (right_nb[i] == '0')
			zero_counter++;
		i++;
	}
	if (i != zero_counter)
		return (0);
	else if (i == zero_counter && sign == '/')
		ft_putstr("Stop : divison by zero");
	else if (i == zero_counter && sign == '%')
		ft_putstr("Stop : modulo by zero");
	return (1);
}

void	init_operations(int (*ops[5])(int, int))
{
	ops[0] = addition;
	ops[1] = soustraction;
	ops[2] = division;
	ops[3] = multiplication;
	ops[4] = modulo;
}

int	main(int argc, char *argv[])
{
	char const	operator[5] = {'+', '-', '/', '*', '%'};
	int			(*operations[5])(int, int);
	int			i;
	int			result;

	init_operations(operations);
	i = 0;
	if (argc == 4)
	{
		while (argv[2][0] != operator[i] && operator[i])
			i++;
		if (i == 5)
		{
			ft_putnbr(0);
			return (0);
		}
		if (detect_by_zero(operator[i], argv[3]))
			return (1);
		result = operations[i](ft_atoi(argv[1]), ft_atoi(argv[3]));
		ft_putnbr(result);
	}
	else
		ft_putnbr(0);
}

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	in_charset(char *charset, char c)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	if (str[0] == '\0')
		return (0);
	i = 0;
	count = 1;
	while (str[i])
	{
		if (in_charset(charset, str[i]) && !in_charset(charset, str[i + 1]))
		{
			count++;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{

}

int	main()
{
	int	count = count_words("BONJOUR CA VA TLMDDD ?", "J D");
	printf("count : %d", count);
}
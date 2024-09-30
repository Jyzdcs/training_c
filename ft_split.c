#include <stdlib.h>
#include <unistd.h>

int	in_charset(char *charset, char c)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	if (!in_charset(charset, str[0]))
		count++;
	i = 0;
	while (str[i])
	{
		if (!in_charset(charset, str[i]) && in_charset(charset, str[i - 1]))
			count++;
		i++;
	}
	return (count);
}

char	*alloc_word(char *str, char *charset)
{
	int		i;
	char	*tab;

	i = 0;
	while (!in_charset(charset, str[i]) && str[i])
		i++;
	tab = malloc((i + 1) * sizeof(char));
	if (!tab)
		return (NULL);
	i = 0;
	while (!in_charset(charset, str[i]) && str[i])
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	char		**tab;
	int			i;
	int			k;

	tab = (char **) malloc((count_words(str, charset) + 1) * sizeof(char *));
	k = 0;
	i = 0;
	while (str[i])
	{
		while (in_charset(charset, str[i]))
			i++;
		if (!in_charset(charset, str[i]) && str[i])
		{
			tab[k] = alloc_word(&str[i], charset);
			k++;
			while (!in_charset(charset, str[i]) && str[i])
				i++;
		}
	}
	tab[k] = NULL;
	return (tab);
}
/*
#include <stdio.h>
int	main()
{
	char	**tab;

	//int	i = count_words(" t vous vouslez biuen", "u ");
	//char *word = alloc_word("us vouslez biuen", "u ");
	//printf("%s\n", word);
	//printf("%d\n", i);
	tab = ft_split("salut tlmd vous voulez biuen ?", " salut");

	int i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	i = 0;
	while (tab[i] != NULL)
	{
		free(tab[i]);
		i++;
	}
}*/

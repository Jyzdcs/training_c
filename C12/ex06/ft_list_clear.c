#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void(*free_fct)(void *))
{
	if (begin_list == NULL)
		return ;
	ft_list_clear(begin_list->next, free);
	free_fct(begin_list->data);
}

t_list	*ft_create_elem(void *data)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}

t_list	*list(char **tab, int size)
{
	t_list	*node;

	node = ft_create_elem(tab[size - 1]);
	if (size == 1)
		return (node);
	node->next = list(tab, size - 1);
	return (node);
}

int	main(int argc, char *argv[])
{
	t_list	*node = list(&argv[1], argc - 1);
	t_list	*tmp = node;

	while (tmp != NULL)
	{
		printf("%s\n", (char *)tmp->data);
		tmp = tmp->next;
	}
	ft_list_clear(node, free);
	tmp = node;
	while (tmp != NULL)
	{
		printf("%s\n", (char *)tmp->data);
		tmp = tmp->next;
	}
}
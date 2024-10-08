#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

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

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*tmp;
	t_list	*node;

	tmp = *begin_list;
	node = ft_create_elem(data);
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = node;
}
/*
int	main()
{
	t_list	*node = ft_create_elem("1er noeud");
	ft_list_push_back(&node, "last node");
	ft_list_push_back(&node, "Premier");
	t_list	*tmp = node;
	while (tmp != NULL)
	{
		printf("%s\n", (char *)tmp->data);
		tmp = tmp->next;
	}
	ft_list_push_back(&node, "TROLL");
	tmp = node;
	while (tmp != NULL)
	{
		printf("%s\n", (char *)tmp->data);
		tmp = tmp->next;
	}
}
*/
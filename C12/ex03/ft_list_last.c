#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"
/*
t_list	*ft_create_node(void *data)
{
	t_list	*node;
	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}

void	*ft_push_front_node(t_list **head, void *data)
{
	t_list	*node;
	node = ft_create_node(data);
	node->next = *head;
	*head = node;
}
*/
t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*tmp;
	tmp = begin_list;

	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);	
}
/*
int	main(int argc, char *argv[])
{
	t_list *node = ft_create_node(argv[1]);
	t_list	*tmp;
	ft_push_front_node(&node, argv[2]);
	ft_push_front_node(&node, argv[3]);
	ft_push_front_node(&node, argv[4]);
	tmp = node;
	while (tmp != NULL)
	{
		printf("%s\n", (char *)tmp->data);
		tmp = tmp->next;
	}
	t_list	*last = ft_list_last(node);
	printf("last : %s\n", (char *)last->data);
}*/
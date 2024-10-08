#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"
/*
t_list	*ft_create_node(void)
{
	t_list	*node;
	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->next = NULL;
	return (node);
}

void	ft_push_front_node(t_list **head)
{
	t_list	*node;
	node = ft_create_node();
	if (*head == NULL)
	{
		*head = node;
		return ;
	}
	node->next = *head;
	*head = node;
}
*/
int	ft_list_size(t_list *begin_list)
{
	int	i;
	t_list	*tmp;

	i = 0;
	tmp = begin_list;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
/*
int	main(int argc, char *argv[])
{
	t_list	*el = ft_create_node();
	ft_push_front_node(&el);
	ft_push_front_node(&el);
	int i = ft_list_size(el);
	printf("%d\n", i);
	free(el);
}*/
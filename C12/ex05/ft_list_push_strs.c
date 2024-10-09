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

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*node;

	if (size == 0)
		return (NULL);
	node = ft_create_elem(strs[size - 1]);
	if (size == 1)
		return (node);
	node->next = ft_list_push_strs(--size, strs);
	return (node);
}
/*
int	main(int argc, char *argv[])
{
	t_list	*node;
	node = ft_list_push_strs(argc - 1, &argv[1]);
	t_list	*tmp;
	tmp = node;
	while (tmp != NULL)
	{
		printf("%s\n", (char *)tmp->data);
		tmp = tmp->next; 
	}
}*/
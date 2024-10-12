#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void ft_list_reverse(t_list **begin_list)
{
	t_list	*head;
	t_list	*node;

	if (*begin_list == NULL || (*begin_list)->next == NULL)
		return ;
	node = *begin_list;
	head = node->next;
	ft_list_reverse(&head);
	node->next->next = node;
	node->next = NULL;
	*begin_list = head;
}

t_list	*create_elem(void *data)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}

t_list	*list(int size, char **strs)
{
	t_list	*node;

	if (size <= 0)
		return (NULL);
	node = create_elem(strs[size - 1]);
	if (size == 1)
		return (node);
	node->next = list(size - 1, strs);
	return (node);
}

int	main(int argc, char *argv[])
{
	t_list	*head = list(argc, &argv[0]);
	t_list	*tmp = head;
	while (tmp != NULL)
	{
		printf("%s\n", (char *)tmp->data);
		tmp = tmp->next;
	}
	tmp = head;
	printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n");
	ft_list_reverse(&tmp);
	while (tmp != NULL)
	{
		printf("%s\n", (char *)tmp->data);
		tmp = tmp->next;
	}
}
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_el(void *data)
{
	t_list	*node;
	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*node;
	node = ft_create_el(data);
	if (*begin_list == NULL)
	{
		*begin_list = node;
		return ;
	}
	node->next = *begin_list;
	*begin_list = node;
}

int	main(int argc, char *argv[])
{
	t_list	*el = ft_create_el(argv[1]);
	printf("el data : %s\n", (char *)el->data);
	ft_list_push_front(&el, argv[2]);
	printf("el data1 : %s\n", (char *)el->data);
}
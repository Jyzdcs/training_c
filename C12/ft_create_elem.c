#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_el(void *data)
{
	t_list	*new_el;
	new_el = malloc(sizeof(t_list));
	if (new_el == NULL)
		return (NULL);
	new_el->data = data;
	new_el->next = NULL;
	return (new_el);
}

int	main(int argc, char *argv[])
{
	t_list	*el = ft_create_el(argv[1]);
	printf("el data : %s", (char *)el->data);
}
#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

int	count_node(t_list *begin_list)
{
	int	i;

	i = 0;
	while (begin_list != NULL)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}

/* Renvoyer un pointeur vers le n-ieme noeud par recursion*/
t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if (count_node(begin_list) <= nbr || begin_list == NULL)
		return (NULL);
	if (nbr == 0)
		return (begin_list);
	return (ft_list_at(begin_list->next, --nbr));
}

/* Creer un noeud */
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

/* Creer une liste chainee par recursion */
t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*node;

	if (size <= 0)
		return (NULL);
	node = ft_create_elem(strs[size - 1]);
	if (size == 1)
		return (node);
	node->next = ft_list_push_strs(--size, strs);
	return (node);
}

/* Afficher le resultat de chaques fonctions */
int	main(int argc, char *argv[])
{
	t_list	*node = ft_list_push_strs(argc - 1, &argv[1]);
	t_list	*tmp = node;
	t_list	*n_node = ft_list_at(node, 5);

	if (n_node != NULL)
		printf("voici le 5eme el : %s\n", (char *)n_node->data);
	else
		printf("ERROR\n");
	while (tmp != NULL)
	{
		printf("%s\n", (char *)tmp->data);
		tmp = tmp->next;
	}
}
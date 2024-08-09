#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	/*
	cuenta el numero de nodos de una lista 
	param lst: principio de la lista
	return 
	*/
	int		i;
	t_list	*node_position;

	i = 0;
	node_position = lst;
	while (node_position != NULL)
	{
		node_position = node_position->next;
		i++;
	}
	return (i);
}
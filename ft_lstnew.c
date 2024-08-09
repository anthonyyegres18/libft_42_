#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	/*
	crea un nodo donde de tipo t_list
	param content: valor a almacenar en el nuevo nodo t_list
	return nuevo nodo de tipo t_list
	*/
	t_list	*new_node;

	if (!(new_node = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
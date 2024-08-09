#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	/*
	libera la memoria del contenido utilizando la funcion 'del
	dada como parametro, 
	param lst: el nodo a liberar
	param del: puntero a la funcion utlizada para liberar el contenido del nodo
	return
	*/
	if (!lst)
		return ;
	if (del)
		del(lst->content);
	free(lst);
}

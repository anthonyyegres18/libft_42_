#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	/*
	elimina y libera el nodo 'lst' dado y todos los consecutivos 
	de ese nodo
	param lst: direccion de un puntero a un nodo
	param del: un puntero a funcion utilizado para elminar el contenido
	return
	*/
	t_list	*position;

	if (!lst)
		return ;
	while (*lst != NULL)
	{
		position = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = position;
	}
}

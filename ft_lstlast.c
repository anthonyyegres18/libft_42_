#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	/*devuelve el ultimo nodo de la lista
	param lst: el principio de la lista
	return ultimo nodo de la lista
	*/
	while (lst != NULL && lst->next != NULL)
		lst = lst->next;
	return (lst);
}
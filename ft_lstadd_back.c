#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	/*
	anade el nodo 'new' al final de la lista 'lst'
	param lst: el puntero al primer nodo de una lista
	param new: el puntero a un nodo que anadir a la lista
	return 
	*/
	t_list *position;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		position = ft_lstlast(*lst);
		position->next = new;
	}
}

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	/*itera la lista lst y aplica la funcion 'f' en el contenido de cada nodo
	param lst: un puntero al primer nodo
	param f: funcion a aplicar
	return
	*/
	t_list	*position;

	if (!lst)
		return ;
	position = lst;
	while (position != NULL)
	{
		(*f)(position->content);
		position = position->next;
	}
}

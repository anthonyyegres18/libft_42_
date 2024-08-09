#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    /*
    anade el nodo new al principio de la lsita
    param lst: direccion de un puntero al primer nodo de una lista
    param new: puntero al nodo que anadir 
    return
    */
    if (*lst == NULL)
    {
        new->next = NULL
        *lst = new;
    }
    else
    {
        new->next = *lst;
        *lst = new;
    }
}
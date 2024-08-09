#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
    /*asigna de forma dinamica un bloque de memoria
    param nmeb numero de elementos a almacenar
    param size tamaño en byte de los elementos
    return un puntero al espacio en memoria con ceros asigandos
    */
	void	*ptr;

	if (!(ptr = (void *)malloc(size * nmemb)))
		return (NULL);
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}
#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
    /*
        llena un bloque de memoria DE N BYTES con un valor específico C. 
        param: void *ptr: puntero al inico del bloque que quieres llenar
        param: int x: valor con el que se llenará el espacio en memoria
        param: size_t n: numero de bytes que se llenarán de str
        return: retorna puntero ptr con el contenido de x
    */
	size_t		i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)ptr + i) = x;
		i++;
	}
	return (ptr);
}

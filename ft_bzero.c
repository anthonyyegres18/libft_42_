#include "libft.h"

void	ft_bzero(void *ptr, size_t n)
{   /*
        llena un bloque de memoria DE N BYTES con el valor cero. 
        param: void *ptr: puntero al inico del bloque que quieres llenar
        
        param: size_t n: numero de bytes que se llenarán de str
        return: retorna puntero ptr con zeros
    */
	ft_memset(ptr, '\0', n);
}

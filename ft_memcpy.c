#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	/*
        Copia un numero especifico de bytes de un bloque de memoria src 
		a un bloque de memoria dest. 
        param: void *dest: puntero al inico del bloque que quieres llenar
        param: void *src: puntero al inicio del bloque que se quiere
		copiar en dest
        param: size_t n: numero de bytes que se llenarán de str
        return: retorna puntero dest con el contenido de src 
    */
	size_t		i;

	if (dest == src || !n)
		return (dest);
	i = 0;
	while (i < n)
	{
		*((char *)dest + i) = *((char *)src + i);
		i++;
	}
	return (dest);
}
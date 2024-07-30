#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	/*copia un bloque de memoria de una ubicacion a otra
	controlando los casos donde los bloque de memoria se superonen
	param:dest es un puntero al inicio del bloque de memoria donde
	se copiarán los datos.
	param:src es un puntero al inicio del bloque de memoria 
	desde donde se copiarán los datos.
	param:n es el número de bytes que se copiarán desde src a dest
	return puntero dest con el numero de bytes n del puntero src  
	*/
	size_t		i;

	if (dest == src || !n)
		return (dest);
	i = 0;
	if (dest < src)
	{
		while (i < n)
		{
			*((char *)dest + i) = *((char *)src + i);
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			*((char *)dest + n - 1) = *((char *)src + n - 1);
			n--;
		}
	}
	return (dest);
}
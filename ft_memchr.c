#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	/*
	escanea los n bytes de memoria del puntero s en busqueda de 
	el caracter c
	param *s, puntero donde se busca el caracter c
	param c, caracter a buscar en s
	param n, numero de bytes de s donde se buscará c
	return retorna puntero al byte donde se encuentre c, sino lo
	encuentra retorna NULL
	*/
	
	size_t		idx;

	idx = 0;
	while (idx < n)
	{
		if (*((unsigned char *)s + idx) == (unsigned char)c)
			return ((void *)s + idx);
		idx++;
	}
	return (NULL);
}

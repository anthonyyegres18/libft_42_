#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	/*compara los primeros n bytes de memoria de s1 y s2
	param s1, puntero a comparar con s1
	param s2, puntero a comparar con s2
	param n, numero de bytes a comparar
	return: retorna la diferencia que hay entre s1 y s2
	si n es 0 retorna 0
	*/
	size_t		i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s1 + i) ==
				*((unsigned char *)s2 + i))
			i++;
		else
			return ((*((unsigned char *)s1 + i)) -
						*((unsigned char *)s2 + i));
	}
	return (0);
}
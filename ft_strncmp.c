#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	/*
	compara dos punteros s1 y s2 en N numero de bytes
	param *s1: 1er puntero a comparar 
	param *s2: 2do puntero a compara
	return retorna la diferencia que hay entre s1 y s2 en enteros
	*/
	size_t		i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
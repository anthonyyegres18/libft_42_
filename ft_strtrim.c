#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	/*
	elimina todos los caracteres set del principio y del final de 
	la cadena s1, hasta encontrar un caracter que no pertenece a set
	param s1: string a limpiar
	param set: caracter a eliminar en s1 
	return puntero s1 sin los caracteres set o NULL
	*/
	size_t		size_s1;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	size_s1 = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[size_s1]) && size_s1 != 0)
		size_s1--;
	return (ft_substr((char *)s1, 0, size_s1 + 1));
}

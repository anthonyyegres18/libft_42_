#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	/*Busca la primera ocurrencia de la cadena to_find en str donde no 
	se buscan mas de len caracteres
	param str cadena larga donde se busca to_find
	param to_find cadena a buscar en str
	param len longitud de caracteres a buscar
	return  si to_find es vacio se retorna str, sino retorna un puntero
	al primer caracter de la primera ocurrencia
	sino la encuentra retorna NULL
	*/
	size_t		len_to_find;

	if (*to_find == '\0')
		return ((char *)str);
	len_to_find = ft_strlen((char *)to_find);
	while (*str != '\0' && len-- >= len_to_find)
	{
		if (*str == *to_find && ft_memcmp(str, to_find, len_to_find) == 0)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
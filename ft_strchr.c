#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	/*busca la primera ocurrencia caracter c en el string str 
	param str: string donde se busca el caracter c
	param c: caracter a buscar
	return: retorna un puntero a la primera ocurrencia 
	del caracter c en el string str, sino lo encuentra retorna 0
	*/
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (0);
}

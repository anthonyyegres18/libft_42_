#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	/*busca la ultima ocurrencia caracter c en el string str 
	param str: string donde se busca el caracter c
	param c: caracter a buscar
	return: retorna un puntero a la primera ocurrencia 
	del caracter c en el string str, sino lo encuentra retorna 0
	*/
	int		idx;

	idx = ft_strlen((char *)str) + 1;
	while (idx--)
	{
		if (*(str + idx) == c)
			return ((char *)(str + idx));
	}
	return (0);
}

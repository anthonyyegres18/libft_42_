#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	/*
	A cada carácter de la string 's', aplica la función 'f' 
	dando como parámetros el índice de cada carácter dentro de 's'
	y el propio carácter. Genera una nueva string con el 
	resultado del uso sucesivo de 'f'
	param s: la string a iterar
	param f: funcion a aplicar sobre cada caracter
	return string creada tras el correcto uso de 'f' sobre cada caracter
	*/
	size_t		i;
	char		*tmp;

	if (!s || !f ||
			!(tmp = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1))))
		return (NULL);
	i = 0;
	while (i < (ft_strlen((char *)s)))
	{
		tmp[i] = f(i, s[i]);
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

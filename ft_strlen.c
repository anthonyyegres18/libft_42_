#include "libft.h"

size_t		ft_strlen(const char *str)
{
	/*
        cuenta cuantos caracteres tiene un string str
        params: str : string a conocer su longitud
        return: longitud del string str
    */
    int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
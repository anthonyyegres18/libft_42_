#include "libft.h"

char    *ft_strdup(cont char *str)
{
	/*
	crea un nuevo puntero que es una duplicado del string str
	param str puntero a copiar
	return retorna el duplicado del string str sis retorna null 
	es no se pudo asignar la memoria de forma correcta
	*/
	int		i;
	char	*dest;

	if (!(dest = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
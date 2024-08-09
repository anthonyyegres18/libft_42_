// por desarrollar
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	/*
		aplica la funcion *f a cada caracter de la string s
		param s: string a iterar y aplicar la funcion s
		param f: funcion a aplicar
		return 
	*/
	int		i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
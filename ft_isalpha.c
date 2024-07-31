#include "libft.h"

int		ft_isalpha(int c)
{
    /*
        verifica si un caracter 'c' es una letra del alfabeto 
        params: c : caracter a verificar
        return: 1 si es una letra del alfabeto 0 si no lo es
    */
	if ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
#include "libft.h"

int		ft_isalnum(int c)
{   
    /*
        verifica si un caracter 'c' es un numero del 0 al 9
        o si es una letra del  alfabeto 
        params: c : caracter a verificar
        return: 1 si es un numero o letra. 0 si no lo es
    */
	if ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z') ||
			(c >= '0' && c <= '9'))
		return (1);
	return (0);
}
#include "libft.h"

int		ft_isdigit(int c)
{   
    /*
        verifica si un caracter 'c' es un numero del 0 al 9 
        params: c : caracter a verificar
        return: 1 si es un numero 0 si no lo es
    */
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
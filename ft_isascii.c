#include "libft.h"

int		ft_isascii(int c)
{
    /*
        verifica si un caracter 'c' pertenece a los
        caracteres ascis 0 al 127
        o si es una letra del  alfabeto 
        params: c : caracter a verificar
        return: 1 si c pertenece a asci. 0 si no
    */
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

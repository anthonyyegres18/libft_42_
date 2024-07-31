#include "libft.h"

int		ft_isprint(int c)
{
	/*
        verifica si el caracter 'c' es imprimible en pantalla
		que esté entre (32 y 126)
        params: c : caracter a verificar
        return: 1 si c es imprimible. 0 si no lo es
    */
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}


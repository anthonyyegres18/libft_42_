#include "libft.h"

int		ft_tolower(int c)
{
	/*
	Transforma un caracter alfabetico en mayusculas c a 
	minusculas
	param c: caracter a transformar
	return caracter en minusculas
	*/
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

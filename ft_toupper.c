#include "libft.h"

int		ft_toupper(int c)
{
	/*
	Transforma un caracter alfabetico en minusculas c a 
	mayusculas
	param c: caracter a transformar
	return caracter en mayusculas
	*/
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

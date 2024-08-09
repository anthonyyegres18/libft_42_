#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	/*
	Envia el caracter 'c' al file descriptor
	param c: caracter a enviar
	param fd: el file descriptor sobre el que escribir 
	return 
	*/
	write(fd, &c, 1);
}
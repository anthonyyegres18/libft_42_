#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	/*
	envia la string 's' al file descriptor dado, seguido de un salto de linea
	param s: string a enviar 
	param fd: archivo descriptor dado 
	return 
	*/
	if (s)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}
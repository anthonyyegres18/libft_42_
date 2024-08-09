#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	/*
	envia la string 's' al file descriptor
	string 
	param s: string a enviar
	param fd: file descriptor al que sobre el que escribir
	return 
	*/
	int		i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
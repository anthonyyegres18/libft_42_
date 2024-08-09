#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	/*concatena cadenas de caracteres de manera segura
	param dst: Un puntero al arreglo de caracteres donde se almacenará 
	la cadena resultante de la concatenación.
	param src: Un puntero a la cadena de caracteres que se añadirá al final de dst.
	param size: El tamaño total del arreglo dst, incluyendo el espacio 
	para el carácter nulo final 
	return retorna la suma de la longitud de dst mas src 
	*/
	size_t		i;
	size_t		src_i;
	size_t		value;

	if (size == 0)
		return (ft_strlen(src));
	else if (size < ft_strlen(dest))
		value = ft_strlen(src) + size;
	else
		value = ft_strlen(src) + ft_strlen(dest);
	i = 0;
	while (dest[i] != '\0')
		i++;
	src_i = 0;
	while (src[src_i] != '\0' && i + 1 < size)
	{
		dest[i] = src[src_i];
		src_i++;
		i++;
	}
	dest[i] = '\0';
	return (value);
}

/**/
int main(void)
{
    char destination[7] = "Hello, ";
    const char *source = "World!";
    size_t total_length;

    total_length = ft_strlcat(destination, source, sizeof(destination));
    printf("Concatenated string: %s\n", destination);
    printf("Total length: %zu\n", total_length);
    return (0);
}
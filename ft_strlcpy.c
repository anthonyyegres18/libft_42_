#include "libft.h"

size_t		ft_strlcpy(char *dest, const char *src, size_t size)
{
	/*
		copia una cadena de caracetes de una fuente src a la cadena 
		dest, 
		param dest: Un puntero al arreglo de caracteres donde se 
		almacenará la cadena copiada
		param src: Un puntero a la cadena de caracteres que se copiará.
		size  El tamaño máximo del arreglo dest
		incluyendo el espacio para el carácter nulo final 
		return 
	*/
	size_t		i;
	size_t		count;

	i = 0;
	count = 0;
	if (!dest || !src)
		return (0);
	while (src[count])
		count++;
	while (src[i] && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size)
		dest[i] = '\0';
	return (count);
}

// int main() {

//     char src1[] = "Hola Mundo";
//     char dest1[11]; // Buffer de destino más pequeño que la cadena de origen

//     // Copia la cadena de origen al buffer de destino
//     size_t len1 = ft_strlcpy(dest1, src1, sizeof(dest1));

//     printf("Cadena copiada: %s\n", dest1);
//     printf("Longitud de la cadena de origen: %zu\n", len1);
//     return 0;
// }
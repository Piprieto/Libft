

#include "libft.h"
#include <stdio.h>

void	*ft_bzero(void *str, size_t n)
{
	ft_memset(str, 0, n);
	return (str);
}
/*
int main()
{
	char str[50] = "Este es un ejemplo de cadena.";
	printf("Antes de ft_bzero: %s\n", str);
	ft_bzero(str, 5);
	printf("Después de ft_bzero: %s\n", str);
	return 0;
}*/

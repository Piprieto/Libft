/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piprieto <piprieto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:59:34 by piprieto          #+#    #+#             */
/*   Updated: 2024/10/16 11:58:34 by piprieto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == (char)c)
		{
			return ((char *)s + i);
		}
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s + i);
	return (0);
}
/*
int main() {
    const char *str = "Hello, World!";
    char ch = 'o';  // Carácter que queremos buscar
    char *result;

    // Llamada a ft_strchr para buscar 'o' en "Hello, World!"
    result = ft_strchr(str, ch);

    // Verificar el resultado y mostrarlo
    if (result != NULL) {
        printf("El carácter '%c' en la posición: %ld\n", ch, result - str);
        printf("La cadena desde el carácter encontrado es: %s\n", result);
    } else {
        printf("El carácter '%c' no se encontró en la cadena.\n", ch);
    }

    // Buscar un carácter que no esté en la cadena
    ch = 'z';
    result = ft_strchr(str, ch);

    if (result != NULL) {
        printf("El carácter '%c' en la posición: %ld\n", ch, result - str);
    } else {
        printf("El carácter '%c' no se encontró en la cadena.\n", ch);
    }

    return 0;
}*/

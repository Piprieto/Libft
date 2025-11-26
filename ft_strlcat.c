/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piprieto <piprieto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:44:31 by piprieto          #+#    #+#             */
/*   Updated: 2024/10/16 11:59:04 by piprieto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	londst;
	size_t	lonsrc;
	size_t	i;

	londst = ft_strlen(dst);
	lonsrc = ft_strlen((char *)src);
	if (dstsize <= londst)
		return (lonsrc + dstsize);
	i = londst;
	while (*src != '\0' && i < (dstsize - 1))
		*(dst + i++) = *src++;
	*(dst + i) = '\0';
	return (londst + lonsrc);
}
/*
int main() {
    char dst[20] = "Hello";  // Buffer destino con espacio adicional
    const char src[] = ", World!";  // Cadena fuente a concatenar
    size_t result;
    size_t dstsize = sizeof(dst);

    // Llamada a ft_strlcat
    result = ft_strlcat(dst, src, dstsize);

    // Imprimir los resultados
    printf("Cadena resultante: %s\n", dst);
    printf("Longitud total que se intentó crear: %zu\n", result);

    // Verificar si hubo truncamiento
    if (result >= dstsize) {
        printf("La concatenación fue truncada.\n");
    } else {
        printf("La concatenación fue exitosa.\n");
    }

    return (0);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piprieto <piprieto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:29:06 by piprieto          #+#    #+#             */
/*   Updated: 2024/10/16 11:59:38 by piprieto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = 0;
	if (src != NULL)
	{
		len = ft_strlen((char *)src);
		if (dst != NULL && dstsize != 0)
		{
			i = 0;
			while ((i < len) && i < (dstsize - 1))
			{
				dst[i] = src[i];
				i++;
			}
			dst[i] = '\0';
		}
	}
	return (len);
}
/*
int main() 
{
    char src[] = "Hello, World!";
    char dst[6];  // Buffer destino de tamaño 6 (5 caracteres + '\0')
    size_t result;

    // Llamada a ft_strlcpy
    result = ft_strlcpy(dst, src, sizeof(dst));

    // Imprimir el resultado
    printf("Cadena original: %s\n", src);
    printf("Cadena copiada: %s\n", dst);
    printf("Longitud de la cadena original: %zu\n", result);

    // Verificar si hubo truncamiento
    if (result >= sizeof(dst)) {
        printf("La cadena fue truncada.\n");
    } else {
        printf("La cadena fue copiada completamente.\n");
    }

    return (0);
}*/
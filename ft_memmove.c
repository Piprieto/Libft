/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piprieto <piprieto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:13:57 by piprieto          #+#    #+#             */
/*   Updated: 2024/10/16 11:56:30 by piprieto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	if (d < s || d >= (s + n))
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		d += n;
		s += n;
		while (n--)
			*(--d) = *(--s);
	}
	return (dest);
}
/*
int main() {
    // Ejemplo 1: Copia sin solapamiento
    char src1[] = "Hola Mundo";
    char dest1[20];

    // Copiamos los primeros 5 caracteres de src1 a dest1
    ft_memmove(dest1, src1, 5);
    dest1[5] = '\0'; // Agregamos un terminador de cadena
    printf("Copia sin solapamiento: %s\n", dest1);  // Salida: "Hola "

    // Ejemplo 2: Copia con solapamiento
    char str2[] = "Solapamiento en Memoria";
    
    // Copiamos parte de la cadena a una posición dentro de sí misma
    ft_memmove(str2 + 10, str2, 9);
    printf("Copia con solapamiento: %s\n", str2); //Salida:"SolapamienSolapamien"

    return 0;
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piprieto <piprieto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:07:52 by piprieto          #+#    #+#             */
/*   Updated: 2024/10/16 11:49:29 by piprieto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				i;

	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	if (dest == src || n == 0)
	{
		return (dest);
	}
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
int main()
{
    char src[] = "Esta es la fuente de prueba";
    char dest[20];  // Buffer destino

    printf("Fuente: %s\n", src);
    // Usando ft_memcpy para copiar 'src' a 'dest'
    ft_memcpy(dest, src, strlen(src) + 1);  // Incluyendo el '\0'

    // Mostramos el resultado de la copia
    printf("Resultado de ft_memcpy: %s\n", dest);
    return (0);
}*/
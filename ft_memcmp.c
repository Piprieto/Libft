/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piprieto <piprieto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:55:42 by piprieto          #+#    #+#             */
/*   Updated: 2024/10/16 11:48:46 by piprieto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
/*
int main() 
{
    char arr1[] = { 'a', 'b', 'c' };
    char arr2[] = { 'a', 'b', 'c' };

    // Comparar los primeros 3 bytes de arr1 y arr2
    int resultado = ft_memcmp(arr1, arr2, 3);

    if (resultado == 0) {
        printf("Los bloques de memoria son iguales.\n");
    } else if (resultado > 0) {
        printf("El bloque arr1 es mayor que arr2.\n");
    } else {
        printf("El bloque arr1 es menor que arr2.\n");
    }
    return (0);
}*/
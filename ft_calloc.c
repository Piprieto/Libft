/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piprieto <piprieto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 11:25:23 by piprieto          #+#    #+#             */
/*   Updated: 2024/10/16 11:40:09 by piprieto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h> 
#include "libft.h" 

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}
/*
int main() 
{
    // Usar ft_calloc para asignar memoria para un array de 5 enteros
    int *arr = (int *)ft_calloc(5, sizeof(int));

    if (arr == NULL) {
        printf("No se pudo asignar memoria.\n");
        return 1;
    }

    // Imprimir los valores inicializados
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);  // Deberían imprimirse ceros (0 0 0 0 0)
    }

    // Liberar la memoria asignada
    free(arr);

    return (0);
}*/
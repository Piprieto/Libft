/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piprieto <piprieto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:06:43 by piprieto          #+#    #+#             */
/*   Updated: 2024/10/16 11:51:49 by piprieto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	ft_strlcpy(dup, s, len + 1);
	return (dup);
}
/*
int main() 
{
    const char *original = "Holaaaa";
    
    // Duplicar cadena
    char *duplicado = ft_strdup(original);
    
    if (duplicado == NULL) {
        printf("Error al duplicar la cadena.\n");
        return 1;
    }

    // Imprimir la cadena original y la duplicada
    printf("Original: %s\n", original);
    printf("Duplicado: %s\n", duplicado);

    // Liberar la memoria asignada
    free(duplicado);

    return 0;
}*/

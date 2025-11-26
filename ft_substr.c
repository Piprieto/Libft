/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piprieto <piprieto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 09:44:41 by piprieto          #+#    #+#             */
/*   Updated: 2024/10/16 11:55:05 by piprieto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
int main(void)
{
    char *original = "Hello, World!";
    unsigned int start = 7;  // Posición desde donde se empezará 
    				a extraer la subcadena
    size_t length = 5;       // Longitud de la subcadena a extraer

    // Llamar a ft_substr
    char *subcadena = ft_substr(original, start, length);

    // Verificar si la subcadena fue creada correctamente
    if (subcadena != NULL)
    {
        printf("Subcadena extraída: '%s'\n", subcadena);
        free(subcadena);  // Liberar la memoria asignada por malloc
    }
    else
    {
        printf("Error al crear la subcadena.\n");
    }

    return 0;
}*/

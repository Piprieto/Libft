/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piprieto <piprieto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 11:27:31 by piprieto          #+#    #+#             */
/*   Updated: 2024/10/16 11:54:36 by piprieto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	ft_strcpy(char *dest, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[len] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed_str;

	start = 0;
	end = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	trimmed_str = malloc(end - start + 1);
	if (!trimmed_str)
		return (NULL);
	ft_strcpy(trimmed_str, s1 + start, end - start);
	return (trimmed_str);
}
/*
int main(void)
{
    // Ejemplo de cadenas a recortar
    char *s1 = "   Hello, World!   ";
    char *set = " ";  // Conjunto de caracteres a eliminar (espacios)

    // Llamar a ft_strtrim para eliminar caracteres de 'set' desde ambos
    // extremos de 's1'
    char *resultado = ft_strtrim(s1, set);

    // Verificar si la operación fue exitosa
    if (resultado != NULL)
    {
        printf("Cadena recortada: '%s'\n", resultado);
        free(resultado);  // Liberar la memoria asignada por ft_strtrim
    }
    else
    {
        printf("Error al recortar la cadena.\n");
    }

    return 0;
}
¿tiene que eliminar todos ls espacios?, 
queda así: "Hello, World!" o así: "Hello,World!"
*/

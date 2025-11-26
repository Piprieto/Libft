/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piprieto <piprieto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:22:40 by piprieto          #+#    #+#             */
/*   Updated: 2024/10/16 11:53:53 by piprieto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined_str;
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	joined_str = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!joined_str)
		return (NULL);
	i = 0;
	while (i < s1_len)
	{
		joined_str[i] = s1[i];
		i++;
	}
	while (i < s1_len + s2_len)
	{
		joined_str[i] = s2[i - s1_len];
		i++;
	}
	joined_str[i] = '\0';
	return (joined_str);
}
/*
int main(void)
{
    // Definir las cadenas a concatenar
    char *cadena1 = "Hola, ";
    char *cadena2 = "Mundo!";

    // Llamar a ft_strjoin para concatenar las dos cadenas
    char *resultado = ft_strjoin(cadena1, cadena2);

    // Verificar si la concatenación fue exitosa
    if (resultado != NULL)
    {
        printf("Resultado de la concatenación: %s\n", resultado);
        free(resultado);  // Liberar la memoria asignada por ft_strjoin
    }
    else
    {
        printf("Error al concatenar las cadenas.\n");
    }

    return 0;
}*/

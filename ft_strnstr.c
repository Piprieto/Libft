/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piprieto <piprieto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:56:24 by piprieto          #+#    #+#             */
/*   Updated: 2024/10/16 12:01:21 by piprieto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	if (*(little + i) == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len && little[j != '\0'])
			j++;
		if (little[j] == '\0')
			return ((char *) big + i);
		i ++;
	}
	return (NULL);
}
/*
int main() 
{
    const char *big = "Hola mundo!";
    const char *little = "mu";

    // Buscamos "mundo" en "Hola mundo!" pero solo en los primeros 8 caracteres.
    char *result = ft_strnstr(big, little, 8);

    if (result != NULL) {
        printf("Subcadena encontrada: %s\n", result);
    } else {
        printf("Subcadena no encontrada en el rango dado.\n");
    }
    return (0);
}*/

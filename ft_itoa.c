/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piprieto <piprieto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 10:49:18 by piprieto          #+#    #+#             */
/*   Updated: 2024/10/17 12:41:05 by piprieto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	get_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static void	fill_str(char *str, long int n, int len)
{
	str[len] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return ;
	}
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	while (n)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	char		*str;
	int			len;
	long int	nbr;

	len = get_len(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	nbr = n;
	fill_str(str, nbr, len);
	return (str);
}
/*
int main(void)
{
    // Ejemplos de números a convertir
    int num1 = 12345;
    int num2 = -9876;
    int num3 = 0;
    int num4 = -2147483648;  
    int num5 = 2147483647;   
    
    // Convertir cada número a una cadena usando ft_itoa
    char *str1 = ft_itoa(num1);
    char *str2 = ft_itoa(num2);
    char *str3 = ft_itoa(num3);
    char *str4 = ft_itoa(num4);
    char *str5 = ft_itoa(num5);

    // Imprimir los resultados de la conversión
    if (str1) printf("El número %d como cadena es: %s\n", num1, str1);
    if (str2) printf("El número %d como cadena es: %s\n", num2, str2);
    if (str3) printf("El número %d como cadena es: %s\n", num3, str3);
    if (str4) printf("El número %d como cadena es: %s\n", num4, str4);
    if (str5) printf("El número %d como cadena es: %s\n", num5, str5);

    // Liberar la memoria asignada por ft_itoa
    free(str1);
    free(str2);
    free(str3);
    free(str4);
    free(str5);

    return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piprieto <piprieto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 09:06:19 by piprieto          #+#    #+#             */
/*   Updated: 2024/10/16 11:34:52 by piprieto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*nptr == ' ')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
		{
			sign = -1;
			nptr++;
		}
		else
			nptr ++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return (sign * result);
}
/*
int main ()
{
    char str1[] = "   -1234";
    char str2[] = "5678";
    char str3[] = "   -25";
    char str4[] = "  +05";
    char str5[] = "56 78";
    char str6[] = " +-5";

    printf("El valor de str1 es: %d\n", ft_atoi(str1));  // Imprime: -1234
    printf("El valor de str2 es: %d\n", ft_atoi(str2));  // 5678
    printf("El valor de str3 es: %d\n", ft_atoi(str3));  // -25
    printf("El valor de str4 es: %d\n", ft_atoi(str4));  // 5
    printf("El valor de str5 es: %d\n", ft_atoi(str5));  // 56
    printf("El valor de str6 es: %d\n", ft_atoi(str6));  // 0
    
    return (0);
}*/

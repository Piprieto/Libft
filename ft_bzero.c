/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piprieto <piprieto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:00:23 by piprieto          #+#    #+#             */
/*   Updated: 2024/10/16 11:38:08 by piprieto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_bzero(void *str, size_t n)
{
	ft_memset(str, 0, n);
	return (str);
}
/*
int main()
{
	char str[50] = "Este es un ejemplo de cadena.";
	printf("Antes de ft_bzero: %s\n", str);
	ft_bzero(str, 5);
	printf("Después de ft_bzero: %s\n", str);
	return 0;
}*/

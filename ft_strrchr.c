/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piprieto <piprieto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:37:22 by piprieto          #+#    #+#             */
/*   Updated: 2024/10/03 13:17:07 by piprieto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	length;

	length = ft_strlen(str);
	while (length >= 0)
	{
		if (str[length] == c)
			return ((char *)&str[length]);
		length--;
	}
	if ((char)c == '\0')
		return ((char *)str + length);
	return (0);
}

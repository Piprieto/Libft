/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piprieto <piprieto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 08:53:12 by piprieto          #+#    #+#             */
/*   Updated: 2024/10/24 09:53:36 by piprieto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void print_content(void *content)
{
    printf("%s\n", (char *)content);
}
int main(void)
{
    // Crear elementos de la lista
    t_list *elem1 = ft_lstnew("Elemento 1");
    t_list *elem2 = ft_lstnew("Elemento 2");
    t_list *elem3 = ft_lstnew("Elemento 3");

    // Enlazar los elementos
    elem1->next = elem2;
    elem2->next = elem3;

    // Aplicar ft_lstiter con una función para imprimir el contenido
    printf("Aplicando ft_lstiter:\n");
    ft_lstiter(elem1, print_content);

    // Liberar la memoria de los elementos
    free(elem1);
    free(elem2);
    free(elem3);

    return 0;
}
*/
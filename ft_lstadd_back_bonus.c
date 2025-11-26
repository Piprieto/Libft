/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piprieto <piprieto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 09:04:27 by piprieto          #+#    #+#             */
/*   Updated: 2024/10/17 12:43:37 by piprieto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
/*int main(void)
{
    t_list *list = NULL;
    int value1 = 10;
    int value2 = 20;
    int value3 = 30;
    t_list *last_node;

    // Crear tres nodos y añadirlos a la lista (list = 10 -> 20 -> 30)
    //primer nodo
    list = ft_lstnew(&value1);
    last_node = ft_lstlast(list); 
        // Imprimir el contenido del último nodo
    if (last_node)
        printf("Contenido último nodo es: %d\n", *(int *)last_node->content);
    else
        printf("La lista está vacía.\n");
     //segundo nodo     
    ft_lstadd_back(&list, ft_lstnew(&value2));
    last_node = ft_lstlast(list);
        // Imprimir el contenido del último nodo
    if (last_node)
        printf("El último nodo es: %d\n", *(int *)last_node->content);
    else
        printf("La lista está vacía.\n");
        //tercer nodo
    ft_lstadd_back(&list, ft_lstnew(&value3));
    last_node = ft_lstlast(list);
        // Imprimir el contenido del último nodo
    if (last_node)
        printf("El último nodo es: %d\n", *(int *)last_node->content);
    else
        printf("La lista está vacía.\n");
      // Liberar la memoria de la lista
    while (list)
    {
        t_list *next = list->next;
        free(list);
        list = next;
    }

    return 0;
}*/

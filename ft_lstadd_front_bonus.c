/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piprieto <piprieto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 08:46:55 by piprieto          #+#    #+#             */
/*   Updated: 2024/10/16 08:47:23 by piprieto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*int main(void)
{
    t_list *list = NULL;
    t_list *new_node;
    int value1 = 1;
    int value2 = 2;
    int new_value = 0;

    // Crear dos nodos y añadirlos a la lista (list = 1 -> 2)
    list = ft_lstnew(&value2);
    ft_lstadd_front(&list, ft_lstnew(&value1));

    // Imprimir la lista antes de añadir el nuevo nodo
    printf("Lista antes de añadir el nuevo nodo:\n");
    for (t_list *temp = list; temp; temp = temp->next)
        printf("%d\n", *(int *)temp->content);

    // Crear un nuevo nodo con valor 0 y añadirlo al frente
    new_node = ft_lstnew(&new_value);
    ft_lstadd_front(&list, new_node);

    // Imprimir la lista después de añadir el nuevo nodo (list = 0 -> 1 -> 2)
    printf("\nLista después de añadir el nuevo nodo al frente:\n");
    for (t_list *temp = list; temp; temp = temp->next)
        printf("%d\n", *(int *)temp->content);

    // Liberar memoria de la lista
    while (list)
    {
        t_list *next = list->next;
        free(list);
        list = next;
    }
    return (0);
}*/

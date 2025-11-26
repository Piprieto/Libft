/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piprieto <piprieto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 08:49:31 by piprieto          #+#    #+#             */
/*   Updated: 2024/10/16 08:50:05 by piprieto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*int main(void)
{
    t_list *list = NULL;
    int value1 = 10;
    int value2 = 20;
    int value3 = 30;
    int size = 0;
    t_list *last_node;

    // Crear tres nodos y añadirlos a la lista (list = 10 -> 20 -> 30)
    ft_lstadd_back(&list, ft_lstnew(&value1));
    ft_lstadd_back(&list, ft_lstnew(&value2));
    ft_lstadd_back(&list, ft_lstnew(&value3));
    
    //Comprobamos aquí la función ft_size
    size = ft_lstsize(list);
    printf("El número de nodos de la lista es: %d\n", size);
    
    // Obtener el último nodo de la lista
    last_node = ft_lstlast(list);

    // Imprimir el contenido del último nodo
    if (last_node)
        printf("Contenido del último nodo: %d\n", *(int *)last_node->content);
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

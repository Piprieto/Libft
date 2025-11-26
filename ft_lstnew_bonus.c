/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piprieto <piprieto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 08:44:27 by piprieto          #+#    #+#             */
/*   Updated: 2024/10/16 08:46:03 by piprieto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof (t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
int main(void)
{
    int value = 42;
    t_list *node;

    // Crear un nuevo nodo con el valor de 'value'
    node = ft_lstnew(&value);

    // Comprobar si el nodo fue creado correctamente
    if (node)
    {
        // Imprimir el valor almacenado en el nodo
        printf("El contenido del nodo es: %d\n", *(int *)node->content);
        
        // Liberar la memoria del nodo
        free(node);
    }
    else
    {
        printf("Error al crear el nodo.\n");
    }

    return 0;
}*/

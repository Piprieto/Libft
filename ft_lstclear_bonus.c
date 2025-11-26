/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piprieto <piprieto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 08:52:23 by piprieto          #+#    #+#             */
/*   Updated: 2024/10/30 11:32:41 by piprieto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}

/*void	del(void *content)
{
	free(content);
}*/
/*
int main(void)
{
    t_list *list = NULL;
    char *str1 = strdup("Nodo 1");
    char *str2 = strdup("Nodo 2");
    char *str3 = strdup("Nodo 3");

    // Crear nodos y añadirlos a la lista
    list = ft_lstnew(str1);
    list->next = ft_lstnew(str2);
    list->next->next = ft_lstnew(str3);

    // Imprimir la lista antes de limpiarla
    printf("Lista antes de limpiarla:\n");
    t_list *temp = list;
    while (temp)
    {
        printf("%s\n", (char *)temp->content);
        temp = temp->next;
    }

    // Limpiar la lista
    ft_lstclear(&list, del);

    // Verificar si la lista ha sido limpiada
    if (!list)
        printf("\nLa lista ha sido limpiada correctamente.\n");
    else
        printf("\nError: la lista no se ha limpiado completamente.\n");

    return 0;
}*/
/*
// Main para probar ft_lstclear desde un nodo concreto
int main(void)
{
    t_list *list = NULL;
    t_list *node_to_start_clear;
    char *str1 = strdup("Nodo 1");
    char *str2 = strdup("Nodo 2");
    char *str3 = strdup("Nodo 3");
    char *str4 = strdup("Nodo 4");

    // Crear nodos y añadirlos:list ="Nodo 1","Nodo 2","Nodo 3","Nodo 4"
     list = ft_lstnew(str1);
    list->next = ft_lstnew(str2);
    list->next->next = ft_lstnew(str3);
    list->next->next->next = ft_lstnew(str4);

    // Guardar la ref del nodo desde el que se quiere comenzar a limpiar, el 3
    node_to_start_clear = list->next->next;

    // Imprimir la lista antes de limpiarla desde el nodo especificado
    printf("Lista antes de limpiar desde 'Nodo 3':\n");
    t_list *temp = list;
    while (temp)
    {
        printf("%s\n", (char *)temp->content);
        temp = temp->next;
    }

    // Limpiar la lista desde 'Nodo 3'
    ft_lstclear(&node_to_start_clear, del);
    list->next->next = NULL; //Asegurar q el nodo "Nodo 2" apunte a NULL

    // Imprimir la lista después de limpiar desde 'Nodo 3'
    printf("\nLista después de limpiar desde 'Nodo 3':\n");
    temp = list;
    while (temp)
    {
        printf("%s\n", (char *)temp->content);
        temp = temp->next;
    }

    // Limpiar el resto de la lista para evitar fugas de memoria
    ft_lstclear(&list, del);

    return 0;
}*/

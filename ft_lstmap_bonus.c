/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piprieto <piprieto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 08:54:27 by piprieto          #+#    #+#             */
/*   Updated: 2024/10/30 11:33:54 by piprieto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/*void	del(void *content)
{
	free(content);
}*/
/*
void	*duplicate(void *content)
{
	int	*new_content;

	new_content = malloc(sizeof(int));
	if (!new_content)
		return (NULL);
	*new_content = (*(int *)content) * 2;
	return (new_content);
}

int main(void)
{
    t_list *lst = NULL;
    t_list *new_list;
    int *num;

    // Crear lista original con 3 elementos
    for (int i = 1; i <= 3; i++)
    {
        num = malloc(sizeof(int));
        if (!num)
            return (1);
        *num = i;
        ft_lstadd_back(&lst, ft_lstnew(num));
    }

    // Imprimir lista original
    printf("Lista original:\n");
    for (t_list *temp = lst; temp; temp = temp->next)
        printf("%d\n", *(int *)temp->content);

    // Crear nueva lista aplicando ft_lstmap
    new_list = ft_lstmap(lst, &duplicate, &del);

    // Imprimir lista transformada
    printf("\nLista transformada (duplicada):\n");
    for (t_list *temp = new_list; temp; temp = temp->next)
        printf("%d\n", *(int *)temp->content);

    // Limpiar memoria
    ft_lstclear(&lst, &del);
    ft_lstclear(&new_list, &del);

    return (0);
}*/
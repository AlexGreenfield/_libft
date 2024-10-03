/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:36:10 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/03 21:15:27 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Creates new list with f ft applied in all node contents, del if needed
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list_head; // A pointer to the head of the new list
	t_list	*list_node; // A node buffer to iterate through the list

	list_head = NULL; // We inizialite our lst with NULL (latter it will be filled by lstnew)
	while (lst) // We loop through the list
	{
		list_node = ft_lstnew(lst->content); // We create a new node with the content of lst
		if (!list_node) // Malloc check
		{
			ft_lstclear(&list_head, del); // If the loop fails, we clean al nodes with del and free from the start of the list
			return (NULL);
		}
		list_node->content = f(list_node->content); // We apply f ft to the contents of new node
		ft_lstadd_back(&list_head, list_node); // We move the new node to the end of the list
		lst = lst->next; // We iterate the source list
	}
	return (list_head); // We return the first position of the list
}

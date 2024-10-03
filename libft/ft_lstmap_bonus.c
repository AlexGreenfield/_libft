/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:36:10 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/03 19:14:23 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Creates new list with f ft applied in all node contents, del if needed
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list_head;
	t_list	*list_node;

	list_head = NULL;
	while (lst)
	{
		list_node = ft_lstnew(lst->content);
		if (!list_node)
		{
			ft_lstclear(&list_head, del);
			return (NULL);
		}
		list_node->content = f(list_node->content);
		ft_lstadd_back(&list_head, list_node);
		lst = lst->next;
	}
	return (list_head);
}

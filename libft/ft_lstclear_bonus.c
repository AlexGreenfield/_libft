/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:16:14 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/03 17:53:06 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Clears the content of every node in a list with f ft and frees it
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*delete_previous;

	while (*lst)
	{
		delete_previous = *lst;
		del((*lst)->content);
		*lst = (*lst)->next;
		free(delete_previous);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:16:14 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/03 21:12:01 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Clears the content of every node in a list with f ft and frees it
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*delete_previous; // A buffer to delete the previous node

	while (*lst) // While we iterate throught the list...
	{
		delete_previous = *lst; // We save the actual position of the list in a temporal buffer
		del((*lst)->content); // We remove the content from the actual node on the list
		*lst = (*lst)->next; // We iterate one position on the list
		free(delete_previous); // We free the node we had just deleted
	}
}

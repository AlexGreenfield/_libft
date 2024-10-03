/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:56:33 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/03 21:09:32 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Adds a node to the end of a list
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node; // We create a new pointer to return the las position

	if (!new) // Check for new arg
		return ;
	if (!*lst) // If there's not a list at the moment, we make new node as the new head of the list
		*lst = new;
	else
	{
		last_node = ft_lstlast(*lst); // We point to the last node of the list
		last_node->next = new; // We change the next value of last node from null to new
	}
}

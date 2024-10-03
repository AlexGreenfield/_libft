/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:57:34 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/03 21:06:54 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Adds a node to the beginning of a list
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new) // First, we check if we received a new node as a paremeter
	{
		new->next = *lst; // We locate the actual position of the list in the next of new, making it the second
		*lst = new; // We move the pointer to the head of the list to new
	}
}

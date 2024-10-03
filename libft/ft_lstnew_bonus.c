/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:57:25 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/03 21:05:30 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Creates a new node in a list with malloc
t_list	*ft_lstnew(void *content)
{
	t_list	*new_node; // First, we create a new pointer to t_list

	new_node = malloc(sizeof(t_list)); // We allocate it's size via malloc
	if (!new_node) // Malloc check
		return (NULL);
	new_node->content = content; // We copy the content take as an argument to the new node
	new_node->next = NULL; // We null terminate next to avoid errors
	return (new_node); // Return new pointer
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:57:30 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/03 21:07:59 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Returns a pointer to the last node of a list
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst) // Check for arg
		return (NULL);
	while (lst->next) // While lst next its not a null, meaning we didn't reached the end of the list...
		lst = lst->next; // ... we iterate throught the list using the next parameter
	return (lst);
}

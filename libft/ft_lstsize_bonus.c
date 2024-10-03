/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:57:18 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/03 21:16:15 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i; // Basic iterator

	i = 0;
	while (lst) // We move throught the list until last position or null
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

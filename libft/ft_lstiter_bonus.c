/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:30:58 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/03 21:12:59 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Applies f ft to every node of a list
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst) // We itetate through the list
	{
		f(lst->content); // We apply f function to the content of the actual node of lst
		lst = lst->next; // We iterate one position of the list
	}
}

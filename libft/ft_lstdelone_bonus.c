/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:05:49 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/03 21:10:18 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Deletes de content of one node with f ft and frees it
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del) // Check of args
		return ;
	del(lst->content); // We delete node content throguht the ft taken as an argument
	free(lst); // We free the node
}

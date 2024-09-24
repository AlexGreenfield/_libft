/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 20:24:45 by acastrov          #+#    #+#             */
/*   Updated: 2024/09/24 20:10:57 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Locates a subbstring in a string
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (!(*little))
		return ((char *)big);
	while (*big && len--)
	{
		if ((ft_strncmp(big, little, ft_strlen(little))))
			return ((char *)big);
		big++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 20:24:45 by acastrov          #+#    #+#             */
/*   Updated: 2024/09/30 16:23:03 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Locates a subbstring in a string
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	ll;

	if (*little == '\0')
		return ((char *)big);
	ll = ft_strlen(little);
	while (*big && len >= ll)
	{
		if (ft_strncmp(big, little, ll) == 0)
			return ((char *)big);
		len--;
		big++;
	}
	return (NULL);
}

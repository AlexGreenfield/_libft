/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 20:24:45 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/01 19:47:06 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Locates a substring in a string
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;

	if (*little == '\0')
		return ((char *)big);
	little_len = ft_strlen(little); // We determine the size of little to compare against the remaining size of the string when looping
	while (*big && len >= little_len) // If len is equal to little_len, we reached the end of the scope of len, don-t go any further
	{
		if (ft_strncmp(big, little, little_len) == 0) // We use ft_strncmp as the condition of the if. If ft_strncmp returns 0, it means that there's a exact match
			return ((char *)big);
		len--;
		big++;
	}
	return (NULL); // If there's not match, return NULL
}

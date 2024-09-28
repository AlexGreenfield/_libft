/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:35:27 by acastrov          #+#    #+#             */
/*   Updated: 2024/09/28 21:09:13 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Locates first char in a string
char	*ft_strchr(const char *s, int c)
{
	unsigned char	*string_copy;
	unsigned char	c_copy;

	string_copy = (unsigned char *)s;
	c_copy = (unsigned char)c;
	while (*string_copy)
	{
		if (c_copy == *string_copy)
			return ((char *)string_copy);
		string_copy++;
	}
	if (c_copy == '\0')
		return ((char *)string_copy);
	return (NULL);
}

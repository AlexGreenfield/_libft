/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:35:27 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/01 18:57:19 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Locates first char in a string
char	*ft_strchr(const char *s, int c)
{
	char	*c_find_pointer;

	c_find_pointer = (char *)s;
	while (*c_find_pointer)
	{
		if (*c_find_pointer == (char)c) // If we find c, we return the pointer
			return ((char *)c_find_pointer);
		c_find_pointer++;
	}
	if ((char)c == '\0')
		return ((char *)c_find_pointer); // As moving through pointers doesn't read the null terminator, we have to manual return the end of string if c is null
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:21:38 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/01 16:08:15 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
// Scan memory for a char
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*return_pointer;

	return_pointer = (unsigned char *)s;
	while (n--)
	{
		if (*return_pointer == (unsigned char)c)
			return (return_pointer);
		return_pointer++;
	}
	return (NULL);
}

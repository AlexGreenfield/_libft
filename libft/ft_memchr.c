/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:21:38 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/01 18:32:04 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
// Scan n bytes of memory for a char
void	*ft_memchr(const void *s, int c, size_t n) // s is string to search, c is ASCII value and n number of bytes to search
{
	unsigned char	*return_pointer;

	return_pointer = (unsigned char *)s; // Cast to unsigned char to avoid conflicts
	while (n--) // Loop through n bytes
	{
		if (*return_pointer == (unsigned char)c) // Cast to unsigned char to ASCII comparition
			return (return_pointer);
		return_pointer++;
	}
	return (NULL);
}

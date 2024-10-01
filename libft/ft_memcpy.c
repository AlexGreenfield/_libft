/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:57:19 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/01 18:35:00 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Copy memory value in a new area
void	*ft_memcpy(void *dest, const void *src, size_t n) // Dest is an empty string, src a const string and n number of bytes to copy
{
	unsigned char	*return_pointer;

	if (dest == NULL && src == NULL) // Safety check
		return (NULL);
	return_pointer = (unsigned char *)dest; // Cast to avoid conflicts
	while (n--) // Loop through n bytes and fill dest with src
		*return_pointer++ = *(unsigned char *)src++;
	return (dest);
}

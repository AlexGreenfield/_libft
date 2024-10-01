/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:33:57 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/01 18:38:13 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Fills memory area with a specific char
void	*ft_memset(void *s, int c, size_t n) // S empty string, c ASCII value to fill through n bytes
{
	unsigned char	*char_cast_s;

	char_cast_s = (unsigned char *)s; // We cast to avoid conflicts
	while (n--) // We fill through n bytes
		*char_cast_s++ = (unsigned char)c;
	return (s);
}

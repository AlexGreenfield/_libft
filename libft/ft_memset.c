/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:33:57 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/01 16:17:12 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Fills memory area with a specific char
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*char_cast_s;

	char_cast_s = (unsigned char *)s;
	while (n--)
		*char_cast_s++ = (unsigned char)c;
	return (s);
}

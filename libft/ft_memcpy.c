/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:57:19 by acastrov          #+#    #+#             */
/*   Updated: 2024/09/29 18:58:55 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Copy memory area
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p;

	if (dest == NULL && src == NULL)
		return (NULL);
	p = (unsigned char *)dest;
	while (n--)
		*p++ = *(unsigned char *)src++;
	return (dest);
}

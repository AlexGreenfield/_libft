/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:57:19 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/01 16:09:51 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Copy memory value in a new area
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*return_pointer;

	if (dest == NULL && src == NULL)
		return (NULL);
	return_pointer = (unsigned char *)dest;
	while (n--)
		*return_pointer++ = *(unsigned char *)src++;
	return (dest);
}

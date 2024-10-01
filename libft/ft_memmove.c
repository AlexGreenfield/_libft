/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:33:44 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/01 17:49:00 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Copies without overlaping, if src < dest copies in reverse to avoid overlap
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_copy;
	unsigned char	*src_copy;

	dest_copy = (unsigned char *)dest;
	src_copy = (unsigned char *)src;
	if (n == 0)
		return (dest);
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest < src)
	{
		while (n--)
			*dest_copy++ = *src_copy++;
	}
	else if (dest > src)
	{
		dest_copy += n;
		src_copy += n;
		while (n--)
			*--dest_copy = *--src_copy;
	}
	return (dest);
}

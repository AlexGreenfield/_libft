/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:33:44 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/01 18:37:29 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Copies without overlaping, if src < dest copies in reverse to avoid overlap
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_copy;
	unsigned char	*src_copy;

	dest_copy = (unsigned char *)dest; // Cast to avoid conflicts
	src_copy = (unsigned char *)src;
	if (n == 0) // So checks to avoid conflicts
		return (dest);
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest < src) // If the pointer of dest is before src, there's no risk of overwriting dest, we copy as usual
	{
		while (n--)
			*dest_copy++ = *src_copy++;
	}
	else if (dest > src) // If src is before dest, there's risk to overwrite dest, so we have to copy in reverse
	{
		dest_copy += n; // We go to the end of dest and src and we start copying in reverse
		src_copy += n;
		while (n--)
			*--dest_copy = *--src_copy;
	}
	return (dest);
}

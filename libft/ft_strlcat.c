/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:00:48 by acastrov          #+#    #+#             */
/*   Updated: 2024/09/25 20:25:09 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Tries to cat 2 strings and gives result size
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dl;
	size_t	sl;

	dl = (ft_strlen(dst));
	sl = (ft_strlen(src));
	if (size <= dl)
		return (sl + size);
	dst += dl;
	size -= dl;
	while (size-- > 1 && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (dl + sl);
}

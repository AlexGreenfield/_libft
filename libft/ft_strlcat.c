/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:00:48 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/01 16:33:10 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Takes dst size, returns dst + src len, if dst size < dstlen returns size + sl
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = (ft_strlen(dst));
	src_len = (ft_strlen(src));
	if (size <= dst_len)
		return (src_len + size);
	dst += dst_len;
	size -= dst_len;
	while (size-- > 1 && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (dst_len + src_len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:00:48 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/01 19:38:50 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Takes dst size, returns dst + src len, if dst size < dstlen returns size + sl
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = (ft_strlen(dst)); // We determine the size of dst and src
	src_len = (ft_strlen(src));
	if (size <= dst_len) // If the given size of dst is less that the len of dest, there's not cat possible. Strlcat returns the size given by the user (it can't read past size bytes) + the src_len
		return (src_len + size);
	dst += dst_len; // If size > dst_len, strlcat can try to concatenate, so we move to the end of the string of dst, to the '\0'
	size -= dst_len; // We also subtract dst_len to acommodate for the rest of the function
	while (size-- > 1 && *src) // We loop through the rest of size, leaving one bit free for null terminating the string
		*dst++ = *src++;
	*dst = '\0'; // Always null terminate!!
	return (dst_len + src_len); // If size > dst_len, we return the string that we tried to concatenate
}

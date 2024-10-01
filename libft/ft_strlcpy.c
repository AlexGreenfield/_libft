/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:15:34 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/01 19:41:27 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Copies a const str into other string with size bits and \0 terminated
size_t	ft_strlcpy(char *dst, const char *src, size_t size) // Size is the number of bytes of src to be copied
{
	size_t	src_len;

	src_len = ft_strlen(src); // We calculate src size
	if (size == 0) // If size == 0, there's not any bytes to copy, but we return the length of the string we tried to create anyway
		return (src_len);
	while (*src && size-- > 1) // We loop through source until size - 1 for null terminator
		*dst++ = *src++;
	*dst = '\0'; // Always null terminate!!!
	return (src_len);
}

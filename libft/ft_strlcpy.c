/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:15:34 by acastrov          #+#    #+#             */
/*   Updated: 2024/09/19 21:36:13 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	sl;

	sl = ft_strlen(src);
	if (size == 0)
		return (sl);
	while (*src && size-- > 1)
		*dst++ = *src++;
	*dst = '\0';
	return (sl);
}

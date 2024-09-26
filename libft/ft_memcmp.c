/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:10:11 by acastrov          #+#    #+#             */
/*   Updated: 2024/09/25 20:21:56 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Compare memory areas
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n-- && *(unsigned char *)s1 == *(unsigned char *)s2)
	{
		s1++;
		s2++;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

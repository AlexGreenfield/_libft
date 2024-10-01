/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:10:11 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/01 18:33:28 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Compare memory areas and returns value difference
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_copy;
	unsigned char	*s2_copy;

	s1_copy = (unsigned char *)s1; // Cast to avoid conflicts
	s2_copy = (unsigned char *)s2;
	while (n--) // We loop through n bytes
	{
		if (*s1_copy != *s2_copy) // If we find a diference, we return the differences in ASCII values
			return (*s1_copy - *s2_copy);
		s1_copy++;
		s2_copy++;
	}
	return (0); // If theres no diference we return 0
}

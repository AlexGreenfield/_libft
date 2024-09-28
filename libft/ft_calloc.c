/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:31:39 by acastrov          #+#    #+#             */
/*   Updated: 2024/09/28 20:05:38 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Uses malloc and fills with 0, checks if arg exceeds size_t
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	s = size * nmemb;
	p = malloc(s);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, s);
	return (p);
}

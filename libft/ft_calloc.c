/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:31:39 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/02 21:31:20 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Create an string with malloc and fills with 0, checks if arg exceeds size_t
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*return_pointer;
	size_t	total_size;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	total_size = size * nmemb;
	return_pointer = malloc(total_size);
	if (return_pointer == NULL)
		return (NULL);
	ft_bzero(return_pointer, total_size);
	return (return_pointer);
}

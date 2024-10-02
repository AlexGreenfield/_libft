/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:31:39 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/02 21:35:48 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Create an string with malloc and fills with 0, checks if arg exceeds size_t
void	*ft_calloc(size_t nmemb, size_t size) // nmemb is the number of elements we want to allocate (4 chars, 2 ints...) and size is the type of data (1 for char, 4 for int...)
{
	void	*return_pointer; // pointer to return
	size_t	total_size; // total size of the resulting string

	total_size = size * nmemb;
	return_pointer = malloc(total_size); // We allocate size with malloc, NULL if it fails
	if (return_pointer == NULL)
		return (NULL);
	ft_bzero(return_pointer, total_size); // Call to bzero to fill the string with 0
	return (return_pointer);
}

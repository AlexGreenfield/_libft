/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:05:34 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/01 19:41:50 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Returns size of str via counting number of chars without \0
size_t	ft_strlen(const char *s)
{
	size_t	string_size;

	string_size = 0; // Basic iteration for the number of chars of a string
	while (s[string_size] != '\0')
		string_size++;
	return (string_size);
}

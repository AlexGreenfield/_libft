/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 20:43:36 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/01 19:48:28 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Locates last char in a string
char	*ft_strrchr(const char *s, int c)
{
	char	*new_string;

	new_string = (char *)s; // We take the initial pointer of s
	new_string += ft_strlen(s); // We move to the end of s
	while (new_string >= s) // We move from the end of s to the beginning of the string
	{
		if (*new_string == (char)c) // If there's a match, we return the pointer
			return (new_string);
		new_string--;
	}
	return (NULL);
}

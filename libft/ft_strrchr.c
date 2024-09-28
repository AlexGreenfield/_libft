/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 20:43:36 by acastrov          #+#    #+#             */
/*   Updated: 2024/09/28 21:09:07 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Locates last char in a string
char	*ft_strrchr(const char *s, int c)
{
	char	*new_string;

	new_string = (char *)s;
	new_string += ft_strlen(s);
	while (new_string >= s)
	{
		if (*new_string == (char)c)
			return (new_string);
		new_string--;
	}
	return (NULL);
}

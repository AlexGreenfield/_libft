/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:27:26 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/01 19:43:40 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Takes an ft as an argument and applies it in s string, making a new string
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*dest_string;
	unsigned int	dest_string_len;
	unsigned int	i;

	dest_string_len = (unsigned int)ft_strlen(s); // We determine dest string size
	i = 0;
	dest_string = malloc(dest_string_len + 1); // + 1 for null terminator, null if it fails
	if (!dest_string)
		return (NULL);
	while (i < dest_string_len) // Basic iteration of the position of the array
	{
		dest_string[i] = f(i, s[i]); // We apply f function in i position of the array
		i++;
	}
	dest_string[i] = '\0'; // Always null terminate!!!
	return (dest_string);
}

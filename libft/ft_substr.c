/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:54:34 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/01 20:03:50 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Creates substring of len bytes from a char, ads null so only needs strlen
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_string;
	size_t	sub_string_len;

	sub_string_len = ft_strlen(s); // We find the lenght of s
	if (start >= sub_string_len) // If the start position is greater than the lenght of s, start it's out of the string, we return nothing
		return (ft_strdup(""));
	if (len > sub_string_len - start) // We determine the rest of len bytes available after start. If len is greater, we adjust len accordingly
		len = sub_string_len - start;
	sub_string = malloc(len + 1); // Len + 1 fonr \0
	if (!sub_string)
		return (NULL);
	ft_strlcpy(sub_string, (s + start), len + 1); // We copy in sub_string from the pointer of s + start for len + 1 (\0) size
	return (sub_string);
}

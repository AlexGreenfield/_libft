/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:54:34 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/01 16:52:40 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Creates substring from a char, ads null so only needs strlen
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_string;
	size_t	sub_string_len;

	sub_string_len = ft_strlen(s);
	if (start >= sub_string_len)
		return (ft_strdup(""));
	if (len > sub_string_len - start)
		len = sub_string_len - start;
	sub_string = malloc(len + 1);
	if (!sub_string)
		return (NULL);
	ft_strlcpy(sub_string, (s + start), len + 1);
	return (sub_string);
}

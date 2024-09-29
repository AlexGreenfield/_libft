/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:51:51 by acastrov          #+#    #+#             */
/*   Updated: 2024/09/29 20:07:40 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Trims the beggining and end of a str if contains any of set chars
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s1b;
	char	*s1e;

	if (!s1 || !set)
		return (NULL);
	s1b = (char *)s1;
	s1e = (char *)s1 + ft_strlen(s1) - 1;
	while (*s1b && ft_strchr(set, *s1b))
		s1b++;
	while (s1e > s1b && ft_strchr(set, *s1e))
		s1e--;
	return (ft_substr(s1b, 0, s1e - s1b + 1));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:51:51 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/01 16:42:53 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Trims the beggining and end of a str if contains any of set chars
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s1_beginning;
	char	*s1_end;

	if (!s1 || !set)
		return (NULL);
	s1_beginning = (char *)s1;
	s1_end = (char *)s1 + ft_strlen(s1) - 1;
	while (*s1_beginning && ft_strchr(set, *s1_beginning))
		s1_beginning++;
	while (s1_end > s1_beginning && ft_strchr(set, *s1_end))
		s1_end--;
	return (ft_substr(s1_beginning, 0, s1_end - s1_beginning + 1));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:51:51 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/01 19:52:35 by acastrov         ###   ########.fr       */
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
	s1_beginning = (char *)s1; // We use two pointers, one for the beginning of the string...
	s1_end = (char *)s1 + ft_strlen(s1) - 1; // ... and other for the end of the string, not counting for \0
	while (*s1_beginning && ft_strchr(set, *s1_beginning)) // We use ft_strchr as a condition. The trick it's that we using srchr in reverse. Insted of finding an specific set char in s1 string, we check all set chars agaisnt one specific char of s1
		s1_beginning++;
	while (s1_end > s1_beginning && ft_strchr(set, *s1_end)) // Same logic, but moving in reverse
		s1_end--;
	return (ft_substr(s1_beginning, 0, s1_end - s1_beginning + 1)); // We subtract the difference bewteen the pointer of s1_beginning and s1_end to find the size for ft_substr ( + 1 for \0)
}

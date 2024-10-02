/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 20:17:02 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/02 16:58:24 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_substr_count(char const *s, char c);
static char		*ft_locate_next_c(char const *s, char c);
static char		**ft_fill(char const *s, char c, char **split, size_t subcount);
static char		**ft_free_split(char **split, size_t array_count);

// Splits one string into different substrings by a specific char
char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	subcount;

	if (!s)
		return (NULL);
	subcount = ft_substr_count(s, c); // Calculate the number of substrings
	split = malloc((subcount + 1) * sizeof(char *)); // Allocate memory for split array
	if (!split)
		return (NULL);
	split = ft_fill(s, c, split, subcount); // Fill the split array
	return (split);
}

// Static, counts the number of substrings in s separated by char c
static size_t	ft_substr_count(char const *s, char c)
{
	size_t	subcount;

	subcount = 0;
	while (*s)
	{
		while (*s == c) // Skip consecutive separators
			s++;
		if (*s) // If there's a non-separator, count it as a new substring
			subcount++;
		while (*s && *s != c) // Move to the next separator
			s++;
	}
	return (subcount);
}

// Static, fills the array, calls free if it fails
static char	**ft_fill(char const *s, char c, char **split, size_t subcount)
{
	char	*next_c;
	size_t	array_count;

	array_count = 0;
	while (*s && array_count < subcount)
	{
		while (*s == c) // Skip consecutive separators
			s++;
		if (!*s) // If end of string is reached, break
			break;
		if (*s != c && *s) // Locate next substring
		{
			next_c = ft_locate_next_c(s, c); // Find the next occurrence of the separator
			split[array_count] = ft_substr(s, 0, next_c - s); // Create the substring
			if (!split[array_count]) // Handle memory allocation failure
				return (ft_free_split(split, array_count));
			array_count++;
		}
		s = next_c; // Move to the next part of the string after the separator
	}
	split[array_count] = NULL; // Null-terminate the split array
	return (split);
}

// Static, locates the next occurrence of c or the end of the string
static char	*ft_locate_next_c(char const *s, char c)
{
	char	*c_founded;

	c_founded = ft_strchr(s, c); // Find the next occurrence of c
	if (!c_founded) // If c is not found, move to the end of the string
		c_founded = (char *)s + ft_strlen(s);
	return (c_founded);
}

// If there's an error, frees all allocated memory and returns NULL
static char	**ft_free_split(char **split, size_t array_count)
{
	size_t	split_position;

	split_position = 0;
	while (split_position < array_count) // Free all allocated substrings
	{
		free(split[split_position]);
		split_position++;
	}
	free(split); // Free the split array itself
	return (NULL);
}


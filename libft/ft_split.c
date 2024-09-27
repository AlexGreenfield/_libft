/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 20:17:02 by acastrov          #+#    #+#             */
/*   Updated: 2024/09/27 17:30:48 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_substr_count(char const *s, char c);
static char		*ft_locate_next_c(char const *s, char c);
static char		**ft_fill(char const *s, char c, char **split, size_t count);
static char		**ft_free_split(char **split, size_t count);

// Splits one string into different substring by an specific char
char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	count;

	if (!s)
		return (NULL);
	count = ft_substr_count(s, c);
	split = malloc ((count + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	split = ft_fill(s, c, split, count);
	return (split);
}

// Static, counts the number of substrings of s separated by char c
static size_t	ft_substr_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

// Static, fills arrays, calls free if it fails
static char	**ft_fill(char const *s, char c, char **split, size_t count)
{
	char	*next_c;
	char	**split_return;

	split_return = split;
	while (*s && count > 0)
	{
		while (*s == c)
			s++;
		if (*s != c && *s)
		{
			next_c = ft_locate_next_c(s, c);
			*split = ft_substr(s, 0, next_c - (char *)s);
			if (!*split)
				return (ft_free_split(split, count));
			split++;
			count--;
		}
		s = next_c;
	}
	*split = NULL;
	return (split_return);
}

// Static, locates the next iteration of c or end of string
static char	*ft_locate_next_c(char const *s, char c)
{
	char	*c_founded;

	c_founded = ft_strchr((char *)s, c);
	if (!c_founded)
		c_founded = (char *)s + ft_strlen(s);
	return (c_founded);
}

// If error, frees all and return NULL, may need changes
static char	**ft_free_split(char **split, size_t count)
{
	int	split_position;

	split_position = 0;
	while (split_position < count)
	{
		free(split[split_position]);
		split_position++;
	}
	free(split);
	return (NULL);
}

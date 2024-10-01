/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 20:17:02 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/01 18:55:43 by acastrov         ###   ########.fr       */
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
	count = ft_substr_count(s, c); // First, we calculate how many substring we are going to allocate
	split = malloc ((count + 1) * sizeof(char *)); // count + 1 for null, size of char pointer
	if (!split)
		return (NULL);
	split = ft_fill(s, c, split, count); // We start to fill all substrings
	return (split);
}

// Static, counts the number of substrings of s separated by char c
static size_t	ft_substr_count(char const *s, char c)
{
	size_t	count;

	count = 0; // A basic iterative counter
	while (*s)
	{
		while (*s == c) // If there's c separators together, me move throught them
			s++;
		if (*s) // If there's not a separator, we increase our substring count
			count++;
		while (*s && *s != c)
			s++; // We move through the next iteration of c
	}
	return (count);
}

// Static, fills arrays, calls free if it fails
static char	**ft_fill(char const *s, char c, char **split, size_t count)
{
	char	*next_c;
	char	**split_return;

	split_return = split; // A copy of the first position of the array to return, as we are going to move through pointers
	while (*s && count > 0) // While the split exist and theres array left
	{
		while (*s == c) // We move through consecutive separators
			s++;
		if (*s != c && *s) // If we find a non separator, we finded our substring and we can start to fill
		{
			next_c = ft_locate_next_c(s, c); // First, we allocate the next recurrence of c from the beginning of the substring
			*split = ft_substr(s, 0, next_c - (char *)s); // We fill the substring via substr. We calculate the size to allocate subctracting the difference between our actual position and the next iteration of c
			if (!*split)
				return (ft_free_split(split, count)); // If theres a error, we free all substring and the array, returning null
			split++; // We move to the next position of the array
			count--;
		}
		s = next_c; // We move to the next iteration of c and repeat the process
	}
	*split = NULL; // We null terminate the array
	return (split_return);
}

// Static, locates the next iteration of c or end of string
static char	*ft_locate_next_c(char const *s, char c)
{
	char	*c_founded;

	c_founded = ft_strchr((char *)s, c); // A call to strchr to fill the next iteration of c
	if (!c_founded) // If there's not any c left, we move to the end of the str
		c_founded = (char *)s + ft_strlen(s);
	return (c_founded);
}

// If error, frees all and return NULL, may need changes
static char	**ft_free_split(char **split, size_t count)
{
	size_t	split_position;

	split_position = 0; // If a substring is null, we cannot move through pointers as data position is lost, so we have to move throgh the array position
	while (split_position < count) // We started from the 0 position of the array through the newst array that we had created with substr(malloc)
	{
		free(split[split_position]);
		split_position++;
	}
	free(split); // After we freed all the substr, we free the array
	return (NULL);
}

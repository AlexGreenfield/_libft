/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:46:14 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/02 17:05:43 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_substr_count(char const *s, char c);
static char		*ft_locate_next_c(char const *s, char c);
static char		**ft_fill(char const *s, char c, char **split, size_t subcount);
static char		**ft_free_split(char **split, size_t array_count);

// Splits one string into different substring by an specific char
char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	subcount;

	if (!s)
		return (NULL);
	subcount = ft_substr_count(s, c);
	split = malloc ((subcount + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	split = ft_fill(s, c, split, subcount);
	return (split);
}

// Static, counts the number of substrings of s separated by char c
static size_t	ft_substr_count(char const *s, char c)
{
	size_t	subcount;

	subcount = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			subcount++;
		while (*s && *s != c)
			s++;
	}
	return (subcount);
}

// Static, fills arrays, calls free if it fails
static char	**ft_fill(char const *s, char c, char **split, size_t subcount)
{
	char	*next_c;
	size_t	array_count;

	array_count = 0;
	while (*s && array_count < subcount)
	{
		while (*s == c)
			s++;
		if (!*s)
			break ;
		if (*s != c && *s)
		{
			next_c = ft_locate_next_c(s, c);
			split[array_count] = ft_substr(s, 0, next_c - s);
			if (!split[array_count])
				return (ft_free_split(split, array_count));
			array_count++;
		}
		s = next_c;
	}
	split[array_count] = NULL;
	return (split);
}

// Static, locates the next iteration of c or end of string
static char	*ft_locate_next_c(char const *s, char c)
{
	char	*c_founded;

	c_founded = ft_strchr(s, c);
	if (!c_founded)
		c_founded = (char *)s + ft_strlen(s);
	return (c_founded);
}

// If error, frees all and return NULL, may need changes
static char	**ft_free_split(char **split, size_t array_count)
{
	size_t	split_position;

	split_position = 0;
	while (split_position < array_count)
	{
		free(split[split_position]);
		split_position++;
	}
	free(split);
	return (NULL);
}
/*#include <stdio.h>
#include "libft.h"

int main(void)
{
    // Test case: string with multiple separators at the end

    char **result;
    int i;

    result = ft_split("^^^1^^2a,^^^^3^^^^--h^^^^", '^');

    // Print the result

    for (i = 0; result[i] != NULL; i++)
    {
        printf("Substring %d: \"%s\"\n", i + 1, result[i]);
        free(result[i]); // Free each allocated substring after use
    }
    free(result); // Free the overall result array

    return 0;
}
*/

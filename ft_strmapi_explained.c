/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi_explained.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:27:26 by acastrov          #+#    #+#             */
/*   Updated: 2024/09/30 18:09:25 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// Takes an ft as an argument and applies it in s string, making a new string

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
// We take a pointer to a ft as an argument, this ft has to recieve the same arguments as defined in ft_mapi.c (unsigned int and char)
{
	char	*dest_string;
	unsigned int	len;
	unsigned int	i;

	len = (unsigned int)strlen(s); // We find the size of s as per usual
	i = 0; // An iterative int to navigate the array
	dest_string = malloc(len + 1); // Malloc with '\0' terminator for the result
	if (!dest_string)
		return (NULL);
	while (i < len)
	{
		dest_string[i] = f(i, s[i]); // We apply f (ft taked as an argument) to every char in s and we allocate in a new string
		i++;
	}
	dest_string[i] = '\0'; // When using malloc, always null terminate the new string!!!!
	return (dest_string);
}

char upper_par(unsigned int i, char c)
{
	if (i % 2 == 0)
		return toupper(c);
	return c;
}
char upper_impar(unsigned int i, char c)
{
	if (!(i % 2 == 0))
		return toupper(c);
	return c;
}
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	// First, we use upper_par
	char *str1 = "hello, world!";
	char *result1 = ft_strmapi(str1, upper_par);

	if (result1)
	{
		printf("Original string: %s\n", str1);
		printf("Modified string: %s\n", result1);
		free(result1);
	}
	else
	{
		printf("ft_strmapi returned NULL\n");
	}

	// Then, we use upper_impar using the same ft_strmapi
	char *str2 = "hello, world!";
	char *result2 = ft_strmapi(str2, upper_impar);

	if (result2)
	{
		printf("Original string: %s\n", str2);
		printf("Modified string: %s\n", result2);
		free(result2);
	}
	else
	{
		printf("ft_strmapi returned NULL\n");
	}


	return 0;
}

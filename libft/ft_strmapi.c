/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:27:26 by acastrov          #+#    #+#             */
/*   Updated: 2024/09/30 17:58:56 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Takes an ft as an argument and applies it in s string, making a new string
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*dest_string;
	unsigned int	len;
	unsigned int	i;

	len = (unsigned int)ft_strlen(s);
	i = 0;
	dest_string = malloc(len + 1);
	if (!dest_string)
		return (NULL);
	while (i < len)
	{
		dest_string[i] = f(i, s[i]);
		i++;
	}
	dest_string[i] = '\0';
	return (dest_string);
}
/*
char my_func(unsigned int i, char c)
{
	if (i % 2 == 0)
		return ft_toupper(c);
	return c;
}
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char *str = "hello, world!";
	char *result = ft_strmapi(str, my_func);

	if (result)
	{
		printf("Original string: %s\n", str);
		printf("Modified string: %s\n", result);
		free(result);
	}
	else
	{
		printf("ft_strmapi returned NULL\n");
	}

	return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:53:50 by acastrov          #+#    #+#             */
/*   Updated: 2024/09/29 21:34:49 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_n_len(int n);
static char		*ft_putnbr_in_string(int n, size_t n_len);

// Takes a int, operates using atoi and putnbr logic and generates an string
char	*ft_itoa(int n)
{
	char	*dest_string;
	size_t	string_size;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	string_size = ft_n_len(n);
	dest_string = ft_putnbr_in_string(n, string_size);
	return (dest_string);
}

// Static, calculates size of n using putnbr logic
static size_t	ft_n_len(int n)
{
	size_t	n_len;

	n_len = 0;
	if (n < 0)
	{
		n_len++;
		n = -n;
	}
	while (n >= 10)
	{
		n = (n / 10);
		n_len++;
	}
	n_len++;
	return (n_len);
}

// Static, putnbr logic to pass from int to *char
static	char	*ft_putnbr_in_string(int n, size_t n_len)
{
	char	*dest_string;

	dest_string = malloc(n_len + 1);
	if (!dest_string)
		return (NULL);
	if (n < 0)
	{
		dest_string[0] = '-';
		n = -n;
	}
	dest_string[n_len--] = '\0';
	while (n >= 10)
	{
		dest_string[n_len--] = (n % 10) + '0';
		n = n / 10;
	}
	dest_string[n_len] = n + '0';
	return (dest_string);
}

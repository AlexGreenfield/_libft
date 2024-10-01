/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:53:50 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/01 18:29:48 by acastrov         ###   ########.fr       */
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

	if (n == -2147483648) // I hardcoded the INT_MIN due to negative to positive conversion later on
		return (ft_strdup("-2147483648"));
	string_size = ft_n_len(n); // We calculate the size of the string by dividing by 10
	dest_string = ft_putnbr_in_string(n, string_size); // Subft to fill the string
	return (dest_string);
}

// Static, calculates size of n using putnbr logic
static size_t	ft_n_len(int n)
{
	size_t	n_len;

	n_len = 0;
	if (n < 0) // If negative number, we add one more block of memory
	{
		n_len++;
		n = -n;
	}
	while (n >= 10) // We divide by 10 to find the total len
	{
		n = (n / 10);
		n_len++;
	}
	n_len++; // Always we count for n > 10, even if it's 0
	return (n_len);
}

// Static, putnbr logic to pass from int to *char
static	char	*ft_putnbr_in_string(int n, size_t n_len)
{
	char	*dest_string;

	dest_string = malloc(n_len + 1); // We make space for total len and /0
	if (!dest_string)
		return (NULL);
	if (n < 0) // We add negative sign and convert to positive
	{
		dest_string[0] = '-';
		n = -n;
	}
	dest_string[n_len--] = '\0'; // As the og putnbr, we fill the string in reverse, wich means that we start with null terminating the string
	while (n >= 10)
	{
		dest_string[n_len--] = (n % 10) + '0'; // We add or int to '0' (48 ASCII code) for int to char conversion
		n = n / 10;
	}
	dest_string[n_len] = n + '0'; // Last int converted
	return (dest_string);
}

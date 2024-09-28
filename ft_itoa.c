/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:53:50 by acastrov          #+#    #+#             */
/*   Updated: 2024/09/28 18:43:12 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	n_len(int *n);
static char		*ft_putnbr_in_string(int n);

// Takes a int, operates using atoi and putnbr logic and generates an string
char	*ft_itoa(int n)
{
	char	*dest_string;
	size_t	string_size;

	if (n > INT_MAX)
		return (NULL);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	string_size = ft_n_len(n);
	*string = ft_putnbr_in_string();


	return (dest_string);
}
// Static, calculates size of n using putnbr logic

static size_t	n_len(int *n)
{
	size_t	n_len;

	size_t = 0;
	if (n < 0)
	{
		n = -n;
		n_len++;
	}
	if (n >= 10)
		size_t = ft_putnbr(n / 10);
	n_len++;
	return (size_t);
}
// Static, operates signs of a in using atoi logic

static int	ft_atoi_int(int n)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*n == ' ' || (*nptr >= 9 && *nptr <= 13))
		n++;
	if (*n == '-')
	{
		sign = -1;
		n++;
	}
	else if (*n == '+')
		n++;
	while (*n >= '0' && *nptr <= '9')
	{
		result = (result * 10) + (*n - '0');
		n++;
	}
	return (result * sign);

}



// Static, putnbr logic to pass from int to *char
static	char	*ft_putnbr_in_string(int n, size_t n_len)
{
	int	d;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (n >= 10)
	{
		ft_putnbr(nb / 10);
	}
	d = (n % 10) + '0';
	write (1, &d, 1);
}

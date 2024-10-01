/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:18:05 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/01 18:42:06 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Call to write with an int (putnbr logic for conversion) and variable fd
void	ft_putnbr_fd(int n, int fd) // putnbr logic (recursive) for writing an int. As othere, when dealing with numbers we have to write in reverse using modulus of 10
{
	int	d;

	if (n == -2147483648) // hardcoding int_min
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0) // // Handling the negative sign and converting the number to positive
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10) // Recursive loop
	{
		ft_putnbr_fd(n / 10, fd);
	}
	d = (n % 10) + '0'; // We print the last digit
	write (fd, &d, 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:41:06 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/01 18:38:49 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Call to write with variable file descriptor
void	ft_putchar_fd(char c, int fd) // fd is the file descriptor for write (0 input, 1 output, 2 error)
{
	write(fd, &c, 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:25:10 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/01 16:25:19 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Call to write for an entire string, variable file descriptor
void	ft_putstr_fd(char *s, int fd)
{
	if (*s)
		write(fd, s, ft_strlen(s));
}

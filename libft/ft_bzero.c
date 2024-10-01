/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:13:21 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/01 16:02:03 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Wipes memory direction and fills with 0 via calling memset
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:24:18 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/01 18:59:19 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Takes a pointer to a ft as an argument and applies it for every char of an s
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	len;
	unsigned int	i;

	len = (unsigned int)ft_strlen(s); // We calculate len to loop later on
	i = 0;
	while (i < len)
	{
		f(i, &s[i]); // We execute f function (taken as argument) in i position of the array
		i++;
	}
}

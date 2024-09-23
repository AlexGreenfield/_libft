/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 20:43:36 by acastrov          #+#    #+#             */
/*   Updated: 2024/09/23 20:44:01 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*st;

	if (s == NULL)
		return (NULL);
	st = (char *)s;
	st += ft_strlen(s);
	while (st >= s)
	{
		if (*st == (char)c)
			return (st);
		st--;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:41:52 by acastrov          #+#    #+#             */
/*   Updated: 2024/09/23 18:08:59 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strdup(const char *s)
{
	unsigned char	*p;
	size_t			sl;

	if (s == NULL)
		return (NULL);
	sl = ft_strlen(s) + 1;
	p = malloc(sl);
	if (p == NULL)
		return (NULL);
	ft_strlcpy(p, s, sl);
	return (p);
}

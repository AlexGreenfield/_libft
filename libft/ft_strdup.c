/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:41:52 by acastrov          #+#    #+#             */
/*   Updated: 2024/09/29 19:54:31 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copies a const string on a new string with malloc
char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	sl;

	sl = ft_strlen(s) + 1;
	p = malloc(sl);
	if (p == NULL)
		return (NULL);
	ft_strlcpy(p, s, sl);
	return (p);
}

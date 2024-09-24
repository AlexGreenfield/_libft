/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:16:07 by acastrov          #+#    #+#             */
/*   Updated: 2024/09/24 20:10:57 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Checks, calculates size, allocates memory and cat via strlcpy, memcpy '\0'
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ts;
	size_t	tl;
	size_t	sl1;
	size_t	sl2;

	if (!s1 || !s2)
		return (NULL);
	sl1 = ft_strlen(s1);
	sl2 = ft_strlen(s2);
	tl = sl1 + sl2 + 1;
	ts = malloc(tl);
	if (!ts)
		return (NULL);
	ft_strlcpy(ts, s1, sl1 + 1);
	ft_strlcpy((ts + sl1), s2, sl2 + 1);
	return (ts);
}

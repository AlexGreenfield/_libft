/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:16:07 by acastrov          #+#    #+#             */
/*   Updated: 2024/09/30 20:15:51 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Calculates size, allocates memory and cat 2 strings via strlcpy
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ts;
	size_t	tl;

	if (!s1 || !s2)
		return (NULL);
	tl = ft_strlen(s1) + ft_strlen(s2) + 1;
	ts = malloc(tl);
	if (!ts)
		return (NULL);
	ft_strlcpy(ts, s1, ft_strlen(s1) + 1);
	ft_strlcat(ts, s2, tl);
	return (ts);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:54:34 by acastrov          #+#    #+#             */
/*   Updated: 2024/09/29 19:12:32 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Creates substring from a char, ads null so only needs strlen
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ss;
	size_t	sl;

	sl = ft_strlen(s);
	if (start >= sl)
		return (ft_strdup(""));
	if (len > sl - start)
		len = sl - start;
	ss = malloc(len + 1);
	if (!ss)
		return (NULL);
	ft_strlcpy(ss, (s + start), len + 1);
	return (ss);
}

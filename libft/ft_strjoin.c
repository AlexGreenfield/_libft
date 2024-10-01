/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:16:07 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/01 16:29:18 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Calculates size, allocates memory and joins 2 strings via strlcpy and strlcat
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join_string;
	size_t	len_join_string;

	if (!s1 || !s2)
		return (NULL);
	len_join_string = ft_strlen(s1) + ft_strlen(s2) + 1;
	join_string = malloc(len_join_string);
	if (!join_string)
		return (NULL);
	ft_strlcpy(join_string, s1, ft_strlen(s1) + 1);
	ft_strlcat(join_string, s2, len_join_string);
	return (join_string);
}

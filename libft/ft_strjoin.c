/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:16:07 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/01 19:00:12 by acastrov         ###   ########.fr       */
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
	len_join_string = ft_strlen(s1) + ft_strlen(s2) + 1; // We determine the size of the result string by adding s1 + s2 + space for null
	join_string = malloc(len_join_string); // We allocate size
	if (!join_string)
		return (NULL);
	ft_strlcpy(join_string, s1, ft_strlen(s1) + 1); // We fill the first half of the str with copy
	ft_strlcat(join_string, s2, len_join_string); // We fill the rest with strlcat
	return (join_string);
}

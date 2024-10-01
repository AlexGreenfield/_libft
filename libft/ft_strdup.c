/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:41:52 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/01 16:26:44 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Copies a const string on a new string with malloc
char	*ft_strdup(const char *s)
{
	char	*new_string;
	size_t	sl;

	sl = ft_strlen(s) + 1;
	new_string = malloc(sl);
	if (new_string == NULL)
		return (NULL);
	ft_strlcpy(new_string, s, sl);
	return (new_string);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_explicado.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:00:48 by acastrov          #+#    #+#             */
/*   Updated: 2024/09/20 16:21:44 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>


size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dl;
	size_t	sl;

	dl = (ft_strlen(dst)); // Calculamos lo que se encuentra dentro de dst ahora
	sl = (ft_strlen(src)); // Calculamos src

	if (size <= dl) // Si nuestro buffer es igual o menor que dst, no hay cat posible
		return (sl + size); // Devuelve lo que ha intentado crear, que al ser mayor que size sabemos que no ha podido crear
	dst += dl; // Avanzamos al final de dst
	size -= dl; // Nos quedamos con lo que queda de size despues de restar dest
	while (size-- > 1 && *src) // concatenamos hasta - 1 para dejar espacio para el null
		*dst++ = *src++;
	*dst = '\0'; // Null terminated pls!!!!
	return (dl + sl); // Devolvemos la cadena que ha intentado crear, si es igual a size,concatenacion perfecta, si es menos, es parcial pero valida.
}

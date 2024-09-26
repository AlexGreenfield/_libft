/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 20:17:02 by acastrov          #+#    #+#             */
/*   Updated: 2024/09/26 16:37:30 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Static, counts the number of substrings of s separatedd by char c
static size_t	ft_substrcount(char const *s, char c)
{
	size_t	sc;

	sc = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			sc++;
		while (*s && *s != c)
			s++;
	}
	return (sc);
}

// Splits one string into different substring by an specific char
char	**ft_split(char const *s, char c)
{
	char	**split;
    char
    size_t  sc;

	if (!s || !c)
		return (NULL);
    sc = ft_substrcount(s, c) + 1;
	split = malloc(sc * sizeof(char *));
	if (!split)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c)
		{
            fc = ft_strchr(s, c);
            if (!fc)

			*split = ft_substr(s, 0, fc - s);
			split++;
		}
		s += fc - s;
	}
    *split = NULL;
	return (split);
}

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
    char **result;
    int i;

    // Test 1
    char *test1 = "Hello World from 42!";
    printf("Test 1: Splitting \"%s\" by space\n", test1);
    result = ft_split(test1, ' ');
    i = 0;
    while (result[i])
    {
        printf("result[%d]: %s\n", i, result[i]);
        free(result[i]);
        i++;
    }
    free(result);

    // Test 2
    char *test2 = ",,,,Hello,,World,,";
    printf("Test 2: Splitting \"%s\" by comma\n", test2);
    result = ft_split(test2, ',');
    i = 0;
    while (result[i])
    {
        printf("result[%d]: %s\n", i, result[i]);
        free(result[i]);
        i++;
    }
    free(result);

    // Test 3
    char *test3 = "NoDelimiterHere";
    printf("Test 3: Splitting \"%s\" by space\n", test3);
    result = ft_split(test3, ' ');
    i = 0;
    while (result[i])
    {
        printf("result[%d]: %s\n", i, result[i]);
        free(result[i]);
        i++;
    }
    free(result);

    // Test 4
    char *test4 = "";
    printf("Test 4: Splitting \"%s\" by any delimiter\n", test4);
    result = ft_split(test4, ' ');
    if (result[0] == NULL)
        printf("result: empty\n");
    free(result);

    return 0;
}

/* Primer creamos un array de char
	Para determinar ese array de char, primero debemos encontrar n numero de coincidencias de c
Una vez que hemos creado nuestro array de char, tenemos que rellenarlo con un trim de cada una de las coincidencias
	No nos vale nuestro trim normal? Apunta hasta el final del total de la string
		Si simplemente pudieramos hacerlo hasta n caracteres o hasta la siguiente coincidencia
			strchr + (strch + 1) para limitar mejor ese trim?
				Y repetimos el proceso en la direccion que devuelva strch + 1 etc.*/
/* Otra aproximacion
	Sacamos primero la cuenta de palabras que estan separadas por el limitador para hacer el array
		Despues vamos rellenando esos huecos con strdup*
		Free si falla*/

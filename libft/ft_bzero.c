/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:13:21 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/01 18:16:08 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Wipes memory direction and fills with 0 via calling memset
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
int main(void)
{
	// Example 1: Wiping an integer array
	int array[5] = {1, 2, 3, 4, 5};
	printf("Before ft_bzero:\n");
	for (int i = 0; i < 5; i++)
		printf("%d ", array[i]);
	printf("\n");

	ft_bzero(array, sizeof(array));

	printf("After ft_bzero:\n");
	for (int i = 0; i < 5; i++)
		printf("%d ", array[i]);
	printf("\n");

	// Example 2: Wiping a char array (string)
	char str[20] = "Hello, World!";
	printf("Before ft_bzero: %s\n", str);

	ft_bzero(str, 6);  // Wipe first 6 characters

	printf("After ft_bzero: %s\n", str);  // Should print ", World!"

	return 0;
}

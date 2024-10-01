/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:52:25 by acastrov          #+#    #+#             */
/*   Updated: 2024/10/01 18:13:42 by acastrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Converts a string to an integer.
// This function takes a pointer to a string (const char *nptr) as an argument,
// processes it to ignore leading whitespace and handles optional '+' or '-' signs, and returns the converted integer value.
int ft_atoi(const char *nptr) // 1st argument, a char that cannot be changed
{
    int symbol;  // Variable to manage the sign of the result (positive or negative)
    int result;  // Variable that will hold the final integer value to be returned

    symbol = 1;  // Initialize symbol as positive by default
    result = 0;  // Initialize result to 0

    // Skip over any leading whitespace characters.
    // This includes space (' '), horizontal tab (ASCII 9), and various newline characters (ASCII 10-13).
    while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
        nptr++;

    // Check for a negative sign.
    if (*nptr == '-')  // If the current character is a '-'
    {
        symbol = -1;  // Set symbol to -1 to indicate a negative number
        nptr++;       // Move to the next character
    }
    else if (*nptr == '+')  // Check for a positive sign
        nptr++;  // Move to the next character, no change to symbol

    // Convert the numerical characters to an integer.
    // This loop continues until a non-numeric character is encountered.
    while (*nptr >= '0' && *nptr <= '9') // Check if current character is a digit
    {
        result = (result * 10) + (*nptr - '0'); // Update result: shift previous value left by 1 decimal place and add the new digit
        nptr++;  // Move to the next character
    }

    // Return the final result, adjusting for the sign determined earlier.
    return (result * symbol);
}

#include <stdio.h>  // For printf

int main(void)
{
    // Test cases
    const char *test1 = "42";
    const char *test2 = "    -42";
    const char *test3 = "   +1234";
    const char *test4 = "0";
    const char *test5 = "999999";
    const char *test6 = "-2147483648";  // Edge case: smallest 32-bit integer
    const char *test7 = "2147483647";   // Edge case: largest 32-bit integer
    const char *test8 = "  123abc456";  // Invalid part after number

    // Printing results of ft_atoi
    printf("Test 1: '%s' -> %d\n", test1, ft_atoi(test1));
    printf("Test 2: '%s' -> %d\n", test2, ft_atoi(test2));
    printf("Test 3: '%s' -> %d\n", test3, ft_atoi(test3));
    printf("Test 4: '%s' -> %d\n", test4, ft_atoi(test4));
    printf("Test 5: '%s' -> %d\n", test5, ft_atoi(test5));
    printf("Test 6: '%s' -> %d\n", test6, ft_atoi(test6));
    printf("Test 7: '%s' -> %d\n", test7, ft_atoi(test7));
    printf("Test 8: '%s' -> %d\n", test8, ft_atoi(test8));

    return 0;
}

#include "libft.h"
#include <stdio.h>

int	main(void)
{
// Let's check some ft of your libft!!!!

// Let's start with strncmp
	char str1[] = "The cake is a pie";
	char str2[] = "The cake is a lie";
	printf("str1 es %s\n", str1);
	printf("str2 es %s\n", str2);
	printf("La diferencia es %d\n", ft_strncmp(str1, str2, ft_strlen(str1)));

// Ok, we are going to find that pointer with ft_strchr
	printf("El caracter que ha dado la diferencia es %s\n", ft_strchr(str1, 'p'));

// Let's change with memset;
	ft_memset(ft_strchr(str1, 'p'), 'l', 1);
	printf("str1 ahora es %s\n", str1);
	return (0);
}
// Let's joined these two with strljoin
	char *
	printf("Mi nueva string es %s\n", ft_strjoin(str1, str2));

// Let's gonna divided with strsplit, just to remember
	char **split = ft_split(str1)
	printf("Recuerda, %s\n %s\n, str")

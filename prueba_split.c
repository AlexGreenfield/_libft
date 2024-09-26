#include <stdio.h>

char    *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (c == *s)
            return ((char *)s);
        s++;
    }
    if (c == '\0')
        return ((char *)s);
    return (NULL);
}

size_t    ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t    sl;

    sl = strlen(src);
    if (size == 0)
        return (sl);
    while (*src && size-- > 1)
        *dst++ = *src++;
    *dst = '\0';
    return (sl);
}
char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *ss;
    size_t    sl;

    if (len == 0 || !s)
        return (NULL);
    sl = strlen(s);
    if (start >= sl)
        return (strdup(""));
    if (len > sl - start)
        len = sl - start;
    ss = malloc(len + 1);
    if (!ss)
        return (NULL);
    ft_strlcpy(ss, (s + start), len + 1);
    return (ss);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *s1b;
    char    *s1e;

    if (!s1 || !set)
        return (NULL);
    s1b = (char *)s1;
    s1e = (char *)s1 + strlen(s1) - 1;
    while (*s1b && ft_strchr(set, *s1b))
        s1b++;
    while (s1e > s1b && ft_strchr(set, *s1e))
        s1e--;
    return (ft_substr(s1b, 0, s1e - s1b));
}

char    **ft_split(char const *s, char c)
{
    char    **split;
    const char    *string;
    size_t    sl;

    if (!s || !c)
        return (NULL);
    sl = strlen(s);
    string = strdup(s);
    while (sl--)
    {
        if(*s == c)
            *split = ft_strtrim(string, (char const *)c);
        s++;
        split++;
        sl--;
    }
    return (split);
}

int    main(void)
{

    char **arrays = ft_split("C1, C2, C3, C4", 'C');
    int    arrayn = 4;
    while(arrayn)
    {
        printf("My string es %s/n", arrays[arrayn]);
        arrayn--;
    }
    return (0);
}

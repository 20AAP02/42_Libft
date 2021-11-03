#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char *ptr;

    i = 0;
    while (s[i])
        i++;
    if ((i - start) >= len)
        ptr = malloc(len + 1);
    else
        ptr = malloc(i - start + 1);
    if (!ptr)
        return (NULL);
    i = 0;
    while (s[start] && i < len)
        ptr[i++] = s[start++];
    ptr[i] = 0;
    return (ptr);
}

int main()
{
    char const a[] = "ola eu sou o antonio";
    printf("%s", ft_substr(a, 13, 9));
}
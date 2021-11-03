#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        if (*(char *)(s + i) == c)
            return ((char *)(s + i));
        i++;
    }
    return (NULL);
}

/*int main()
{
    const char c[] = "antniio";
    printf("%s", ft_memchr(c, 'o', 6));
}*/
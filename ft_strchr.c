#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            return ((char *)(s + i));
        i++;
    }
    if (c == 0)
        return ((char *)(s + i));
    return (NULL);
}

/*int main()
{
    const char c[] = "ol";
    printf("%s", ft_strchr(c, 'a'));
}*/
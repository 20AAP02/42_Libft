#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    char *ptr;

    ptr = NULL;
    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            ptr = (char *)(s + i);
        i++;
    }
    return (ptr);
}

/*int main()
{
    const char *c = "ntni";
    printf("%s", ft_strrchr(c, 'o'));
}*/
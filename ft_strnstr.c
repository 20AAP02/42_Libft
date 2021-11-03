#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;
    size_t i2;

    if (*needle == 0 || needle == NULL)
        return ((char *)haystack);

    i = 0;
    while (haystack[i] && i < len)
    {
        j = 0;
        i2 = i;
        while (needle[j] == haystack[i2] && i2 < len)
        {
            if (needle[j + 1] == 0)
                return ((char *)&haystack[i]);
            j++;
            i2++;
        }
        i++;
    }
    return (NULL);
}

/*int main()
{
    const char haystack[] = "ola eu sosou o antonio";
    const char needle[] = "sou";
    printf("%s", ft_strnstr(haystack, needle, 20));
    return 0;
}*/
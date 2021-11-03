#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *mod_s;
    unsigned int i;

    i = 0;
    while (s[i])
        i++;
    mod_s = malloc(i + 1);
    if (!mod_s)
        return (NULL);
    i = 0;
    while (s[i])
    {
        mod_s[i] = f(i, s[i]);
        i++;
    }
    mod_s[i] = 0;
    return (mod_s);
}

char func(unsigned int i, char a)
{
    a = i + 48;
    return a;
}

int main()
{
    char const *a = "1234";
    printf("%s", ft_strmapi(a, func));
}
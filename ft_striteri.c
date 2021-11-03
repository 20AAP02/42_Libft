#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    int i;

    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}

void func(unsigned int i, char *a)
{
    if (*a == ' ')
        *a = i + 48;
}

int main()
{
    char a[] = "ola eu sou o antonio";
    ft_striteri(a, func);
    printf("%s", a);
}

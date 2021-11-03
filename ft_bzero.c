#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    unsigned int i = 0;
    char *ptr;

    ptr = s;
    while (i < n)
    {
        ptr[i] = 0;
        i++;
    }
}

/*int main()
{
    char a[] = "hello";
    printf("%s", a);
    ft_bzero(a, 1);
    printf("%s", a);
    return 0;
}*/
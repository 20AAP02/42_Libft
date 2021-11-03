#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    size_t index = 0;
    char *ptr;

    ptr = b;

    while (index < len)
    {
        ptr[index] = c;
        index++;
    }

    return ptr;
}

/*int main()
{
    char a[] = "hello";
    char b = '2';
    printf("%s", ft_memset(a, b, 3));
    return 0;
}*/
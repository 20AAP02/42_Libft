#include "libft.h"

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return 1;
    return 0;
}

/*int main()
{
    char c = 0x80;
    printf("%i", ft_isascii(c));
    return 0;
}*/
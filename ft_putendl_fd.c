#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    while (*s)
        write(fd, s++, 1);
    write(fd, "\n", 1);
}

int main()
{
    ft_putendl_fd("hello world", 1);
    ft_putendl_fd("hello world", 1);
}
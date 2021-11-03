#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    long long i;

    if (n == -2147483648)
        write(fd, "-2147483648", 11);
    if (n < 0 && n != -2147483648)
    {
        write(fd, "-", 1);
        n *= -1;
    }
    i = n;
    if (n <= 9 && n != -2147483648)
    {
        n += 48;
        write(fd, &n, 1);
    }
    if (i > 9)
    {
        n = (i % 10) + 48;
        i /= 10;
        ft_putnbr_fd(i, fd);
        write(fd, &n, 1);
    }
}

int main()
{
    int n = 0;
    ft_putnbr_fd(n, 1);
}
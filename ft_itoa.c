#include "libft.h"

int number_of_digits(long long nb)
{
    int i;

    i = 1;
    if (nb < 0)
    {
        i++;
        nb *= -1;
    }
    while (nb > 9)
    {
        nb /= 10;
        i++;
    }
    return (i);
}

void pass_int_to_str(long long *nb, char *str, int *i)
{
    while (*nb > 0)
    {
        str[*i] = (*nb % 10) + 48;
        *nb /= 10;
        *i -= 1;
    }
}

char *ft_itoa(int n)
{
    char *str;
    long long nb;
    int i;

    nb = n;
    i = number_of_digits(nb);
    if (!(str = malloc(i + 1)))
        return (NULL);
    str[i--] = 0;
    if (nb < 0)
    {
        nb *= -1;
        str[0] = '-';
    }
    if (nb == 0)
    {
        str[0] = '0';
        return (str);
    }
    pass_int_to_str(&nb, str, &i);
    return (str);
}

int main()
{
    int i = -2147483648;
    printf("%s", ft_itoa(i));
}
#include "libft.h"

int memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;

    i = 0;
    while (((*(char *)(s1 + i)) || (*(char *)(s2 + i))) && (i < n))
    {
        if ((*(char *)(s1 + i)) < (*(char *)(s2 + i)))
        {
            return (-1);
        }
        else if ((*(char *)(s1 + i)) > (*(char *)(s2 + i)))
        {
            return (1);
        }
        i++;
    }
    return (0);
}

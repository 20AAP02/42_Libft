#include "libft.h"

int toupper(int c)
{
    if (c > 96 && c < 123)
        return (c - 32);
    else
        return (c);
}

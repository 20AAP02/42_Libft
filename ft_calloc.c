#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    size_t i;
    void *arr;

    if ((count || size) == 0)
        return (NULL);
    arr = malloc(size * count);
    i = 0;
    while (i < (count * size))
    {
        *(char *)(arr + i) = 0;
        i++;
    }
    return (arr);
}

/*int main()
{
    int *arr;
    arr = ft_calloc(5, sizeof(int));
    int i = 0;
    while (i < 5)
    {
        arr[i] = 1889999;
        printf("%i\n", arr[i]);
        i++;
    }
    free(arr);
}*/
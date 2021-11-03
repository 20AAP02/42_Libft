#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char *s1_trimed;
    int i;
    int j;
    int k;
    i = 0;
    while (s1[i] == set[i])
        i++;
    j = 0;
    while (s1[j])
        j++;
    k = 0;
    while (set[k])
        k++;
    while (s1[j - 1] == set[k-- - 1])
        j--;
    s1_trimed = malloc(j - i + 1);
    k = 0;
    while (i < j)
        s1_trimed[k++] = s1[i++];
    s1_trimed[k] = 0;
    return (s1_trimed);
}

int main()
{
    char a[] = "1245ola1245";
    printf("%s", ft_strtrim(a, "1245"));
}
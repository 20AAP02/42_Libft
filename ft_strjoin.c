#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *new_str;
	int i;
	int j;

	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (s2[j])
		j++;
	new_str = malloc(i + j + 1);
	i = 0;
	while (*s1)
		new_str[i++] = *s1++;
	while (*s2)
		new_str[i++] = *s2++;
	new_str[i] = 0;
	return (new_str);
}

int main()
{
	char const a[] = "42 ";
	char const b[] = "Lisboa";
	printf("%s", ft_strjoin(a, b));
}
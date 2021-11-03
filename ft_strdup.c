#include "libft.h"

char *ft_strdup(const char *s1)
{
	int s1_lenght;
	char *str;
	int i;

	s1_lenght = 0;
	while (s1[s1_lenght])
		s1_lenght++;
	str = malloc(s1_lenght + 1);
	if (!str)
		return (str);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int main()
{
	const char str[] = "aaa";
	printf("%s\n", ft_strdup(str));
}*/
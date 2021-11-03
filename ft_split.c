#include "libft.h"

int word_count(char const *s, char c)
{
	int i;
	int word_count;

	i = 0;
	word_count = 0;
	while (s[i])
	{
		if (s[i] != c)
			word_count++;
		while (s[i] != c && s[i])
			i++;
		i++;
	}
	return (word_count);
}

void copy_word_to_str(char *str, char const *s, int *j, int *i)
{
	int k;

	k = 0;
	while (*j < *i)
	{
		str[k++] = s[*j];
		*j += 1;
	}
	str[k] = 0;
}

char *malloc_str(char const *s, char c, int *j, int *i)
{
	char *str;

	*i -= 1;
	*j = *i;
	while (s[*i] != c && s[*i])
		*i += 1;
	str = malloc(*i - *j + 1);
	return (str);
}

char **ft_split(char const *s, char c)
{
	char **new_strs;
	char *str;
	int i;
	int j;
	int l;

	new_strs = malloc(word_count(s, c) + 1);
	if (!new_strs)
		return (NULL);
	i = 0;
	l = 0;
	while (s[i])
		if (s[i++] != c)
		{
			str = malloc_str(s, c, &j, &i);
			if (!str)
				return (NULL);
			copy_word_to_str(str, s, &j, &i);
			new_strs[l++] = str;
		}
	new_strs[l] = NULL;
	return (new_strs);
}

int main()
{
	char const *a = "ola-eu--sou-o-antonio";
	char **b = ft_split(a, '-');
	int i = 0;
	while (b[i])
	{
		printf("%s\n", b[i]);
		i++;
	}
	free(b);
}
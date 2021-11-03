#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	while (dst[i])
		i++;
	j = 0;
	if (size < i)
	{
		while (src[j])
			j++;
		return (size + j);
	}
	while (i < (size - 1) && src[j])
		dst[i++] = src[j++];
	dst[i] = 0;
	while (src[j++])
		i++;
	return (i);
}

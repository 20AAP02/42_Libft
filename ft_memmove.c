#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst > src)
	{
		while (--len > 0)
			*(char *)(dst + len) = *(char *)(src + len);
		return (dst);
	}
	while (++i < len)
		*(char *)(dst + i) = *(char *)(src + i);
	return (dst);
}

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	while (size--)
	{
		*(d + size) = *(s + size);
	}
	return (void*)(dest);
}

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	while(size--)
	{
		*d++ = *s++;
	}
	return (void *)(d);
}

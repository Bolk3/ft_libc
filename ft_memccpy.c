#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int ch, size_t size)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	while (size-- && *s != ch)
	{
		*d++ = *s++;
	}
	return (void *)(d);
}

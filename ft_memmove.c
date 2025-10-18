#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t size)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = destination;
	s = source;
	while (size--)
	{
		*(d + size) = *(s + size);
	}
	return (destination);
}

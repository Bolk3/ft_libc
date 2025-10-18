#include "libft.h"

void	*ft_memcpy(void *destination, void const *source, size_t size)
{
	unsigned int		*d;
	const unsigned char *s;

	d = destination;
	s = source;
	while(size--)
		*d++ = *s++;
	return (destination);
}

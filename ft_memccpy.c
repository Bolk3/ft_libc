#include "libft.h"

void	*ft_memccpy(void *destination, void const *source, int ch, size_t maxSize)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = destination;
	s = source;
	while (maxSize--)
	{
		if (*s == ch) {
			return (destination);
		}
		*d++ = *s++;
	}
	return (destination);
}

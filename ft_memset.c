#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	unsigned char	*p;

	p = pointer;
	while(count--)
	{
		*p++ = (unsigned char)value;
	}
	return (void *)(p);
}

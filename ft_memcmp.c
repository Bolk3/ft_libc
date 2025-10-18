#include "libft.h"

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	
	p1 = (const unsigned char *)pointer1;
	p2 = (const unsigned char *)pointer2;
	while (size--)
	{
		if (*p1++ != *p2++)
			return (*p1 - *p2);
	}
	return (0);
}

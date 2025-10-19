#include "libft.h"

void	*ft_memchr(const void *memBlock, int searchedChar, size_t size)
{
	const unsigned char	*m;

	m = memBlock;
	while (size--)
	{
		if (*m == (unsigned char)searchedChar)
			return (void *)(m);
		m++;
	}
	return (NULL);
}

#include "libft.h"

void	*ft_memchr(void const *memoryBlock, int searchedChar, size_t size)
{
	const unsigned char	*m;
	size_t				i;

	i = 0;
	m = (const unsigned char *)memoryBlock;
	while (i < size)
	{
		if (*(m + i) == searchedChar)
			return (void *)(m + i);
		i++;
	}
	return (NULL);
}

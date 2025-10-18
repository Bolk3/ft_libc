#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	int		*result;
	size_t	i;

	i = 0;
	result = pointer;
	while (i < count)
	{
		*(result+ i) = value;
		i++;
	}
	return ((void *)result);
}

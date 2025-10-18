#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	char	*result;

	i = 0;
	if (!(result = malloc(size)))
		return (NULL);
	while (i < size)
	{
		*(result + i) = 0;
		i++;
	}
	return ((void *)result);
}

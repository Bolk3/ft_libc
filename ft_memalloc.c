#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*result;

	result = (void *)malloc(size);
	ft_memset(result, 0, size);
	return (result);
}

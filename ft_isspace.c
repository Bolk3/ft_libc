#include "libft.h"

int	ft_isspace(int character)
{
	return ((character >= 9 && character <= 13) || character == 32);
}

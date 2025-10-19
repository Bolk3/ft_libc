#include "libft.h"

int	ft_iscntrl(int character)
{
	return (character <= 31 || character == 127);
}

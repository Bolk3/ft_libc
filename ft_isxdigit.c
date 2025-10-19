#include "libft.h"

int	ft_isxdigit(int character)
{
	return (ft_isdigit(character)||
	(character >= 65 && character <= 70)||
		 (character >= 97 && character <= 102));
}

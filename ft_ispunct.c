#include "libft.h"

int	ft_ispunct(int character)
{
	return (!ft_isalnum(character) && (character >= 33 && character <= 126));
}

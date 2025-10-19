#include "libft.h"

int	ft_tolower(int character)
{
	if (ft_isupper(character))
		return (character + 32);
	return (character);
}

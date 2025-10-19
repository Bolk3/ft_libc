#include "libft.h"

int	ft_isalpha(int character)
{
	return (ft_islower(character) || ft_isupper(character));
}

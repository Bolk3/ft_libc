#include "libft.h"

int ft_ispunct(int c) { return (ft_isgraph(c) && !ft_isalpha(c)); }

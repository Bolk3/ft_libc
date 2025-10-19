#include "libft.h"

void	ft_putendl_fd(const char *s, int fd)
{
	while (*s)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}

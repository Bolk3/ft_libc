#define LIBFT_H
#ifdef LIBFT_H

#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_isupper(int character);
int	ft_islower(int character);
int	ft_isalpha(int character);
int	ft_isdigit(int character);
int	ft_isalnum(int character);
int	ft_ispunct(int character);
int	ft_isgraph(int character);
int	ft_isprint(int character);
int	ft_iscntrl(int character);
int	ft_isblank(int character);
int	ft_isspace(int character);
int	ft_isxdigit(int character);

void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);

int	ft_tolower(int character);
int	ft_toupper(int character);

void	*ft_memset(void *pointer, int value, size_t count);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src ,size_t size);
void	*ft_memccpy(void *dest, const void *src, int ch, size_t size);
void	*ft_memmove(void *dest, const void *src, size_t size);
void	*ft_memchr(const void *memBlock, int searchedChar, size_t size);
int		ft_memcmp(const void *pointer1, const void *pointer2, size_t size);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);

#endif // LIBFT_H

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
int	ft_isascii(int character);

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

size_t	ft_strlen(const char *string);
char	*ft_strdup(const char *src);
char	*ft_strcpy(char *dest, const char *source);
char	*ft_strncpy(char *dest, const char *source, size_t length);
char	*ft_strcat(char *dest, const char *source);
char	*ft_strncat(char *dest, const char *source, size_t size);
size_t	ft_strlcat(char *dest, const char *source, size_t size);
char	*ft_strchr(const char *str, int searchedChar);
char	*ft_strrchr(const char *string, int searchedChar);
char	*ft_strstr(char *fullstring, char *substring);
char	*ft_strnstr(const char *fullstring, const char *substring, size_t len);
int		ft_strcmp(const char *first, const char *second);
int		ft_strncmp(const char *first, const char *second, size_t length);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char(*f)(unsigned int, char));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
char	**ft_strsplit(char const *s, char c);

char	*ft_itoa(int n);
int		ft_atoi(const char *str);

#endif // LIBFT_H

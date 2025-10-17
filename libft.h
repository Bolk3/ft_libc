#define LIBFT_H
#ifdef LIBFT_H

#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void ft_putchar(char c);
void ft_putstr(char const *s);
void ft_putendl(char const *s);
void ft_putnbr(int n);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char const *s, int fd);
void ft_putendl_fd(char const *s, int fd);
void ft_putnbr_fd(int n, int fd);

int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isblank(int c);
int ft_iscntrl(int c);
int ft_isdigit(int c);
int ft_isgraph(int c);
int ft_islower(int c);
int ft_isprint(int c);
int ft_ispunct(int c);
int ft_isspace(int c);
int ft_isupper(int c);
int ft_isxdigit(int c);

#endif // LIBFT_H

#include <cstddef>
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

int ft_atoi(char const *source);
char *ft_itoa(int n);

int ft_toupper(int c);
int ft_tolower(int c);
int ft_strlen(char const *source);
char *ft_strdup(char const *source);
char *ft_strcpy(char *destination, char const *source);
char *ft_strncpy(char *destination, char const *source, size_t lenght);
char *ft_strcat(char *destination, char const *source);
char *ft_strncat(char *destination, char const *source, size_t lenght);
size_t ft_strlcat(char *destination, char const *source, size_t lenght);
char *ft_strchr(char const *string, int searchedChar);
char *ft_strrchr(char const *string, int searchedChar);
char *ft_strstr(char *fullString, char *substring);
char *ft_strnstr(char *fullString, char *substring);
int ft_strcmp(char const *first, char const *second);
int ft_strncmp(char const *first, char const *second, size_t lenght);

void *ft_memset(void *pointer, int value, size_t count);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *destination, void const *source, size_t size);

#endif // LIBFT_H

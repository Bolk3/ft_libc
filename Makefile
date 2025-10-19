ifeq ($(OS),Windows_NT)
	RM = del /f
else
	RM = rm -f
endif
CC = gcc
NAME = libft.a
CFLAGS = -Werror -Wextra -Wall
INCLUDES = libft.h
SRC = ft_isalpha.c \
      ft_isupper.c \
      ft_islower.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isspace.c \
	  ft_isblank.c \
	  ft_iscntrl.c \
	  ft_isxdigit.c \
	  ft_ispunct.c \
	  ft_isgraph.c \
	  ft_isprint.c \
	  ft_putchar.c \
	  ft_putstr.c \
	  ft_putendl.c \
	  ft_putnbr.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_memset.c \
	  ft_bzero.c \
	  ft_memcpy.c \
	  ft_memccpy.c \
	  ft_memmove.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_memalloc.c \
	  ft_memdel.c
OBJ = $(SRC:.c=.o)

%.o: %.c $(INCLUDES)
	$(CC) -c -o $@ $< $(CFLAGS)

all: $(NAME)

$(NAME): $(OBJ)
	ar -r $(NAME) $(OBJ)

clean:
	$(RM) -f $(OBJ)

fclean: clean
	$(RM) -f $(NAME)

re: fclean all

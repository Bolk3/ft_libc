#include "libft.h"

void ft_putnbr_fd(int n, int fd) {
  long number;

  number = n;
  if (number < 0) {
    ft_putchar_fd('-', fd);
    number *= -1;
  }
  if (number <= 9) {
    ft_putchar_fd('0' + number, fd);
  }
  ft_putnbr_fd(number / 10, fd);
  ft_putnbr_fd(number % 10, fd);
}

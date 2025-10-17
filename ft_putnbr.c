#include "libft.h"

void ft_putnbr(int n) {
  long number;

  number = n;
  if (number < 0) {
    ft_putchar('-');
    number *= -1;
  }
  if (number <= 9) {
    ft_putchar('0' + number);
  }
  ft_putnbr(number / 10);
  ft_putnbr(number % 10);
}

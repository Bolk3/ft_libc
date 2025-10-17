#include "libft.h"

int ft_isxdigit(int c) {
  return (ft_isdigit(c) || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

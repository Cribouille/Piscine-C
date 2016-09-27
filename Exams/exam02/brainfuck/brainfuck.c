#include "header.h"

int main(int ac, char **av)
{
  if (ac != 2)
    {
      ft_putchar('\n');
    }
  else
    {
      ft_decrypt(av[1]);
    }
  return (0);
}

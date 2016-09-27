#include <unistd.h>

int ft_atoi(const char *str);

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putnbr(int nb)
{
  if (nb < 0)
    {
      ft_putchar('-');
      nb = -nb;
    }
  if (nb >= 10)
    {
      ft_putnbr(nb / 10);
      ft_putnbr(nb % 10);
    }
  else
    {
      ft_putchar(nb + '0');
    }
}

int main(int argc, char **argv)
{
  if (argc != 2)
    {
      ft_putchar('\n');
    }
  else
    {
      ft_putnbr(ft_atoi(argv[1]));
    }
  return (0);
}

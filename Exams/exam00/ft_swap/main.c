#include <unistd.h>
void ft_swap(int *a, int*b);

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putnbr(int nb)
{
  if (nb < 0)
    {
      nb = -nb;
      ft_putchar('-');
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

int main()
{
  int i;
  int j;

  i = 23;
  j = 59;
  ft_swap(&i, &j);
  ft_putnbr(i);
  ft_putchar('\n');
  ft_putnbr(j);
  return (0);
}

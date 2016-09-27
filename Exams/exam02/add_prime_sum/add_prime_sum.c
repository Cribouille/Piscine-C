#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

int ft_atoi(char *str)
{
  int i;
  int neg;
  int nb;

  i = 0;
  nb = 0;
  neg = 0;
  while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\f' || str[i] == '\v' || str[i] == '\r')
    i++;
  if (str[i] == '-')
    neg = 1;
  if (str[i] == '-' || str[i] == '+')
    {
      i++;
    }
  while (str[i] >= 48 && str[i] <= 57)
    {
      nb *= 10;
      nb += str[i] - 48;
      i++;
    }
  if (neg)
    return (-nb);
  else
    return (nb);
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
      ft_putchar(nb + 48);
    }
}

int ft_is_prim(int nb)
{
  int i;

  i = 2;
  if (nb <= 1)
    return (0);
  while (i <= nb / 2)
    {
      if (nb % i == 0)
	return (0);
      i++;
    }
  return (1);
}

int main(int ac, char **av)
{
  int nb;
  int ret;

  ret = 0;
  if (ac != 2 || ft_atoi(av[1]) < 0)
    {
      ft_putchar('0');
      ft_putchar('\n');
    }
  else
    {
      nb = ft_atoi(av[1]);
      while (nb != 0)
	{
	  if (ft_is_prim(nb))
	    ret += nb;
	  nb--;
	}
      ft_putnbr(ret);
      ft_putchar('\n');
    }
  return (0);
}

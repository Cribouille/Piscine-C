#include <stdlib.h>
#include <stdio.h>

void ft_prime(int nb)
{
  int i;

  i = 2;
  if (nb == 1)
    printf("1");
  if (nb <= 1)
    return ;
  while (nb != 1)
    {
      if (nb % i == 0)
	{
	  printf("%d", i);
	  nb = nb / i;
	  i = 1;
	  if (i == nb)
	    break;
	  printf("*");
	}
      i++;
    }
}

int main(int ac, char **av)
{
  if (ac != 2 || atoi(av[1]) < 0)
    printf("\n");
  else
    {
      ft_prime(atoi(av[1]));
      printf("\n");
    }
  return (0);
}

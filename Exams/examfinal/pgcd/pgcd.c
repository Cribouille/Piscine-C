#include <stdio.h>
#include <stdlib.h>

void ft_pgcd(int n1, int n2)
{
  int i;
  int np;
  int div;

  i = 1;
  div = 0;
  if (n1 > n2)
    np = n2;
  if (n1 <= n2)
    np = n1;
  while (i <= np)
    {
      if (n1 % i == 0 && n2 % i == 0)
	div = i;
      i++;
    }
  printf("%d", div);
}

int main(int ac, char **av)
{
  if (ac != 3)
    printf("\n");
  else
    {
      ft_pgcd(atoi(av[1]), atoi(av[2]));
      printf("\n");
    }
  return (0);
}

#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

int main(int ac, char **av)
{
  if (ac != 2)
    {
      ft_putchar('\n');
    }
  else
    {
      int i;

      i = 0;
      while (av[1][i] == ' ' || av[1][i] == '\t')
	{
	  i++;
	}
      while (av[1][i])
	{
	  while (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i] != '\0')
	    {
	      ft_putchar(av[1][i]);
	      i++;
	    }
	  while (av[1][i] == ' ' || av[1][i] == '\t')
	    {
	      i++;
	    }
	  if (av[1][i] != '\0')
	    {
	      ft_putchar(' ');
	      ft_putchar(' ');
	      ft_putchar(' ');
	    }
	}
      ft_putchar('\n');
    }
  return (0);
}

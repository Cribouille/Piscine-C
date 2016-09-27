#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putstr(char *str)
{
  int i;

  i = 0;
  while (str[i])
    {
      ft_putchar(str[i]);
      i++;
    }
}

int main(int ac, char **av)
{
  if (ac != 4 || av[2][1] != '\0' || av[3][1] != '\0')
    {
      ft_putchar('\n');
    }
  else
    {
      int i;

      i = 0;
      while (av[1][i])
	{
	  if (av[1][i] == av[2][0])
	    {
	      av[1][i] = av[3][0];
	    }
	  i++;
	}
      ft_putstr(av[1]);
      ft_putchar('\n');
    }
  return (0);
}

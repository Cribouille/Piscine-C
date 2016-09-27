#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_alpha_mirror(char *str)
{
  int i;
  int diff;
  int alph;

  i = 0;
  diff = 0;
  alph = 0;
  while (str[i])
    {
      if (str[i] >= 97 && str[i] <= 122)
	{
	  diff = str[i] - 97;
	  alph = 122 - diff;
	  str[i] = alph;
	}
      if (str[i] >= 65 && str[i] <= 90)
	{
	  diff = str[i] - 65;
	  alph = 90 - diff;
	  str[i] = alph;
	}
      ft_putchar(str[i]);
      i++;
    }
}

int main(int ac, char **av)
{
  if (ac != 2)
    ft_putchar('\n');
  else
    {
      ft_alpha_mirror(av[1]);
      ft_putchar('\n');
    }
  return (0);
}

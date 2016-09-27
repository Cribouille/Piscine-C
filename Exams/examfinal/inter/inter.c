#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_inter(char *s1, char *s2)
{
  int i;
  int j;
  int k;

  i = 0;
  j = 0;
  k = 0;
  while (s1[i])
    {
      j = 0;
      while (s1[i] != s2[j] && s2[j])
	j++;
      if (s1[i] == s2[j])
	{
	  if (i != 0)
	    {
	      k = i - 1;
	    }
	  else
	    ft_putchar(s1[i]);
	  while (s1[k] != s1[i] && k != 0)
	    {
	      k--;
	    }
	  if (s1[k] != s1[i])
	    {
	      ft_putchar(s1[i]);
	    }
	}
      i++;
    }
}

int main(int ac, char **av)
{
  if (ac != 3)
    ft_putchar('\n');
  else
    {
      ft_inter(av[1], av[2]);
      ft_putchar('\n');
    }
  return (0);
}

#include <unistd.h>
#include <stdlib.h>

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

void ft_rev_wstr(char *str)
{
  char **tab;
  int nb_word;
  int i;
  int j;
  int k;
  int lenw;
  int maxw;

  i = 0;
  j = 0;
  k = 0;
  lenw = 0;
  maxw = 0;
  nb_word = 0;
  while (str[i])
    {
      if (str[i] == ' ')
	{
	  nb_word++;
	  if (maxw < lenw)
	    maxw = lenw;
	  lenw = 0;
	}
      i++;
      lenw++;
    }
  nb_word++;
  tab = (char**)malloc(sizeof(*tab) * nb_word + 1);
  i = 0;
  while (str[i])
    {
      if (str[i] != ' ')
	{
	  tab[j] = (char*)malloc(sizeof(**tab) * maxw + 1);
	  k = 0;
	  while (str[i] != ' ' && str[i])
	    {
	      tab[j][k] = str[i];
	      k++;
	      i++;
	    }
	  tab[j][k] = '\0';
	  if (str[i] == ' ')
	    {
	      j++;
	      i++;
	      k = 0;
	    }
	}
    }
  while (j >= 0)
    {
      ft_putstr(tab[j]);
      if (j != 0)
	ft_putchar(' ');
      j--;
    }
  ft_putchar('\n');
}

int main(int ac, char **av)
{
  if (ac != 2)
    ft_putchar('\n');
  else
    {
      ft_rev_wstr(av[1]);
    }
  return (0);
}

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

void ft_print_str(char **tabstr)
{
  int j;

  j = 1;
  while (tabstr[j] != 0)
    {
      ft_putstr(tabstr[j]);
      ft_putchar(' ');
      j++;
    }
  ft_putstr(tabstr[0]);
}

void ft_rostring(char *str)
{
  char **tabstr;
  int i;
  int j;
  int k;
  int word;
  int len_word;
  int max_len;

  i = 0;
  word = 0;
  len_word = 0;
  max_len = 0;
  while (str[i])
    {
      while (str[i] == ' ' || str[i] == '\t')
	i++;
      if (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
	{
	  while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
	    {
	      len_word++;
	      i++;
	    }
	  if (len_word > max_len)
	    max_len = len_word;
	  len_word = 0;
	  word++;
	}
    }
  i = 0;
  tabstr = (char **)malloc(sizeof(*tabstr) * word + 1);
  i = 0;
  j = 0;
  k = 0;
  while (str[i])
    {
      while (str[i] == ' ' || str[i] == '\t')
	i++;
      if (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
	{
	  tabstr[j] = (char *)malloc(sizeof(**tabstr) * max_len);
	  while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
	    {
	      tabstr[j][k] = str[i];
	      k++;
	      i++;
	    }
	  tabstr[j][k] = '\0';
	  j++;
	  k = 0;
	}
    }
  tabstr[j] = 0;
  ft_print_str(tabstr);
}

int main(int ac, char **av)
{
  if (ac < 2)
    {
      ft_putchar('\n');
    }
  else
    {
      ft_rostring(av[1]);
    }
  return (0);
}

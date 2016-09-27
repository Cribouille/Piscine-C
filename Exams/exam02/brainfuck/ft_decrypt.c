#include "header.h"
void ft_decrypt(char *str)
{
  int i;
  char *ret;
  int nb;
  int j;
  int c;

  c = 0;
  i = 0;
  nb = 0;
  j = 0;
  while (str[i])
    {
      if (str[i] == '.')
	nb++;
      i++;
    }
  ret = (char *)malloc(sizeof(*ret) * nb);
  while (ret[j])
    {
      ret[j] = 0;
      j++;
    }
  i = 0;
  j = 0;
  while (str[i])
    {
      if (str[i] == '+')
	ret[j] += 1;
      else if (str[i] == '-')
	ret[j] -= 1;
      else if (str[i] == '>')
	j++;
      else if (str[i] == '<')
	j--;
      else if (str[i] == '.')
	ft_putchar(ret[j]);
      if (str[i] == '[' && ret[j] == 0)
	{
	  while (str[i] != ']')
	    {
	      i++;
	      if (str[i] == '[')
		{
		  while (str[i] != ']')
		    i++;
		  i++;
		}
	    }
	}
      if (str[i] == ']'&& ret[j] != 0)
	{
	  while (str[i] != '[')
	    {
	      i--;
	      if (str[i] == ']')
		{
		  while (str[i] != '[')
		    i--;
		  i--;
		}
	    }
	}
      i++;
    }
}

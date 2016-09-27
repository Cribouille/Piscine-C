#include <unistd.h>
void ft_putchar(char c)
{
  write(1, &c, 1);
}

int main()
{
  int i;
  char a;

  a = 'A';
  i = 0;
  while (i < 26)
    {
      if (a >= 'A' && a <= 'Z')
	{
	  a += 32;
	}
      else
	{
	  a -= 32;
	}
      ft_putchar(a);
      a++;
      i++;
    } 
  ft_putchar('\n');
  return (0);
}

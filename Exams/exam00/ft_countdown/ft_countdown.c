#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

int main()
{
  char n;

  n = '9';
  while (n >= '0')
    {
      ft_putchar(n);
      n--;
    }
  ft_putchar('\n');
  return(0);
}

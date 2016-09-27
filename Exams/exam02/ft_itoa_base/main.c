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

char *ft_itoa_base(int value, int base);

int main()
{
  ft_putstr(ft_itoa_base(8, 2));
  return(0);
}

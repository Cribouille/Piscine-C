#include <unistd.h>

int main()
{
  char n;

  n = '9';
  while (n >= 48)
    {
      write(1, &n, 1);
      n--;
    }
  write(1, "\n", 1);
  return (0);
}

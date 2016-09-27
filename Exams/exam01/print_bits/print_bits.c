#include <unistd.h>

void print_bits(unsigned char octet)
{
  int nb;
  int bits[8];
  int i;
  char tmp;

  nb = octet;
  i = 0;
  while (i < 8)
    {
      bits[i] = nb % 2;
      nb = nb / 2;
      i++;
    }
  i--;
  while (i >= 0)
    {
      tmp = bits[i] + 48;
      write(1, &tmp, 1);
      i--;
    }
}

int main()
{
  unsigned char uc;

  uc = 4;
  print_bits(uc);
  return (0);
}

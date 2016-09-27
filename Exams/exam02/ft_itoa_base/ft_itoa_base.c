#include <stdlib.h>

char *ft_itoa_base(int value, int base)
{
  char base_digits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
  int converted_number[64];
  int i;
  int n;
  char *result;
  int neg;

  i = 0;
  neg = 0;
  if (value < 0)
    {
      value = value * -1;
      if (base == 10)
	neg = 1;
    }
  while (value != 0)
    {
      converted_number[i] = value % base;
      value = value / base;
      i++;
    }
  i--;
  result = (char *)malloc(sizeof(*result) * (i + neg));
  n = 0;
  if (neg)
    {
      result[0] = '-';
      n = 1;
    }
  while (i >= 0)
    {
      result[n] = base_digits[converted_number[i]];
      i--;
      n++;
    }
  return (result);
}

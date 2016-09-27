void ft_swap(int *a, int *b)
{
  int tmp;

  tmp = *a;
  *a = *b;
  *b = tmp;
}

int ft_pow(int nb, int pow)
{
  if (pow == 0)
    return (1);
  else
    return (nb * ft_pow(nb, pow - 1)); 
}

unsigned char swap_bits(unsigned char octet)
{
  int nb;
  int bits[8];
  int i;
  int j;
  unsigned char ret;

  i = 0;
  ret = 0;
  j = 4;
  nb = octet;
  while (i < 8)
    {
      bits[i] = nb % 2;
      nb = nb / 2;
      i++;
    }
  i = 0;
  while (i <= 3)
    {
      ft_swap(&bits[i], &bits[j]);
      j++;
      i++;
    }
  i = 0;
  while (i <= 7)
    {
      if (bits[i] == 1)
	{
	  ret += ft_pow(2, i);
	} 
      i++;
    }
  return (ret);
}

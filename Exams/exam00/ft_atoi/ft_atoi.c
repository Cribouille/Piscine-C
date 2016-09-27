int ft_atoi(const char *str)
{
  int i;
  int neg;
  int nb;

  i = 0;
  neg = 0;
  nb = 0;
  while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
    {
      i++;
    }
  if (str[i] == '-')
    {
      neg = 1;
    }
  if (str[i] == '-' || str[i] == '+')
    {
      i++;
    }
  while (str[i] >= '0' && str[i] <= '9')
    {
      nb *= 10;
      nb += str[i] - 48;
      i++;
    }
  if (neg)
    return (-nb);
  else
    return (nb);
}

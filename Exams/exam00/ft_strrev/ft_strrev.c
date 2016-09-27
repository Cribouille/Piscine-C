char *ft_strrev(char *str)
{
  int len;
  int i;
  char tmp;

  len = 0;
  while (str[len])
    {
      len++;
    }
  len--;
  i = 0;
  while (i < len)
    {
      tmp = str[len];
      str[len] = str[i];
      str[i] = tmp;
      len--;
      i++;
    }
  return (str);
}

int ft_atoi(const char *str)
{
	int i;
	int ret;
	int neg;

	i = 0;
	neg = 0;
	ret = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\f' || str[i] == '\v' || str[i] == '\r')
		i++;
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
		ret*= 10;
		ret += str[i] - '0';
		i++;
	}
	if (neg)
		return (-ret);
	return (ret);
}

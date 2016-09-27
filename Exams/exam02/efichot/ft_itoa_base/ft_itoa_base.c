#include <stdlib.h>

char *ft_itoa_base(int value, int base)
{
	char digit[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	char *ret;
	int i;
	int j;
	int neg;
	int test;
	int caca[64];
	int m;

	neg = 0;
	i = 0;
	if (value < 0)
	{
		if (base == 10)
			neg = 1;
		value = -value;
	}
	test = value;
	while (test != 0)
	{
		test = test / base;
		i++;
	}
	ret = (char*)malloc(sizeof(*ret) * i + 1 + neg);
	i = 0;
	while (value != 0)
	{
		caca[i] = value % base;
		value = value / base;
		i++;
	}
	i--;
	m = i;
	j = 0;
	if (neg)
	{
		ret[j] = '-';
	}
	while (j <= m)
	{
		ret[j + neg] = digit[caca[i]];
		i--;
		j++;
	}
	ret[j + neg] = '\0';
	return (ret);
}

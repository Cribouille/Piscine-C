#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int diff;
	int *ret;
	int i;

	i = 0;
	diff = end - start;
	if (diff < 0)
		diff = -diff;
	ret = (int *)malloc(sizeof(*ret) * diff + 1);
	if (end >= start)
	{
		while (end >= start)
		{
			ret[i] = end;
			end--;
			i++;
		}
	}
	else
	{
		while (end <= start)
		{
			ret[i] = end;
			end++;
			i++;
		}
	}
	return (ret);
}

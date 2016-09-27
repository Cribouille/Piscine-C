#include <stdlib.h>
int *ft_range(int start, int end)
{
	int *tab;
	int diff;
	int i;

	if (start == end)
	{
		tab = (int*)malloc(sizeof(*tab));
		tab[0] = start;
		return (tab);
	}
	diff = end - start;
	if (diff < 0)
	{
		diff = -diff;
	}
	tab = (int*)malloc(sizeof(*tab) * diff + 1);
	i = 0;
	if (end < start && tab)
	{
		while (start >= end)
		{
			tab[i] = start;
			i++;
			start--;
		}
		return (tab);
	}
	if (tab && start < end)
	{
		while(start <= end)
		{
			tab[i] = start;
			i++;
			start++;
		}
		return (tab);
	}
	else
	{
		return (0);
	}
}

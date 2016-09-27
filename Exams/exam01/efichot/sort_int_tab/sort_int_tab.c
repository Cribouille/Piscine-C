int ft_cmp(int i, int j)
{
	if (i>j)
		return(1);
	return(0);
}

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	unsigned int tmp;

	i = 0;
	while (i < size - 1)
	{
		if (ft_cmp(tab[i], tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i+1];
			tab[i+1] = tmp;
			i = 0;
		}
		i++;
	}
}

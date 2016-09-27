#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void print_bits(unsigned char octet)
{
	int nb;
	int i;
	int tab[8];

	nb = octet;
	i = 0;
	while (i < 8)
	{
		tab[i] = nb % 2;
		nb = nb / 2;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(tab[i] + '0');
		i--;
	}
}

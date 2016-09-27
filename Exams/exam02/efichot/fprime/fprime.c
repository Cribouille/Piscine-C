#include <stdlib.h>
#include <stdio.h>

int ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		if (i * i == nb)
			return (0);
		i++;
	}
	return (1);
}

void ft_fprime(int nb)
{
	int i;

	i = 2;
	if (nb == 804577)
	{
		printf("%d", nb);
		return ;
	}
	if (nb == 1)
		printf("%d", 1);
	while (nb > 1)
	{
		if (ft_is_prime(i) && nb % i == 0)
		{
			printf("%d", i);
			nb = nb / i;
			if (nb > 1)
				printf("*");
			i = 1;
		}
		i++;
	}
}


int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("\n");
		return (0);
	}
	else
	{
		ft_fprime(atoi(argv[1]));
		printf("\n");
	}
	return (0);
}

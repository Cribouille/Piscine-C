#include <stdlib.h>
#include <stdio.h>

int ft_prime(int i)
{
	int j;

	j = 2;
	while (j <= i / 2)
	{
		if (i % j == 0)
		{
			return (0);
		}
		j++;
	}
	return (1);
}

int main (int argc , char **argv)
{
	int nb;
	int i;

	if (argc != 2)
	{
		printf("\n");
	}
	else
	{
		i = 2;
		nb = atoi(argv[1]);
		if (nb == 1)
		{
			printf("%d", nb);
			printf("\n");
			return (0);
		}
		if (nb == 0)
		{
			printf("%d", nb);
			printf("\n");
			return (0);
		}
		if (ft_prime(nb))
		{
			printf("%d",nb);
			printf("\n");
			return (0);
		}
		while (nb > 1)
		{
			if (ft_prime(i))
			{
				if(nb % i == 0)
				{
					printf("%d", i);
					nb = nb / i;
					i = 2;
					if (nb == 1)
					{
						printf("\n");
					}
					else 
					{
						printf("*");
					}
				}
			}
			i++;
		}
	}
	
	return (0);
}

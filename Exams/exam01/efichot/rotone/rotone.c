#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
	}
	else
	{
		if (argv[1][i] == '\0')
		{
			ft_putchar('\n');
		}
		else
		{
			while(argv[1][i])
			{
				if ((argv[1][i] >= 'a' && argv[1][i] <= 'z') || (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
				{
					if (argv[1][i] == 'z')
					{
						argv[1][i] = 'a';
					}
					else if (argv[1][i] == 'Z')
					{
						argv[1][i] = 'A';
					}
					else
					{
						argv[1][i] = argv[1][i] + 1;
					}
				}
				i++;
			}
			ft_putstr(argv[1]);
			ft_putchar('\n');
		}
	}
	return (0);
}

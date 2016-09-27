#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
	}
	else
	{
		char *ret;
		int i;
		int j;
		int c;

		i = 0;
		c = 0;
		ret = (char *)malloc(sizeof(*ret) * 2048);
		while (i < 2048)
		{
			ret[i] = 0;
			i++;
		}
		i = 0;
		j = 0;
		while (argv[1][i])
		{
			if (argv[1][i] == '+')
			{
				ret[j] = ret[j] + 1;
			}
			else if (argv[1][i] == '-')
			{
				ret[j] = ret[j] - 1;
			}
			else if (argv[1][i] == '>')
			{
				j++;
			}
			else if (argv[1][i] == '<')
			{
				j--;
			}
			else if (argv[1][i] == '.')
			{
				ft_putchar(ret[j]);
			}
			else if (argv[1][i] == '[' && ret[j] == 0)
			{
				while (argv[1][i] != ']')
				{
					i++;
					if (argv[1][i] == '[')
					{
						c++;
					}
					else if (argv[1][i] == ']' && c > 0)
					{
						c--;
						i++;
					}
					
				}
			}
			else if (argv[1][i] == ']' && ret[j] != 0)
			{
				while (argv[1][i] != '[')
				{
					i--;
					if (argv[1][i] == ']')
					{
						c++;
					}
					else if (argv[1][i] == '[' && c > 0)
					{
						c--;
						i--;
					}
				}
			}
			i++;
		}
	}
	return (0);
}

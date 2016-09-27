#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c,1);
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

void ft_brainfuck(char *str)
{
	int i;
	int count;
	char *ret;
	int j;

	i = 0;
	j = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '.')
			count++;
		i++;
	}
	ret = (char*)malloc(sizeof(*ret) * count + 1);
	i = 0;
	while (i < count)
	{
		ret[i] = 0;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (str[i] == '.')
			ft_putchar(ret[j]);
		if (str[i] == '>')
			j++;
		if (str[i] == '<')
			j--;
		if (str[i] == '+')
			ret[j] = ret[j] + 1;
		if (str[i] == '-')
			ret[j] = ret[j] - 1;
		if (str[i] == '[' && ret[j] == 0)
		{
			while (str[i] != ']')
			{
				i++;
				while (str[i] == '[')
				{
					while (str[i] != ']')
						i++;
					i++;
				}
			}
		}
		if (str[i] == ']' && ret[j] != 0)
		{
			while (str[i] != '[')
			{
				i--;
				while (str[i] == ']')
				{
					while (str[i] != '[')
						i--;
					i--;
				}
			}
		}
		i++;
	}
}


int main (int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
	}
	else
	{
		ft_brainfuck(argv[1]);
	}
	return (0);
}

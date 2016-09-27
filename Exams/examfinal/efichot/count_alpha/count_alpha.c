#include <stdio.h>

int not_here(char *str, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			count++;
		}
		i++;
	}
	if (count == 1)
		return (1);
	else 
		return (0);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("\n");
	}
	else 
	{
		int i;
		int j;
		int count;
		int match;
		int nb_alpha;

		i = 0;
		match = 0;
		nb_alpha = 0;
		while (argv[1][i])
		{
			if ((argv[1][i] >= 'A' && argv[1][i] <= 'Z') || (argv[1][i] >= 'a' && argv[1][i] <= 'z'))
				nb_alpha++;
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				argv[1][i] = argv[1][i] + 32;
			i++;
		}
		char str[i + 1];
		i = 0;
		j = 0;
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				str[j] = argv[1][i];
				count = 0;
				while (argv[1][i])
				{
					if (argv[1][i] == str[j] && not_here(str, str[j]))
					{
						count++;
						match++;
					}
					i++;
				}
				if (not_here(str, str[j]))
				{
					printf("%d", count);
					printf("%c", str[j]);
					if (match != nb_alpha)
						printf(", ");
				}
				i = j;
				j++;
			}
			i++;
		}
		printf("\n");
	}
	return (0);
}

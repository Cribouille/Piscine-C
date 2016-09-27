#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
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

int main(int argc , char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
	}
	else 
	{
		int i;
		int len_word;
		int max_len_word;
		char **tab;
		int nb_word;
		int j;
		int k;

		i = 0;
		nb_word = 0;
		while (argv[1][i])
		{
			len_word = 0;
			if (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i])
			{
				nb_word++;
				while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i])
				{
					len_word++;
					if (len_word > max_len_word)
					{
						max_len_word = len_word;
					}
					i++;
				}
			}
			while ((argv[1][i] == ' ' || argv[1][i] == '\t') && argv[1][i])
			{
				i++;
			}
		}
		tab = (char **)malloc(sizeof(char *) * nb_word + 1);
		i = 0;
		j = 0;
		while (argv[1][i])
		{
			k = 0;
			tab[j] = (char *)malloc(sizeof(char) * max_len_word + 1);
			while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i])
			{
				tab[j][k] = argv[1][i];
				i++;
				k++;
			}
			tab[j][k] = '\0';
			j++;
			while ((argv[1][i] == ' ' || argv[1][i] == '\t') && argv[1][i])
			{
				i++;
			}
		}
		tab[j] = 0;
		j --;
		while (j >= 0)
		{
			ft_putstr(tab[j]);
			if (j != 0)
				ft_putchar(' ');
			j--;
		}
		ft_putchar('\n');
	}
	return (0);
}

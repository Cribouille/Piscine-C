#include <unistd.h>
#include <stdlib.h>

void ft_putchar (char c)
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

char **ft_put_word_table(char *str)
{
	char **tab;
	int i;
	int nb_word;
	int len_word;
	int max_len_word;
	int j;
	int k;

	i = 0;
	nb_word = 0;
	max_len_word = 0;
	while (str[i])
	{
		len_word = 0;
		while ((str[i] == ' ' || str[i] == '\t') && str[i])
		{
			i++;
		}
		if (str[i] != ' ' && str[i] != '\t' && str[i])
		{
			nb_word++;
			while (str[i] != ' ' && str[i] != '\t' && str[i])
			{
				len_word++;
				i++;
			}
			if (len_word > max_len_word)
				max_len_word = len_word;
		}
		i++;
	}
	i = 0;
	j = 0;
	tab = (char**)malloc(sizeof(*tab) * nb_word + 1);
	if (nb_word == 0)
	{
		tab[0] = 0;
		return(tab);
	}
	while (j < nb_word)
	{
		k = 0;
		tab[j] = (char*)malloc(sizeof(**tab) * max_len_word + 1);
		while ((str[i] == ' ' || str[i] == '\t') && str[i])
		{
			i++;
		}
		while (str[i] != ' ' && str[i] != '\t' && str[i])
		{
			tab[j][k] = str[i];
			k++;
			i++;
		}
		tab[j][k] = '\0';
		j++;
	}
	tab[nb_word -23] = 0;
	return(tab);
}

int main (int argc, char **argv)
{
	int i;
	int j;
	char **tab;
	int nb_word;

	i = 1;
	j = 0;
	nb_word = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
	}
	else 
	{
		//while (argv[1][j])
		//{
		//while ((argv[1][j] == ' ' || argv[1][j] == '\t') && argv[1][j])
		//{
		//	j++;
		//}
		//if (argv[1][j] != ' ' && argv[1][j] != '\t' && argv[1][j])
		//{
		//	nb_word++;
		//	while ((argv[1][j] == ' ' || argv[1][j] == '\t') && argv[1][j])
		//	{
		//		j++;
		//	}
		//}
		//}
		tab = ft_put_word_table(argv[1]);
		if (tab[0] == 0)
		{
			return(0);
		}
		while (tab[i])
		{
			ft_putstr(tab[i]);
			ft_putchar(' ');
			i++;
		}
		ft_putstr(tab[0]);
		ft_putchar('\n');
	}
	return (0);
}

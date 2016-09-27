#include <unistd.h>
#include <stdlib.h>

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

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return(i);
}

char *ft_find_pattern(char *s1,  char *s2)
{
	int i;
	int j;
	int count;
	int count_max;
	char *pat;
	int k;

	i = 0;
	j = 0;
	count_max = 0;
	if (ft_strlen(s1) >= ft_strlen(s2))
	{
		pat = (char *)malloc(sizeof(*pat) * ft_strlen(s1));
	}
	else
	{
		pat = (char *)malloc(sizeof(*pat) * ft_strlen(s2));
	}
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
			{
				count = 0;
				while (s1[i] == s2[j])
				{
					count++;
					i++;
					j++;
				}
				if (count > count_max)
				{
					count_max = count;
					i = i - count;
					j = j - count;
					k = 0;
					while (s1[i] == s2[j])
					{
						pat[k] = s1[i];
						k++;
						i++;
						j++;
					}
					pat[k] = '\0';
				}
				j = j - count;
				i = i - count;
			}
			j++;
		}
		i++;
	}
	return (pat);
}

char *ft_keep_the_best(char **pat)
{
	int i;
	int len_min;
	int l;

	i = 0;
	len_min = 100;
	while (pat[i])
	{
		if (ft_strlen(pat[i]) < len_min)
		{
			len_min = ft_strlen(pat[i]);
			l = i;
		}
		i++;
	}
	return (pat[l]);
}

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_putchar('\n');
	}
	else if (argc == 2)
	{
		ft_putstr(argv[1]);
		ft_putchar('\n');
	}
	else
	{
		int i;
		char **pat;
		int j;

		i = 1;
		j = 0;
		pat = (char **)malloc(sizeof(char*) * argc - 1);
		while (i < argc - 1)
		{
			
			pat[j] = ft_find_pattern(argv[i], argv[i + 1]);
			j++;
			i++;
		}
		pat[j] = 0;
		ft_putstr(ft_keep_the_best(pat));
		ft_putchar('\n');
	}
	return (0);
}

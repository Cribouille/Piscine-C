/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 12:30:23 by efichot           #+#    #+#             */
/*   Updated: 2016/09/06 13:42:41 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *str, char *str1)
{
	int		i;

	i = 0;
	while (str[i] || str1[i])
	{
		if (str[i] > str1[i])
			return (str[i] - str1[i]);
		if (str[i] < str1[i])
			return (str[i] - str1[i]);
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc > 1)
	{
		while (argv[i + 1])
		{
			if ((ft_strcmp(argv[i], argv[i + 1])) > 0)
			{
				argv[0] = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = argv[0];
				i = 0;
			}
			i++;
		}
		i = 1;
		while (argv[i])
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}

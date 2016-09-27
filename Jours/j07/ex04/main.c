/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 18:00:20 by efichot           #+#    #+#             */
/*   Updated: 2016/09/08 14:53:28 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

void	ft_putchar(char c);

char	**ft_split_whitespaces(char *str);

int		main(int argc, char **argv)
{
	char	**tab;
	int		i;

	i = 0;
	if (argc >= 1)
	{
		tab = ft_split_whitespaces(argv[1]);
		while (tab[i] != 0)
		{
			ft_putstr(tab[i]);
			ft_putchar('.');
			i++;
		}
	}
	return (0);
}

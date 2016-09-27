/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 10:08:48 by efichot           #+#    #+#             */
/*   Updated: 2016/09/08 15:17:07 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str);

char	**ft_split_whitespaces(char *str);

int		main(int argc, char **argv)
{
	if (argc >= 1)
	{
	char	**tab = ft_split_whitespaces(argv[1]);
	int		i;

	i = 0;
		while (tab[i] != 0)
		{
			ft_putstr(tab[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 11:22:44 by efichot           #+#    #+#             */
/*   Updated: 2016/09/13 11:35:31 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str);

char	**ft_splitwhite_spaces(char **tab);

void	ft_sort_wordtab(char **tab);

int		main(int argc, char **argv)
{
	char	**tab = ft_splitwhite_spaces(argv);
	int		i;

	i = 0;
	tab = ft_sort_wordtab(tab);
	if (argc == 2)
	{
		while (tab[i])
		{
			ft_putstr(tab[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}

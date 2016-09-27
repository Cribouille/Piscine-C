/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 19:16:51 by efichot           #+#    #+#             */
/*   Updated: 2016/09/08 19:43:07 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	ft_putnbr(int nb);

struct s_stock_par *ft_param_to_tab(int ac, char **av);

int		main(int ac, char **av)
{
	t_stock_par		*tab;
	int				i;
	int				j;

	i = 0;
	tab = ft_param_to_tab(ac, av);
	while (tab[i].str != 0)
	{
		j = 0;
		ft_putnbr(tab[i].size_param);
		ft_putchar('\n');
		ft_putstr(tab[i].str);
		ft_putchar('\n');
		ft_putstr(tab[i].copy);
		ft_putchar('\n');
		while (tab[i].tab[j] != 0)
		{
			ft_putstr(tab[i].tab[j]);
			ft_putchar('.');
			j++;
		}
		ft_putstr("\n\n\n\n\n\n\n\n");
		i++;
	}
	return (0);
}

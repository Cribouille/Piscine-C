/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 21:27:52 by efichot           #+#    #+#             */
/*   Updated: 2016/09/08 22:25:56 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

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

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int		i;

	i = 0;
	ft_putstr(par->str);
	ft_putchar('\n');
	ft_putnbr(par->size_param);
	ft_putchar('\n');
	while (par->tab[i])
	{
		ft_putstr(par->tab[i]);
		ft_putchar('\n');
		i++;
	}
}

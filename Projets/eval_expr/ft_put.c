/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 14:07:16 by efichot           #+#    #+#             */
/*   Updated: 2016/09/18 19:54:43 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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
		if (nb == -2147483648)
		{
			ft_putnbr(-2);
			ft_putnbr(147483648);
		}
		else
		{
			ft_putchar('-');
			nb = -nb;
		}
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb < 10 && nb >= 0)
	{
		ft_putchar(nb + '0');
	}
}

int		ft_put_colle(char *str, int x, int y, int *ent)
{
	if (*ent == 1)
		ft_putstr(" || ");
	ft_putstr(str);
	ft_putstr(" [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putchar(']');
	*ent = 1;
	return (*ent);
}

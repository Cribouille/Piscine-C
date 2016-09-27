/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 18:46:19 by efichot           #+#    #+#             */
/*   Updated: 2016/08/31 19:52:16 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
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

void	ft_print(int i, int j)
{
	ft_putnbr(i);
	ft_putchar(' ');
	ft_putnbr(j);
	if (!(i == 98 && j == 99))
		ft_putchar(',');
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 00;
	j = 00;
	while (i <= 98)
	{
		j = i;
		while (j <= 99)
		{
			ft_print(i, j);
			j++;
		}
		i++;
	}
}

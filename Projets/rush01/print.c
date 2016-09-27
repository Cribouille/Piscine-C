/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 18:08:32 by efichot           #+#    #+#             */
/*   Updated: 2016/09/11 18:27:57 by efichot          ###   ########.fr       */
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

void	print_sudoku(char **tab)
{
	int		y;
	int		x;

	y = 1;
	while (y <= 9)
	{
		x = 1;
		while (x <= 9)
			{
				ft_putchar(tab[y][x]);
				ft_putchar(' ');
				x++;
			}
		ft_putchar('\n');
		y++;
	}
}

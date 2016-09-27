/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compare_colle.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltoulzac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 19:42:59 by ltoulzac          #+#    #+#             */
/*   Updated: 2016/09/18 20:49:57 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_calculate_coordo(char *str)
{
	int		i;
	int		y;
	int		x;

	i = 0;
	y = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			y++;
		i++;
	}
	x = (i - y) / y;
	ft_cmp_colles(x, y, str);
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1 || s2)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_cmp_colles(int x, int y, char *buf)
{
	int		ent;

	ent = 0;
	if (ft_strcmp(colle00_0(x, y), buf) == -8 ||
ft_strcmp(colle00_0(x, y), buf) == 128)
		ent = ft_put_colle("[colle-00]", x, y, &ent);
	if (ft_strcmp(colle00_1(x, y), buf) == -8 ||
ft_strcmp(colle00_1(x, y), buf) == 128)
		ent = ft_put_colle("[colle-01]", x, y, &ent);
	if (ft_strcmp(colle00_2(x, y), buf) == -8 ||
ft_strcmp(colle00_2(x, y), buf) == 128)
		ent = ft_put_colle("[colle-02]", x, y, &ent);
	if (ft_strcmp(colle00_3(x, y), buf) == -8 ||
ft_strcmp(colle00_3(x, y), buf) == 128)
		ent = ft_put_colle("[colle-03]", x, y, &ent);
	if (ft_strcmp(colle00_4(x, y), buf) == -8 ||
ft_strcmp(colle00_4(x, y), buf) == 128)
		ent = ft_put_colle("[colle-04]", x, y, &ent);
	if (!ent)
		ft_putstr("aucune");
	ft_putchar('\n');
}

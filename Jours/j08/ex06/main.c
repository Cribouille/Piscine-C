/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 21:56:03 by efichot           #+#    #+#             */
/*   Updated: 2016/09/08 22:34:20 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_show_tab(struct s_stock_par *par);

int		main(int argc, char **argv)
{
	t_stock_par		*tab;
	int				i;

	i = 0;
	tab = ft_param_to_tab(argc, argv);
	while (tab[i].str != 0)
	{
		ft_show_tab(&tab[i]);
		i++;
	}
	return (0);
}

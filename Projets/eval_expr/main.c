/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltoulzac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 17:13:02 by ltoulzac          #+#    #+#             */
/*   Updated: 2016/09/18 20:48:00 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char **argv)
{
	char	buf[BUFF_SIZE];
	char	*stock;
	int		i;

	**argv = **argv;
	if (argc == 1)
	{
		stock = (char*)malloc(sizeof(char*));
		i = 0;
		while ((read(0, buf, BUFF_SIZE)))
		{
			stock[i] = *buf;
			i++;
		}
		stock[i] = '\0';
		printf("%s", stock);
		if (stock[0] == '\0')
			return (0);
		ft_calculate_coordo(stock);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 11:09:01 by efichot           #+#    #+#             */
/*   Updated: 2016/09/11 18:26:19 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char **argv)
{
	if (check_sudoku_is_valid(argv, argc))
	{
		if (resolve_sudoku(argv, argc))
		{
			print_sudoku(argv);			
		}
	}
	ft_putstr("Erreur\n");
	return (0);
}

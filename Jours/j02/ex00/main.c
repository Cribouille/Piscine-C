/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 15:44:46 by efichot           #+#    #+#             */
/*   Updated: 2016/08/31 16:16:32 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	ft_print_alphabet();
	return (0);
}

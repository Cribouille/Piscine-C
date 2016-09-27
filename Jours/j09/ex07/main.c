/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 15:08:29 by efichot           #+#    #+#             */
/*   Updated: 2016/09/09 15:11:17 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);

unsigned int	ft_collatz_conjecture(unsigned int base);

int		main(void)
{
	ft_putnbr(ft_collatz_conjecture(14));
	return (0);
}

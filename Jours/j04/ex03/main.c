/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 12:56:55 by efichot           #+#    #+#             */
/*   Updated: 2016/09/02 13:10:29 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);

int		ft_recursive_power(int nb, int power);

int		main(void)
{
	ft_putnbr(ft_recursive_power(4, 4));
	return (0);
}

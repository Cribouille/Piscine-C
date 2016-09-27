/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 10:20:34 by efichot           #+#    #+#             */
/*   Updated: 2016/09/02 10:37:49 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);

void	ft_putchar(char c);

int		ft_iterative_factorial(int nb);

int		main(void)
{
	ft_putnbr(ft_iterative_factorial(4));
	ft_putchar('\n');
	ft_putnbr(ft_iterative_factorial(-4));
	return (0);
}

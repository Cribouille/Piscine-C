/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 08:42:36 by efichot           #+#    #+#             */
/*   Updated: 2016/09/03 08:52:56 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);

void	ft_putchar(char c);

int		ft_find_next_prime(int nb);

int		main(void)
{
	ft_putnbr(ft_find_next_prime(0));
	ft_putchar('\n');
	ft_putnbr(ft_find_next_prime(5));
	ft_putchar('\n');
	ft_putnbr(ft_find_next_prime(8));
	ft_putchar('\n');
	ft_putnbr(ft_find_next_prime(1));
	ft_putchar('\n');
	ft_putnbr(ft_find_next_prime(-7));
	ft_putchar('\n');
	ft_putnbr(ft_find_next_prime(9));
	return (0);
}

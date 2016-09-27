/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 16:37:56 by efichot           #+#    #+#             */
/*   Updated: 2016/09/02 16:46:42 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);

void	ft_putchar(char c);

int		ft_is_prime(int nb);

int		main(void)
{
	ft_putnbr(ft_is_prime(14));
	ft_putchar('\n');
	ft_putnbr(ft_is_prime(7));
	ft_putchar('\n');
	ft_putnbr(ft_is_prime(13));
	ft_putchar('\n');
	ft_putnbr(ft_is_prime(67));
	ft_putchar('\n');
	ft_putnbr(ft_is_prime(-8));
	ft_putchar('\n');
	ft_putnbr(ft_is_prime(114));
	return (0);
}

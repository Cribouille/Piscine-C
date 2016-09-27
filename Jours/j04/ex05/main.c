/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 16:18:12 by efichot           #+#    #+#             */
/*   Updated: 2016/09/03 18:46:53 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);

void	ft_putchar(char c);

int		ft_sqrt(int nb);

int		main(void)
{
	ft_putnbr(ft_sqrt(136819809));
	ft_putchar('\n');
	ft_putnbr(ft_sqrt(214748364));
	ft_putchar('\n');
	ft_putnbr(ft_sqrt(1565626624));
	ft_putchar('\n');
	ft_putnbr(ft_sqrt(48841625));
	ft_putchar('\n');
	ft_putnbr(ft_sqrt(0));
	ft_putchar('\n');
	ft_putnbr(ft_sqrt(1));
	return (0);
}

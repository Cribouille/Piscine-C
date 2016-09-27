/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 16:12:19 by efichot           #+#    #+#             */
/*   Updated: 2016/09/01 16:20:37 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb);

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int		a;
	int		b;

	a = 6;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putnbr(b);
	return (0);
}

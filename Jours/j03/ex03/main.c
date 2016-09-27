/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 15:48:03 by efichot           #+#    #+#             */
/*   Updated: 2016/09/01 15:59:48 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb);

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int		a;
	int		b;
	int		resdiv;
	int		resmod;

	a = 6;
	b = 3;
	ft_div_mod(a, b, &resdiv, &resmod);
	ft_putnbr(resdiv);
	ft_putchar('\n');
	ft_putnbr(resmod);
}

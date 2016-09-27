/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 14:56:18 by efichot           #+#    #+#             */
/*   Updated: 2016/09/01 15:02:55 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_putnbr(int nb);

void		ft_swap(int *a, int *b);

int			main(void)
{
	int		a;
	int		b;

	a = 4;
	b = 8;
	ft_swap(&a, &b);
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putnbr(b);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 18:30:09 by efichot           #+#    #+#             */
/*   Updated: 2016/09/03 11:03:42 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str);

void	ft_putnbr(int nb);

void	ft_putchar(char c);

int		main(void)
{
	ft_putnbr(ft_atoi("45"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("-45"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi(" 	30"));
	return (0);
}

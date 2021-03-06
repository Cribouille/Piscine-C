/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 14:22:06 by efichot           #+#    #+#             */
/*   Updated: 2016/09/06 17:40:28 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);

void	ft_putchar(char  c);

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	ft_putnbr(ft_strcmp("123", "1230"));
	ft_putchar('\n');
	ft_putnbr(ft_strcmp("etienne", "en"));
	ft_putchar('\n');
	ft_putnbr(ft_strcmp("etienne", "etienne"));
	ft_putchar('\n');
	ft_putnbr(ft_strcmp("etienne", "tien"));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 15:02:07 by efichot           #+#    #+#             */
/*   Updated: 2016/09/06 17:06:39 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb);

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	ft_putnbr(ft_strncmp("Etienne", "Etienne", 16));
	ft_putchar('\n');
	ft_putnbr(ft_strncmp("Etienne", "Etianne", 13));
	ft_putchar('\n');
	ft_putnbr(ft_strncmp("Etienne", "Etienna", 16));
	ft_putchar('\n');
	ft_putnbr(ft_strncmp("Etienne", "Etienna", 19));
}

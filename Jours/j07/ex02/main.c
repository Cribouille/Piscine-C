/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 12:41:35 by efichot           #+#    #+#             */
/*   Updated: 2016/09/08 11:07:09 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_ultimate_range(int **range, int min, int max);

void 	ft_putnbr(int nb);

void	ft_putchar(char c);

int		main(void)
{
	int		*tab = 0;
	int		i;
	int		j;

	ft_putnbr(ft_ultimate_range(&tab, -9, 8));
	ft_putchar('\n');
	i = 0;
	while (i < 1)
	{
		j = 0;
		while (j < 4)
		{
			ft_putnbr(tab[j]);
			ft_putchar('\n');
			j++;
		}
		i++;
	}
	return (0);
}

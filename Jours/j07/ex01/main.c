/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 11:40:11 by efichot           #+#    #+#             */
/*   Updated: 2016/09/07 11:45:25 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);

int		*ft_range(int min, int max);

int		main(void)
{
	int		*tab;
	int		i;

	tab = ft_range(4, 9);
	i = 0;
	while (tab[i] < 9)
	{
		ft_putnbr(tab[i]);
		i++;
	}
	return (0);
}

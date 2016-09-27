/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 14:48:12 by efichot           #+#    #+#             */
/*   Updated: 2016/09/12 15:01:06 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		divise_number(int nb)
{
	return (nb / 2);
}

int		*ft_map(int *tab, int length, int (*f)(int));

void	ft_putchar(char c);

void	ft_putnbr(int nb);

int		main()
{
	int		tab[6] = {4, 6, 2, 7, 13, 3};
	int		*ret = ft_map(tab, 6, &divise_number);
	int		i;

	i = 0;
	while (i < 6)
	{
		ft_putnbr(ret[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}

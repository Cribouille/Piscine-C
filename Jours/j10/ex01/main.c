/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 14:35:21 by efichot           #+#    #+#             */
/*   Updated: 2016/09/12 14:41:19 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);

void	ft_foreach(int *tab, int length, void (*f)(int));

int		main()
{
	int		tab[6] = {1, 3, 4, 6 ,8 ,9};

	ft_foreach(tab, 6, &ft_putnbr);
	return (0);
}

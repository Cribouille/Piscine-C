/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 10:12:13 by efichot           #+#    #+#             */
/*   Updated: 2016/09/02 14:09:33 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		ret;

	ret = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		ret *= nb;
		nb--;
	}
	return (ret);
}

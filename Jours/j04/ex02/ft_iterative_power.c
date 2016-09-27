/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 12:24:30 by efichot           #+#    #+#             */
/*   Updated: 2016/09/02 13:05:55 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		ret;

	ret = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power != 1)
	{
		ret *= nb;
		power--;
	}
	return (ret);
}

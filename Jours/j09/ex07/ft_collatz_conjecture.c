/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 14:56:30 by efichot           #+#    #+#             */
/*   Updated: 2016/09/09 15:12:17 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (1);
	if (base % 2 == 0)
		return (1 + ft_collatz_conjecture(base / 2));
	else if (base % 2 == 1)
		return (1 + ft_collatz_conjecture(base * 3 + 1));
	return (0);
}

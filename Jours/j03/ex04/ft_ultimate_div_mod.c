/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 16:08:41 by efichot           #+#    #+#             */
/*   Updated: 2016/09/02 11:18:31 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		tmpdiv;
	int		tmpmod;

	if (*b != 0)
	{
		tmpdiv = *a / *b;
		tmpmod = *a % *b;
		*a = tmpdiv;
		*b = tmpmod;
	}
}

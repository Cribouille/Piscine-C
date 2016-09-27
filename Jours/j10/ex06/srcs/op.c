/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 16:54:44 by efichot           #+#    #+#             */
/*   Updated: 2016/09/12 19:30:32 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

int		add(int nb, int nb2)
{
	return (nb + nb2);
}

int		sous(int nb, int nb2)
{
	return (nb - nb2);
}

int		mul(int nb, int nb2)
{
	return (nb * nb2);
}

int		div(int nb, int nb2)
{
	return (nb / nb2);
}

int		mod(int nb, int nb2)
{
	return (nb % nb2);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 18:47:06 by efichot           #+#    #+#             */
/*   Updated: 2016/09/13 20:21:15 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int		i;
	t_list				*list;

	if (nbr <= 0)
		return (NULL);
	list = begin_list;
	i = 0;
	while (i < nbr && list)
	{
		list = list->next;
		i++;
	}
	return (list);
}

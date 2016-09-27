/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 20:07:13 by efichot           #+#    #+#             */
/*   Updated: 2016/09/14 21:13:58 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*list;
	t_list	*bebe;
	t_list	*tmp;

	list = *begin_list->next;
	bebe = *begin_list;
	bebe->next = NULL;
	while (list)
	{
		tmp = list->next;
		list->next = bebe;
		bebe = list;
		list = tmp;
	}
}

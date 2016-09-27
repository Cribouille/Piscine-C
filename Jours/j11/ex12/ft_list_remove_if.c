/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 22:14:35 by efichot           #+#    #+#             */
/*   Updated: 2016/09/14 22:31:34 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*list;
	t_list	*tmp;

	list = *begin_list;
	while (list)
	{
		tmp = list;
		if ((*cmp)(list->data, data_ref) == 0)
			free(list);
		list = tmp->next;
	}
}

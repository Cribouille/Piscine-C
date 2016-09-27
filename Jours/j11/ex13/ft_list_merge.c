/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 22:33:25 by efichot           #+#    #+#             */
/*   Updated: 2016/09/14 22:37:22 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*list1;
	t_list	*list2;

	list1 = *begin_list1;
	list2 = begin_list2;
	while (list1 && list2)
	{
		
		list2 = list2->next;
		list1 = list1->next;
	}
}

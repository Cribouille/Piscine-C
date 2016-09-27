/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 18:20:23 by efichot           #+#    #+#             */
/*   Updated: 2016/09/13 18:43:18 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*list;
	t_list	*tmp;

	list = *begin_list;
	while (list)
	{
		tmp = list->next;
		free(list);
		list = tmp;
	}
	*begin_list = NULL;
}

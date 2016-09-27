/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 14:17:03 by efichot           #+#    #+#             */
/*   Updated: 2016/09/13 16:03:25 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_putstr(char *str);

void	ft_list_push_back(t_list **begin_list, void *data);

int		main()
{
	t_list	*list1 = ft_create_elem("prem");
	t_list	**begin_list = NULL;

	*begin_list = list1;
	ft_list_push_back(begin_list, "last");
	ft_putstr("a");
	while (list1)
		list1 = list1->next;
	ft_putstr(list1->data);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 17:13:57 by efichot           #+#    #+#             */
/*   Updated: 2016/09/14 21:30:23 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	int		i;
	t_list	*tmp;

	i = 1;
	tmp = NULL;
	if (ac > 1)
	{
		while (i < ac)
		{
			list = ft_create_elem(av[i]);
			list->next = tmp;
			tmp = list;
			i++;
		}
		return (list);
	}
	return (tmp);
}

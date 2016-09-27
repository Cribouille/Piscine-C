/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 13:37:17 by efichot           #+#    #+#             */
/*   Updated: 2016/09/13 14:58:03 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_putnbr(int nb);

t_list	*ft_create_elem(void *data);

int		main()
{
	int		a;
	int *p;
	p = &a;
	t_list	*list = ft_create_elem(*p);
	int b = list->data;
	ft_putnbr(b);
	return (0);
}

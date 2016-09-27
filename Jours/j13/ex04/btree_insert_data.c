/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 12:44:59 by efichot           #+#    #+#             */
/*   Updated: 2016/09/15 23:28:04 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
int (*cmpf)(void *, void *))
{
	t_btree		*node;
	t_btree		*new;

	node = *root;
	if (!(node))
	{
		new = btree_create_node(item);
		*root = new;
	}
	else
	{
		if ((*cmpf)(item, node->item) >= 0)
			btree_insert_data(&(node->right), item, cmpf);
		else
			btree_insert_data(&(node->left), item, cmpf);
	}
}

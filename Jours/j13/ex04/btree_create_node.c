/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 11:03:10 by efichot           #+#    #+#             */
/*   Updated: 2016/09/15 17:45:43 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*node;

	node = (t_btree*)malloc(sizeof(t_btree));
	if (node)
	{
		node->left = NULL;
		node->right = NULL;
		node->item = item;
	}
	return (node);
}

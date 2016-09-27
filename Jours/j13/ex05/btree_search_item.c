/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 17:41:13 by efichot           #+#    #+#             */
/*   Updated: 2016/09/15 23:01:38 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
int (*cmpf)(void *, void *))
{
	t_btree	*node;

	node = root;
	if (node->left)
		btree_search_item(node->left, data_ref, cmpf);
	if (cmpf(node->item, data_ref) == 0)
		return (node);
	if (node->right)
		btree_search_item(node->right, data_ref, cmpf);
	return (NULL);
}

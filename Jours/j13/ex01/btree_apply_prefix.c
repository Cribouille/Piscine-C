/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 11:14:42 by efichot           #+#    #+#             */
/*   Updated: 2016/09/15 18:04:04 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void*))
{
	t_btree	*node;

	node = root;
	if (node)
	{
		applyf(node->item);
		if (node->left)
			btree_apply_prefix(node->left, applyf);
		if (node->right)
			btree_apply_prefix(node->right, applyf);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 12:37:39 by efichot           #+#    #+#             */
/*   Updated: 2016/09/15 18:04:54 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	t_btree	*node;

	node = root;
	if (node)
	{
		if (node->left)
			btree_apply_suffix(node->left, applyf);
		if (node->right)
			btree_apply_suffix(node->right, applyf);
		applyf(node->item);
	}
}

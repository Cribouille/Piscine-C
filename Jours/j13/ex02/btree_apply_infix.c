/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 12:27:23 by efichot           #+#    #+#             */
/*   Updated: 2016/09/15 18:04:32 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void*))
{
	t_btree	*node;

	node = root;
	if (node)
	{
		if (node->left)
			btree_apply_infix(node->left, applyf);
		applyf(node->item);
		if (node->right)
			btree_apply_infix(node->right, applyf);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 23:08:11 by efichot           #+#    #+#             */
/*   Updated: 2016/09/16 14:54:50 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		btree_level_count(t_btree *root)
{
	static int	count = 0;
	static int	max = 0;
	t_btree		*node;

	node = root;
	if (root)
	{
		if (node->left)
		{
			count++;
			btree_level_count(node->left);
			if (count > max)
				max = count;
		}
		if (node->right)
		{
			count++;
			btree_level_count(node->right);
			if (count > max)
				max = count;
		}
	}
	return (count);
}

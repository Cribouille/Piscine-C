/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 19:38:47 by efichot           #+#    #+#             */
/*   Updated: 2016/09/15 22:17:35 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(char *, char *));

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
		}
	return (0);
}

void	ft_print_tree(t_btree *root)
{
	t_btree	*node;

	node = root;
	if (node)
	{
		if (node->left)
			ft_print_tree(node->left);
		ft_putstr(node->item);
		ft_putchar('\n');
		if (node->right)
			ft_print_tree(node->right);
	}
}

t_btree	*btree_create_node(char *item)
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

int		main()
{
	t_btree		*papi;
	t_btree		*maman;
	t_btree		*papa;

	papi = btree_create_node("ccc");
	maman = btree_create_node("bbb");
	papa = btree_create_node("ddd");
	papi->left = maman;
	papi->right = papa;
	btree_insert_data(&papi, "cac", &ft_strcmp);
	ft_print_tree(papi);
}

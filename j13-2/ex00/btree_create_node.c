/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 17:13:58 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/20 17:52:52 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *tree;

	tree = NULL;
	tree = (t_btree*)malloc(sizeof(tree));
	if (tree)
	{
		tree->left = 0;
		tree->right = 0;
		tree->item = item;
	}
	return (tree);
}

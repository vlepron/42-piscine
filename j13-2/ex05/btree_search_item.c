/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 19:38:26 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/22 09:59:00 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	if (root)
	{
		if (root->left)
			btree_search_item(root->left, data_ref, cmpf);
		if ((*cmpf)(data_ref, root->item) == 0)
			return (root->item);
		if (root->right)
			btree_search_item(root->right, data_ref, cmpf);
	}
	return (NULL);
}

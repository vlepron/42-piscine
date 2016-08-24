/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 15:09:51 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/18 17:32:32 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *l;

	l = begin_list;
	while (l)
	{
		if ((*cmp)(l->data, data_ref) == 0)
			return (l);
		l = l->next;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 15:47:40 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/20 14:23:56 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_remove(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list			*l;
	t_list			*tmp;
	t_list			*last;

	l = *begin_list;
	while (list != NULL)
	{
		if ((*cmp)(l->data, data_ref) == 0)
		{
			if (l == *begin_list)
				*begin_list = l->next;
			else
				last->next = l->next;
			tmp = l;
			l = l->next;
			free(tmp);
		}
		else
		{
			last = l;
			l = l->next;
		}
	}
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if (*begin_list != NULL)
	{
		ft_remove(begin_list, data_ref, cmp);
	}
}

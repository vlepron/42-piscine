/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 15:05:00 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/18 20:28:55 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
			void *data_ref, int (*cmp)())
{
	t_list *l;

	l = begin_list;
	while (l)
	{
		if ((*cmp)(l->data, data_ref) == 0)
			(*f)(l->data);
		l = l->next;
	}
}

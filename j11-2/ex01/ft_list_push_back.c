/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 21:40:41 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/18 14:04:12 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *l;

	l = *begin_list;
	if (l)
	{
		while (l->next)
			l = l->next;
		l->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}

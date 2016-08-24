/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 21:49:42 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/18 11:47:23 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *l;

	if (*begin_list)
	{
		l = ft_create_elem(data);
		l->next = *begin_list;
		*begin_list = l;
	}
	else
		*begin_list = ft_create_elem(data);
}

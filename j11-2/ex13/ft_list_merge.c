/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 16:22:26 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/18 20:11:58 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *l;

	l = *begin_list1;
	if (l)
	{
		while (l->next)
			l = l->next;
		l->next = begin_list2;
	}
	else
		*begin_list1 = begin_list2;
}

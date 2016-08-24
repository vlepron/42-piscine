/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 11:51:51 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/18 20:25:33 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *l;
	t_list *l2;
	t_list *tmp;

	l2 = NULL;
	l = NULL;
	tmp = *begin_list;
	while (tmp)
	{
		l = l2;
		l2 = tmp;
		tmp = tmp->next;
		l2->next = l;
	}
	*begin_list = l2;
}

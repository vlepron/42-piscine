/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 17:09:09 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/19 15:06:07 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	void	*data_tmp;
	t_list	*l;
	int		bl;

	bl = 0;
	l = *begin_list;
	while (bl)
	{
		bl = 0;
		while (l->next)
		{
			if ((*cmp)(l->data, l->next->data) > 0)
			{
				bl = 1;
				data_tmp = l->data;
				l->next->data = data_tmp;
				l->data = l->next->data;
			}
			l = l->next;
		}
		l = *begin_list;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 11:25:44 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/20 14:13:39 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *l;

	l = *begin_list;
	while (*begin_list)
	{
		l = (*begin_list)->next;
		free(l);
		*begin_list = l;
	}
	*begin_list = 0;
}

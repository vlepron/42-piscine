/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 10:28:22 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/18 10:40:40 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		cpt;
	t_list	*l;

	cpt = 0;
	l = begin_list;
	while (l)
	{
		l = l->next;
		cpt++;
	}
	return (cpt);
}

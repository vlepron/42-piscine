/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 19:59:10 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/18 10:44:14 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list *l;

	l = NULL;
	l = malloc(sizeof(t_list));
	if (l)
	{
		l->data = data;
		l->next = NULL;
	}
	return (l);
}

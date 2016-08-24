/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 10:38:12 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/18 17:40:05 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*l;
	t_list	*tmp;

	if (ac == 0)
		return (NULL);
	i = 0;
	l = ft_create_elem(av[i]);
	i++;
	while (i < ac)
	{
		tmp = ft_create_elem(av[i]);
		tmp->next = l;
		l = tmp;
		i++;
	}
	return (l);
}

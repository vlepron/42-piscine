/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 10:46:38 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/17 18:34:49 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *t;

	t = (int*)malloc(sizeof(int) * (length + 1));
	i = 0;
	while (i < length)
	{
		t[i] = f(tab[i]);
		i++;
	}
	return (t);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 10:37:30 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/13 10:39:29 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *t;
	int j;

	if (min >= max)
		return (0);
	i = max - min;
	t = (int*)malloc(sizeof(int) * (i));
	j = 0;
	while (min < max)
	{
		t[j] = min;
		min++;
		j++;
	}
	*range = t;
	return (i);
}

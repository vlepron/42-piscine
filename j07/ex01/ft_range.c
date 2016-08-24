/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 18:17:50 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/13 10:29:38 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *t;
	int j;

	if (min >= max)
		return (NULL);
	i = max - min;
	t = (int*)malloc(sizeof(int) * (i));
	j = 0;
	while (min < max)
	{
		t[j] = min;
		min++;
		j++;
	}
	return (t);
}

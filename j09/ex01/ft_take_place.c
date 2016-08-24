/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_place.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 20:36:52 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/11 21:28:09 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	char	c;
	char	d;
	int		a;

	hour = hour % 24;
	if (hour < 24 && hour >= 12)
	{
		c = 'P';
		d = 'P';
		(hour == 23) ? d = 'A' : 'P';
		(hour > 12) ? hour -= 12 : 0;
		a = hour + 1;
		(hour == 12) ? a = 1 : hour + 1;
	}
	else
	{
		c = 'A';
		d = 'A';
		a = hour + 1;
		(hour == 11) ? d = 'P' : 'A';
		if (hour == 0)
			hour += 12;
	}
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %c.M. AND %d.00 %c.M.\n",
			hour, c, a, d);
}

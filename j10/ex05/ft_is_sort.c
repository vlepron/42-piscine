/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 11:05:45 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/17 19:20:15 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int bl;
	int bl2;

	if (length == 0)
		return (1);
	i = 0;
	bl = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			bl = 1;
		i++;
	}
	i = 0;
	bl2 = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			bl2 = 1;
		i++;
	}
	if (bl == 0 || bl2 == 0)
		return (1);
	return (0);
}

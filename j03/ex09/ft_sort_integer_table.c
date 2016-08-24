/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 10:23:00 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/07 15:49:01 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 1;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			temp = 0;
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j] - tab[j + 1];
				tab[j] -= temp;
				tab[j + 1] += temp;
			}
			j++;
		}
		i++;
	}
}

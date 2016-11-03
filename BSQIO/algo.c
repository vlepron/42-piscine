/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 21:59:30 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/24 18:22:19 by apetitje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

void	ft_process_map(char *str, t_map *tmap)
{
	char	**map;

	map = ft_split_map(str, tmap);
	if (map == NULL || tmap->error == 1)
		return ;
	if (tmap->nb_line > tmap->nb_col)
		tmap->length = tmap->nb_col;
	else
		tmap->length = tmap->nb_line;
	if (ft_try(map, tmap))
		map = ft_fill_square(map, tmap);
	free(map);
}

int		check_square(char **map, t_map *tmap)
{
	int i;
	int j;
	int i_0;
	int j_0;

	i = tmap->index / tmap->nb_col;
	i_0 = i + tmap->length;
	j_0 = tmap->index % tmap->nb_col;
	while (i < i_0)
	{
		j = j_0;
		while (j < j_0 + tmap->length)
		{
			if (map[i][j] == tmap->obs || map[i][j] == '\n')
			{
				tmap->index += j - tmap->index % tmap->nb_col + 1;
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int		ft_try(char **map, t_map *tmap)
{
	int index_max;

	index_max = tmap->nb_col * tmap->nb_line;
	tmap->index = 0;
	while (tmap->length > 0 && tmap->index <= index_max)
	{
		if (check_square(map, tmap) == 0)
			return (1);
		if (tmap->length > tmap->nb_col - tmap->index % tmap->nb_col)
			tmap->index += tmap->nb_col - tmap->index % tmap->nb_col;
		if (tmap->length > tmap->nb_line - tmap->index / tmap->nb_col)
		{
			tmap->index = 0;
			tmap->length -= 1;
		}
	}
	return (0);
}

char	**ft_fill_square(char **map, t_map *tmap)
{
	int i;
	int j;
	int i_0;
	int j_0;

	i = tmap->index / tmap->nb_col;
	i_0 = i + tmap->length;
	j_0 = tmap->index % tmap->nb_col;
	while (i < i_0)
	{
		j = j_0;
		while (j < j_0 + tmap->length && map[i][j] != '\n')
		{
			map[i][j] = tmap->full;
			j++;
		}
		i++;
	}
	return (map);
}

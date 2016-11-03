/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetitje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 18:24:21 by apetitje          #+#    #+#             */
/*   Updated: 2016/08/24 18:05:31 by apetitje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_is_error(char *str, t_map *tmap)
{
	if (tmap->error == 1)
		write(2, "map error\n", 10);
	else
		ft_show_tab(str, tmap);
}

void	ft_show_tab(char *str, t_map *tmap)
{
	int		i;

	i = 0;
	write(1, str, (tmap->nb_col + 1) * tmap->nb_line);
}

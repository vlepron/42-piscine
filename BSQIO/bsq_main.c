/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetitje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 15:36:14 by apetitje          #+#    #+#             */
/*   Updated: 2016/08/24 18:06:11 by apetitje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int		main(int argc, char **argv)
{
	int		i;
	t_map	tmap;

	i = 0;
	tmap.error = 0;
	tmap.index = 0;
	ft_read_input(argc, argv, i, &tmap);
	return (0);
}

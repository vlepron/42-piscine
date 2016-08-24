/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 20:50:29 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/16 11:12:10 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

char				*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i])
		i++;
	dest = (char*)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int					ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

struct	s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*tstk;
	int			i;

	tstk = (t_stock_par*)malloc(sizeof(*tstk) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		tstk[i].size_param = ft_strlen(av[i]);
		tstk[i].copy = ft_strdup(av[i]);
		tstk[i].str = av[i];
		tstk[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	tstk[i].str = 0;
	return (tstk);
}

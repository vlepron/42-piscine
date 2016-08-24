/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 17:15:19 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/16 15:24:31 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_table(char *str)
{
	int cpt;

	cpt = 0;
	while (*str)
	{
		while (*str == ' ' || *str == '\n' || *str == '\t')
			str++;
		if (*str)
			cpt++;
		while (*str && (!(*str == ' ' || *str == '\n' || *str == '\t')))
			str++;
	}
	return (cpt);
}

int		count_letter(char *str)
{
	int i;

	i = 0;
	while (*str && (!(*str == ' ' || *str == '\n' || *str == '\t')))
	{
		i++;
		str++;
	}
	return (i);
}

int		ft_cpy(char *dest, char *str)
{
	int i;

	i = 0;
	while (*str && (!(*str == ' ' || *str == '\n' || *str == '\t')))
	{
		*dest = *str;
		i++;
		dest++;
		str++;
	}
	*dest = '\0';
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		sp;

	sp = 0;
	if (!(tab = (char**)malloc(sizeof(*tab) * (ft_table(str) + 1))))
		return (NULL);
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t'))
		str++;
	while (*str)
	{
		if (!(tab[sp] = (char*)malloc(sizeof(**tab) * (count_letter(str) + 1))))
			return (NULL);
		str += ft_cpy(tab[sp], str);
		sp++;
		while (*str && (*str == ' ' || *str == '\n' || *str == '\t'))
			str++;
	}
	tab[sp] = 0;
	return (tab);
}

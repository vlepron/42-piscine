/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 10:58:34 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/17 15:56:25 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int cpt;

	i = 0;
	cpt = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			cpt++;
		i++;
	}
	return (cpt);
}
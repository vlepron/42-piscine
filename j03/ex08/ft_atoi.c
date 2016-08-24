/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 18:59:42 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/08 09:47:18 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_skip_spaces(char *str);

int		ft_atoi(char *str)
{
	int		i;
	int		s;
	int		nbr;

	nbr = 0;
	s = 1;
	i = ft_skip_spaces(str);
	if (str[i] == 45)
	{
		s = -1;
		i++;
	}
	else if (str[i] == 43)
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		nbr = nbr * 10 + (str[i] - 48);
		i++;
	}
	nbr = (nbr * s);
	return (nbr);
}

int		ft_skip_spaces(char *str)
{
	int i;

	i = 0;
	while (str[i] == 32)
		i++;
	return (i);
}

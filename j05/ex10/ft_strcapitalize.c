/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 18:18:35 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/10 16:14:37 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_anm(char c)
{
	if ((c >= 48 && c <= 57) ||
		(c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (str[i] < 123 && str[i] > 96)
		str[i] -= 32;
	i++;
	while (str[i])
	{
		if (ft_is_anm(str[i - 1]) == 0 && str[i] < 123 && str[i] > 96)
			str[i] -= 32;
		if (ft_is_anm(str[i - 1]) == 1 && str[i] <= 90 && str[i] >= 65)
			str[i] += 32;
		i++;
	}
	return (str);
}

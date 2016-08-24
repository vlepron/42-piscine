/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 15:45:34 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/12 15:49:55 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int j;
	int bl_found;

	bl_found = 0;
	if (!*to_find)
		return (str);
	while (*str && !bl_found)
	{
		if (*to_find == *str)
		{
			j = 0;
			bl_found = 1;
			while (to_find[j])
			{
				if (*(str + j) != to_find[j])
					bl_found = 0;
				j++;
			}
		}
		str++;
	}
	return (bl_found ? str - 1 : 0);
}

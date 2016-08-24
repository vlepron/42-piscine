/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 10:36:29 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/17 10:42:07 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		count_letters(char *argv)
{
	int cpt;

	cpt = 0;
	while (argv[cpt])
	{
		cpt++;
	}
	return (cpt + 1);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str;

	j = 0;
	i = 1;
	while (i < argc)
	{
		j += count_letters(argv[i]);
		i++;
	}
	str = (char*)malloc(sizeof(str) * j);
	i = 1;
	while (i < argc)
	{
		if (i == 1)
			ft_strcpy(str, argv[i]);
		else if (i < argc)
			ft_strcat(str, argv[i]);
		if (i + 1 != argc)
			ft_strcat(str, "\n");
		i++;
	}
	return (str);
}

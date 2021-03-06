/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 13:46:43 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/08 09:48:24 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	c;
	int		l;
	int		n;

	n = 0;
	l = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	n--;
	while (l <= n)
	{
		c = str[n];
		str[n] = str[l];
		str[l] = c;
		n--;
		l++;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_use.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 16:41:30 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/22 11:32:27 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"
#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		write(2, &str[n], 1);
		n++;
	}
}

int		ft_putstr2(char *str, int i, int ac)
{
	int n;
	int fd;

	n = 0;
	fd = (open(str, O_RDONLY));
	if (fd == -1)
	{
		write(2, "tail: ", 6);
		ft_putstr(str);
		write(2, ": No such file or directory\n", 28);
		return (0);
	}
	close(fd);
	if (ac > 4)
	{
		if (i > 3)
			write(1, "\n", 1);
		write(1, "==> ", 4);
		while (str[n] != '\0')
		{
			write(1, &str[n], 1);
			n++;
		}
		write(1, " <==\n", 5);
	}
	return (0);
}

int		ft_atoi(char *str)
{
	int		i;
	int		nbr;

	nbr = 0;
	i = 0;
	if (str[i] == 45)
	{
		i++;
	}
	else if (str[i] == 43)
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		nbr = nbr * 10 + (str[i] - 48);
		i++;
	}
	return (nbr);
}

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (((unsigned char)s1[i] == (unsigned char)s2[i]) || (s1[i] == s2[i]))
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

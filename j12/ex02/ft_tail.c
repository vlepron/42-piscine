/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 15:06:28 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/22 11:33:00 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int		ft_check(char *str, char *str2)
{
	int		i;

	i = 0;
	if (ft_strcmp(str, "-c"))
	{
		str += 2;
		write(2, "tail: illegal offset -- ", 24);
		ft_putstr(str);
		write(2, "\n", 1);
		return (1);
	}
	while (str2[i])
	{
		if (!((str2[i] >= '0' && str2[i] <= '9') || str2[0] == '-' ||
			str2[0] == '+'))
		{
			write(2, "tail: illegal offset -- ", 24);
			ft_putstr(str2);
			write(2, "\n", 1);
			return (1);
		}
		i++;
	}
	return (0);
}

int		ft_print(char *str, char *nbr)
{
	int		fd;
	char	buf[BUF_SIZE];
	int		i;
	int		n;

	i = 1;
	n = ft_atoi(nbr);
	fd = open(str, O_RDONLY);
	if (fd == -1)
		return (0);
	while (i < n)
	{
		read(fd, &buf, 1);
		i++;
	}
	while (read(fd, &buf, 1))
		write(1, &buf, 1);
	close(fd);
	return (0);
}

int		ft_count(char *str)
{
	int		fd2;
	char	buf[BUF_SIZE];
	int		i;

	i = 0;
	fd2 = open(str, O_RDONLY);
	while (read(fd2, &buf, 1))
		i++;
	close(fd2);
	return (i);
}

int		ft_print_rev(int j, char **av)
{
	int		fd;
	char	buf[BUF_SIZE];
	int		i;
	int		n;

	i = 1;
	fd = open(av[j], O_RDONLY);
	if (fd == -1)
		return (0);
	n = ft_count(av[j]) - ft_atoi(av[2]) + 1;
	while (i < n)
	{
		read(fd, &buf, 1);
		i++;
	}
	while (read(fd, &buf, 1))
		write(1, &buf, 1);
	close(fd);
	return (0);
}

int		main(int ac, char **av)
{
	int i;

	i = 3;
	if (ac < 4 || ft_check(av[1], av[2]))
		return (0);
	if (av[2][0] == '+')
	{
		while (i < ac)
		{
			(ac > 4 ? ft_putstr2(av[i], i, ac) : 0);
			ft_print(av[i], av[2]);
			i++;
		}
	}
	else if (av[2][0] == '-' || (av[2][0] <= '9' && av[2][0] >= '0'))
	{
		write(1, "", 1);
		while (i < ac)
		{
			ft_putstr2(av[i], i, ac);
			ft_print_rev(i, av);
			i++;
		}
	}
	return (0);
}

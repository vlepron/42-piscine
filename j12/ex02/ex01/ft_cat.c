/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 13:21:16 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/19 16:05:30 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 30000

void	ft_putstr(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		write(1, &str[n], 1);
		n++;
	}
}

int		ft_print(char *str)
{
	int		fd;
	char	buf[BUF_SIZE];

	fd = open(str, O_RDONLY);
	if (fd == -1)
	{
		write(1, "cat: ", 5);
		ft_putstr(str);
		write(1, ": No such file or directory\n", 28);
		return (0);
	}
	while (read(fd, &buf, 1))
		write(1, &buf, 1);
	close(fd);
	return (0);
}

int		main(int ac, char **av)
{
	int		i;
	char	buf[BUF_SIZE];

	i = 1;
	if (ac == 1)
	{
		while (read(0, &buf, 1))
			write(1, &buf, 1);
		return (0);
	}
	if (ac < 2)
		return (0);
	while (i < ac)
	{
		ft_print(av[i]);
		i++;
	}
	return (0);
}

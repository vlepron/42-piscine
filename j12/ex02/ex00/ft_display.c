/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 12:22:41 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/19 16:05:10 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int		main(int ac, char **av)
{
	int		fd;
	char	*buf;

	if (ac != 2)
	{
		if (ac < 2)
			write(1, "File name missing.\n", 19);
		else
			write(1, "Too many arguments.\n", 20);
		return (0);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		return (0);
	while (read(fd, &buf, 1))
		write(1, &buf, 1);
	close(fd);
	return (0);
}

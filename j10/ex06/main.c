/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 12:45:12 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/17 15:25:16 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_opp.h"

int		ft_atoi(char *str)
{
	int		i;
	int		s;
	int		nbr;

	nbr = 0;
	s = 1;
	i = 0;
	while (str[i] == 32)
		i++;
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

void	ft_putnbr(int nb)
{
	long int n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		ft_putchar(n + 48);
	}
}

void	ft_putstr(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		ft_putchar(str[n]);
		n++;
	}
}

void	ft_usage(int a, int b)
{
	a = b;
	write(1, "0\n", 2);
}

int		main(int ac, char **av)
{
	int a;
	int b;
	int i;
	int bl;

	i = 0;
	bl = 0;
	if (ac != 4)
	{
		ft_putchar('\n');
		return (0);
	}
	a = ft_atoi(av[1]);
	b = ft_atoi(av[3]);
	while (i < 5)
	{
		if (ft_strcmp(av[2], g_opptab[i].str) == 0)
		{
			bl = 1;
			g_opptab[i].f(a, b);
		}
		i++;
	}
	(!bl ? g_opptab[5].f(a, b) : 0);
	return (0);
}

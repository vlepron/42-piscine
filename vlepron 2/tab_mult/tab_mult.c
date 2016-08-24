/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 19:58:52 by exam              #+#    #+#             */
/*   Updated: 2016/08/19 19:59:18 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	if(nb>=10)
		ft_putnbr(nb/10);
	char c= nb%10 +48;
	write(1, &c,1);
}

int		main(int ac, char **av)
{
	int i = 1;
	int j = 0;
	int nbr=0;
	if (ac != 2)
	{
		write(1,"\n",1);
		return (0);
	}
	while(av[1][j])
	{
		nbr = nbr * 10 + (av[1][j] - 48);
		j++;
	}
	while (i <= 9)
	{
		ft_putnbr(i);
		write(1," x ",3);
		ft_putnbr(nbr);
		write (1," = ", 3);
		ft_putnbr(nbr*i);
		write(1,"\n",1);
		i++;
	}
	return(0);
}

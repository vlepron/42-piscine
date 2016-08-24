/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 20:54:50 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/03 22:37:50 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_reverse_alphabet(void)
{
	char ch;

	ch = 'z';
	while(ch>='a')
	{
		ft_putchar(ch);
		ch--;
	}
}

int		main(void)
{
	ft_print_reverse_alphabet();
	return(0);
}

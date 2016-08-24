/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 13:22:22 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/04 22:35:38 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_putchar(char c)
{
	    write(1, &c, 1);
		    return (0);
}

void	ft_print_alphabet(void)
{
	char ch;

	ch = 'a';
	while(ch<='z')
	{
		ft_putchar(ch);
		ch++;
	}
			
}

int main(void)
{
	ft_print_alphabet();
	return(0);

}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 13:01:27 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/06 23:23:23 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_commas_spaces(char n, char m, char l)
{
	if (n == 55 && m == 56 && l == 57)
	{
		ft_putchar(n);
		ft_putchar(m);
		ft_putchar(l);
	}
	else
	{
		ft_putchar(n);
		ft_putchar(m);
		ft_putchar(l);
		ft_putchar(44);
		ft_putchar(32);
	}
}

void	ft_print_comb(void)
{
	char n1;
	char n2;
	char n3;

	n1 = 48;
	while (n1 <= 55)
	{
		n2 = 49;
		while (n2 <= 56)
		{
			n3 = 50;
			while (n3 <= 57)
			{
				if (n1 < n2 && n2 < n3)
				{
					ft_commas_spaces(n1, n2, n3);
				}
				n3++;
			}
			n2++;
		}
		n1++;
	}
}

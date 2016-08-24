/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 14:25:53 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/17 14:28:49 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OPP_H
# define FT_OPP_H

# include <unistd.h>

void				ft_add(int a, int b);
void				ft_sub(int a, int b);
void				ft_mul(int a, int b);
void				ft_sub(int a, int b);
void				ft_div(int a, int b);
void				ft_mod(int a, int b);
void				ft_usage(int a, int b);
void				ft_putnbr(int nb);
void				ft_putstr(char *str);
void				ft_putchar(char c);
int					ft_strcmp(char *s1, char *s2);

typedef struct		s_opp
{
	char *str;
	void (*f)(int, int);
}					t_opp;

t_opp				g_opptab[] =
{
	{"+", &ft_add},
	{"-", &ft_sub},
	{"*", &ft_mul},
	{"/", &ft_div},
	{"%", &ft_mod},
	{"", &ft_usage},
};
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opps.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 16:01:14 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/17 16:09:58 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OPPS_H
# define FT_OPPS_H

# include <unistd.h>

void			ft_add(int a, int b);
void			ft_sub(int a, int b);
void			ft_mul(int a, int b);
void			ft_sub(int a, int b);
void			ft_div(int a, int b);
void			ft_mod(int a, int b);
void			ft_usage(int a, int b);
void			ft_putnbr(int nb);
void			ft_putstr(char *str);
void			ft_putchar(char c);
int				ft_strcmp(char *s1, char *s2);

typedef struct	s_opp
{
	char *str;
	void (*f)(int, int);
}				t_opp;
#endif

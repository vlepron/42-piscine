/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 16:46:58 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/22 11:32:36 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H

# include <unistd.h>
# include <fcntl.h>
# define BUF_SIZE 10

int		ft_atoi(char *str);
int		ft_putstr2(char *str, int i, int ac);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);

#endif

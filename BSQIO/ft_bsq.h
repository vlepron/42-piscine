/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetitje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 15:39:50 by apetitje          #+#    #+#             */
/*   Updated: 2016/08/25 15:08:15 by apetitje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BSQ_H
# define FT_BSQ_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>

# define BUFFSIZE	100000

typedef struct	s_map
{
	int			index;
	int			length;
	int			error;
	int			nb_line;
	int			nb_col;
	char		empty;
	char		full;
	char		obs;
}				t_map;

void			ft_is_error(char *str, t_map *tmap);
void			ft_putchar(char c);
void			ft_putstr(char *str);
char			*ft_strcat(char *dest, char *src);
void			ft_process_map(char *str, t_map *tmap);
char			**ft_split_map(char *str, t_map *tmap);
void			ft_read_input(int argc, char **argv, int i, t_map *tmap);
int				ft_strcmp(char *s1, char *s2);
char			*ft_strcpy(char *dest, char *src);
int				ft_atoi(char *str, t_map *tmap);
int				line_len(char *str);
int				ft_strlen(char *str);
char			**ft_fill_square(char **map, t_map *tmap);
int				ft_try(char **map, t_map *tmap);
void			ft_show_tab(char *str, t_map *tmap);

#endif

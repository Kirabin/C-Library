/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 13:58:48 by dmilan            #+#    #+#             */
/*   Updated: 2020/08/09 23:08:09 by lmurray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_shape
{
	char			*shape;
	int				rows;
	int				cols;
}					t_shape;

char				**create_tmp_array(int i, int j);
void				count_arr_elem(char **arr, int *i, int *j);
int					compare_arr(char **arr_tmp, char **arr, int i, int j);
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int nbr);
char				**ft_endl_split(char *str);
char				*get_input();
void				print_shapes(t_shape **shapes);
void				print_tmp(char **arr_tmp, int i, int j);
t_shape				**find_shapes(char **arr);

t_shape				*rush_00(char **arr);
t_shape				*rush_01(char **arr);
t_shape				*rush_02(char **arr);
t_shape				*rush_03(char **arr);
t_shape				*rush_04(char **arr);

#endif

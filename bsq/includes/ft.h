/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 10:42:49 by dmilan            #+#    #+#             */
/*   Updated: 2020/08/12 18:24:15 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <stdlib.h>

typedef struct	s_map
{
	int			rows;
	int			cols;
	char		empty;
	char		obstacle;
	char		full;
	char		**map;
}				t_map;

typedef struct	s_max_size
{
	int			value;
	int			i;
	int			j;

}				t_max_size;

typedef struct	s_input
{
	int			n;
	char		**lines;
}				t_input;

typedef struct	s_valid
{
	int			n_rows;
	int			n_position;
}				t_valid;

int				count_endl(char *str);
char			*ft_strncpy(char *str, int n);
int				next_occurence(char *str, char c);
int				ft_atoi(char *str);
t_input			*split_input(char *input);
void			ft_putchar_fd(int fd, char c);
int				is_valid_map(char *str);
t_map			*get_entry_map(int fd);
void			ft_putstr_fd(int fd, char *str);
void			ft_putnbr_fd(int fd, int nbr);
void			print_map(t_map *map);
void			print_map_args(t_map *map);
void			print_size_map(int **size_map, int rows, int cols);
int				ft_strlen(char *str);
void			bsq(t_input *input);
void			free_map(t_map *map);
void			free_size_map(int **size_map, int rows);
t_valid			get_rows_positions(char *str);
int				check_obstacle(char *str, int sel_nb);

#endif

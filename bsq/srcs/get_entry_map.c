/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_entry_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarash <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 11:17:24 by pmarash           #+#    #+#             */
/*   Updated: 2020/08/12 19:32:29 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

#define SIZE 25010000

t_map	*parce_args(t_input *input)
{
	int		line_len;
	t_map	*map;

	map = malloc(sizeof(t_map));
	line_len = ft_strlen(input->lines[0]);
	map->rows = ft_atoi(ft_strncpy(input->lines[0], line_len - 3));
	map->map = input->lines + 1;
	map->full = input->lines[0][--line_len];
	map->obstacle = input->lines[0][--line_len];
	map->empty = input->lines[0][--line_len];
	map->cols = ft_strlen(input->lines[1]);
	return (map);
}

t_map	*get_entry_map(int fd)
{
	int			i;
	char		*input_line;
	t_input		*input;

	if (fd == -1)
		return (NULL);
	i = 0;
	input_line = malloc(sizeof(char) * (SIZE + 1));
	while (read(fd, input_line + i, 1))
		i++;
	input_line[i] = '\0';
	if (is_valid_map(input_line))
	{
		input = split_input(input_line);
		free(input_line);
		return (parce_args(input));
	}
	return (NULL);
}

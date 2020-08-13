/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 14:34:10 by dmilan            #+#    #+#             */
/*   Updated: 2020/08/12 17:13:15 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		min(t_map *map, int **size_map, int i, int j)
{
	int		min;

	if (map->map[i][j] == map->obstacle)
		return (-1);
	if (i == 0 || j == 0)
		return (0);
	min = size_map[i - 1][j - 1];
	if (size_map[i][j - 1] < min)
		min = size_map[i][j - 1];
	if (size_map[i - 1][j] < min)
		min = size_map[i - 1][j];
	return (min);
}

void	fill_map(t_map *map, int size, int row, int col)
{
	int		i;
	int		j;

	if (size == 0)
		return ;
	i = row;
	while (i < row + size)
	{
		j = col;
		while (j < col + size)
			map->map[i][j++] = map->full;
		i++;
	}
}

void	solve(t_map *map)
{
	t_max_size	max_size;
	int			**size_map;
	int			i;
	int			j;

	i = -1;
	max_size.value = 0;
	size_map = malloc(sizeof(int *) * map->rows);
	while (++i < map->rows)
	{
		j = -1;
		size_map[i] = malloc(sizeof(int) * map->cols);
		while (++j < map->cols)
		{
			size_map[i][j] = min(map, size_map, i, j) + 1;
			if (size_map[i][j] > max_size.value)
			{
				max_size.value = size_map[i][j];
				max_size.i = i - max_size.value + 1;
				max_size.j = j - max_size.value + 1;
			}
		}
	}
	fill_map(map, max_size.value, max_size.i, max_size.j);
	free_size_map(size_map, map->rows);
}

void	bsq_medium(int fd)
{
	t_map	*map;

	map = get_entry_map(fd);
	if (!map)
		ft_putstr_fd(2, "map error\n");
	else
	{
		solve(map);
		print_map(map);
		free_map(map);
	}
}

void	bsq(t_input *input)
{
	int		fd;
	int		i;

	i = -1;
	if (input->n == 0)
		bsq_medium(0);
	while (++i < input->n)
	{
		fd = open(input->lines[i], O_RDONLY);
		bsq_medium(fd);
		if (i != input->n - 1)
			ft_putchar_fd(1, '\n');
		close(fd);
	}
}

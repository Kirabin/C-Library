/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 12:05:01 by dmilan            #+#    #+#             */
/*   Updated: 2020/08/12 10:59:23 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	print_map_args(t_map *map)
{
	ft_putnbr_fd(1, map->rows);
	ft_putchar_fd(1, ' ');
	ft_putnbr_fd(1, map->cols);
	ft_putchar_fd(1, map->empty);
	ft_putchar_fd(1, map->obstacle);
	ft_putchar_fd(1, map->full);
	ft_putchar_fd(1, '\n');
}

void	print_map(t_map *map)
{
	int i;

	i = 0;
	while (i < map->rows)
	{
		ft_putstr_fd(1, map->map[i]);
		ft_putstr_fd(1, "\n");
		i++;
	}
}

void	print_size_map(int **size_map, int rows, int cols)
{
	int i;
	int j;

	i = -1;
	while (++i < rows)
	{
		j = -1;
		while (++j < cols)
			ft_putnbr_fd(1, size_map[i][j]);
		ft_putchar_fd(1, '\n');
	}
}

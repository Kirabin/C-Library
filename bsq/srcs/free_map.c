/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 16:49:25 by dmilan            #+#    #+#             */
/*   Updated: 2020/08/10 17:39:37 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	free_size_map(int **size_map, int rows)
{
	int i;

	i = 0;
	while (i < rows)
		free(size_map[i++]);
	free(size_map);
}

void	free_map(t_map *map)
{
	int i;

	i = 0;
	while (i < map->rows)
	{
		free(map->map[i]);
		i++;
	}
	free(map);
}

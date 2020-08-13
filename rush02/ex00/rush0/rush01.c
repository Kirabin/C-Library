/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmurray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 18:55:48 by lmurray           #+#    #+#             */
/*   Updated: 2020/08/09 23:08:44 by lmurray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void		rush01(int x, int y, char **arr)
{
	int l;
	int c;

	l = -1;
	while (++l < x)
	{
		c = -1;
		while (++c < y)
		{
			if (l == 0 && c == 0)
				arr[l][c] = '/';
			else if ((c == 0 && l == x - 1) || (c == y - 1 && l == 0))
				arr[l][c] = '\\';
			else if (l == x - 1 && c == y - 1)
				arr[l][c] = '/';
			else if (c == 0 || l == 0 || c == y - 1 || l == x - 1)
				arr[l][c] = '*';
			else
				arr[l][c] = ' ';
		}
	}
}

t_shape		*rush_01(char **arr)
{
	char		**arr_tmp;
	t_shape		*tmp;
	int			i;
	int			j;
	int			t;

	i = 0;
	j = 0;
	tmp = NULL;
	count_arr_elem(arr, &i, &j);
	arr_tmp = create_tmp_array(i, j);
	rush01(i, j, arr_tmp);
	t = compare_arr(arr_tmp, arr, i, j);
	if (!(t))
	{
		tmp = malloc(sizeof(t_shape));
		tmp->shape = malloc(sizeof(char) * 8);
		tmp->shape = "rush-01";
		tmp->rows = i;
		tmp->cols = j;
		return (tmp);
	}
	else
		return (NULL);
}

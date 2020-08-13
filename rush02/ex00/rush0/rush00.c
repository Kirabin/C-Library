/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmurray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 18:55:48 by lmurray           #+#    #+#             */
/*   Updated: 2020/08/09 23:08:36 by lmurray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/*
** this function simulates the output of rush00 for comparison and adds to a
** two-dimensional array
*/

void		rush00(int x, int y, char **arr)
{
	int ln;
	int cl;

	ln = -1;
	while (++ln <= (y - 1) && x > 0 && y > 0)
	{
		cl = -1;
		while (++cl <= (x - 1))
		{
			if ((ln == 0 || ln == y - 1) && (cl == 0 || cl == x - 1))
				arr[cl][ln] = 'o';
			else if (cl == 0 || cl == x - 1)
				arr[cl][ln] = '-';
			else if (ln == 0 || ln == y - 1)
				arr[cl][ln] = '|';
			else
				arr[cl][ln] = ' ';
		}
	}
}

t_shape		*rush_00(char **arr)
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
	rush00(i, j, arr_tmp);
	t = compare_arr(arr_tmp, arr, i, j);
	if (!(t))
	{
		tmp = malloc(sizeof(t_shape));
		tmp->shape = malloc(sizeof(char) * 8);
		tmp->shape = "rush-00";
		tmp->rows = i;
		tmp->cols = j;
		return (tmp);
	}
	else
		return (NULL);
}

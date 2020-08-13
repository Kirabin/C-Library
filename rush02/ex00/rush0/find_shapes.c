/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_shapes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmurray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 15:02:24 by lmurray           #+#    #+#             */
/*   Updated: 2020/08/11 11:44:24 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			count_shapes(char **a)
{
	int		count;

	count = 0;
	if (rush_00(a) != NULL)
		count++;
	if (rush_01(a) != NULL)
		count++;
	if (rush_02(a) != NULL)
		count++;
	if (rush_03(a) != NULL)
		count++;
	if (rush_04(a) != NULL)
		count++;
	return (count);
}

t_shape		**fill_shape(t_shape **arr, char **a)
{
	int j;

	j = 0;
	if (rush_00(a) != NULL)
		arr[j++] = rush_00(a);
	if (rush_01(a) != NULL)
		arr[j++] = rush_01(a);
	if (rush_02(a) != NULL)
		arr[j++] = rush_02(a);
	if (rush_03(a) != NULL)
		arr[j++] = rush_03(a);
	if (rush_04(a) != NULL)
		arr[j++] = rush_04(a);
	return (arr);
}

t_shape		**find_shapes(char **arr)
{
	t_shape		**shapes;
	int			count;
	int			i;
	int			j;

	i = 0;
	j = 0;
	count = count_shapes(arr);
	shapes = malloc(sizeof(t_shape *) * (count + 1));
	shapes = fill_shape(shapes, arr);
	shapes[count] = NULL;
	return (shapes);
}

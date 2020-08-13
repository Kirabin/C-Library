/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_arr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmurray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 00:02:37 by lmurray           #+#    #+#             */
/*   Updated: 2020/08/09 22:20:35 by lmurray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		compare_arr(char **arr_tmp, char **arr, int i, int j)
{
	int i1;
	int j1;

	if (arr_tmp == NULL)
		return (1);
	i1 = 0;
	while (i1 < i)
	{
		j1 = 0;
		while (j1 < j)
		{
			if (arr_tmp[i1][j1] != arr[i1][j1])
			{
				return (1);
			}
			j1++;
		}
		i1++;
	}
	return (0);
}

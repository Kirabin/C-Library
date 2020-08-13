/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_tmp_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmurray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 00:01:47 by lmurray           #+#    #+#             */
/*   Updated: 2020/08/09 22:26:38 by lmurray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**create_tmp_array(int i, int j)
{
	char	**arr_tmp;
	int		k;

	k = 0;
	if (i == 0 || j == 0)
		return (NULL);
	arr_tmp = malloc(i * sizeof(char*));
	while (k < i)
	{
		arr_tmp[k] = malloc(j * sizeof(char));
		k++;
	}
	return (arr_tmp);
}

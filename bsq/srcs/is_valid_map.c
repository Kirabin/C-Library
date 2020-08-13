/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarash <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 12:20:13 by pmarash           #+#    #+#             */
/*   Updated: 2020/08/12 19:18:48 by pmarash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		check_length(char *str)
{
	int		i;
	int		len;
	int		len_of_fst;

	i = 0;
	while (str[i] != '\n')
		i++;
	i++;
	len_of_fst = next_occurence(str + next_occurence(str, '\n') + 1, '\n');
	while (str[i] != '\0')
	{
		len = 0;
		while (str[i] != '\n')
		{
			i++;
			len++;
		}
		i++;
		if (len != len_of_fst)
			return (0);
	}
	return (1);
}

int		check_char(char *str, int sel_nb)
{
	int		i;
	char	empty;
	char	obstacle;
	char	full;

	i = 0;
	while ((str[i] >= '0' && str[i] <= '9') && i < sel_nb)
		i++;
	empty = str[i];
	obstacle = str[i + 1];
	full = str[i + 2];
	if (empty == obstacle || obstacle == full || full == empty)
		return (0);
	while (str[i] != '\n')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			i++;
		if (str[i] != empty && str[i] != obstacle && str[i] != '\0')
			return (0);
		i++;
	}
	return (1);
}

int		is_valid_map(char *str)
{
	t_valid	str_amount;

	str_amount = get_rows_positions(str);
	if (count_endl(str) - 1 != str_amount.n_rows || str_amount.n_rows < 1)
		return (0);
	if (str_amount.n_rows != 1 && !check_length(str))
		return (0);
	if (!check_char(str, str_amount.n_position))
		return (0);
	if (!check_obstacle(str, str_amount.n_position))
		return (0);
	return (1);
}

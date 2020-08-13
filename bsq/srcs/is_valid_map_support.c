/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_map2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarash <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 18:17:46 by pmarash           #+#    #+#             */
/*   Updated: 2020/08/12 19:19:55 by pmarash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_valid		get_rows_positions2(char *str)
{
	int		i;
	int		amt_sels;
	char	*nb;
	t_valid	inf;

	amt_sels = 0;
	while (str[amt_sels] != '\n')
		amt_sels++;
	i = 0;
	while (i < (amt_sels - 3))
		i++;
	nb = (char*)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (i < (amt_sels - 3))
	{
		nb[i] = str[i];
		i++;
	}
	nb[i] = '\0';
	inf.n_rows = ft_atoi(nb);
	inf.n_position = i;
	return (inf);
}

int			check_nb_char(char *str)
{
	int		i;
	int		ctr_sym;

	i = 0;
	ctr_sym = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	while (str[i] != '\n')
	{
		i++;
		ctr_sym++;
	}
	if (ctr_sym != 3)
		return (0);
	return (1);
}

t_valid		get_rows_positions(char *str)
{
	int		i;
	t_valid	nb;

	i = 0;
	while ((str[i] != '\n' && str[i] != '\0')
			|| (str[i] >= '0' && str[i] <= '9'))
		i++;
	if (str[i] == '\n')
	{
		nb = get_rows_positions2(str);
		return (nb);
	}
	if (str[i] == '\0' || !check_nb_char(str))
	{
		nb.n_rows = 0;
		nb.n_position = 0;
	}
	else
		nb = get_rows_positions2(str);
	return (nb);
}

int			check_obstacle(char *str, int sel_nb)
{
	int		i;
	char	empty;
	int		cnt_empty;

	i = 0;
	cnt_empty = 0;
	while ((str[i] >= '0' && str[i] <= '9') && i < sel_nb)
		i++;
	empty = str[i];
	while (str[i] != '\n')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] == empty)
			cnt_empty++;
		i++;
	}
	if (cnt_empty == 0)
		return (0);
	return (1);
}

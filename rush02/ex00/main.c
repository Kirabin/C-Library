/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 17:24:50 by dmilan            #+#    #+#             */
/*   Updated: 2020/08/09 23:28:58 by lmurray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(void)
{
	char		*input;
	char		**lines;
	t_shape		**tmp;

	input = get_input();
	lines = ft_endl_split(input);
	tmp = find_shapes(lines);
	print_shapes(tmp);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_shape.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 14:29:03 by dmilan            #+#    #+#             */
/*   Updated: 2020/08/09 16:59:56 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	print_shape(t_shape *shape)
{
	ft_putchar('[');
	ft_putstr(shape->shape);
	ft_putstr("] [");
	ft_putnbr(shape->rows);
	ft_putstr("] [");
	ft_putnbr(shape->cols);
	ft_putchar(']');
}

void	print_shapes(t_shape **shapes)
{
	int		i;

	i = 0;
	if (shapes[i])
		print_shape(shapes[i++]);
	else
		ft_putstr("aucune");
	while (shapes[i])
	{
		ft_putstr(" || ");
		print_shape(shapes[i]);
		i++;
	}
	ft_putchar('\n');
}

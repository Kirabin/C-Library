/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 13:09:19 by dmilan            #+#    #+#             */
/*   Updated: 2020/08/12 19:25:31 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int argc, char **argv)
{
	t_input *input;

	input = malloc(sizeof(t_input));
	input->n = argc - 1;
	input->lines = argv + 1;
	bsq(input);
	return (0);
}

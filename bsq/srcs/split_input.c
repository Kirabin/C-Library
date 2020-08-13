  /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 12:20:38 by dmilan            #+#    #+#             */
/*   Updated: 2020/08/12 17:42:42 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

int		count_lines(char *str)
{
	int count;

	count = 0;
	while (*str)
		if (*str++ == '\n')
			count++;
	return (count);
}

t_input	*split_input(char *input_line)
{
	t_input	*input;
	int		line_len;
	int		i;

	i = 0;
	input = malloc(sizeof(t_input));
	input->lines = malloc(sizeof(char*) * count_lines(input_line));
	while (*input_line)
	{
		line_len = next_occurence(input_line, '\n');
		input->lines[i++] = ft_strncpy(input_line, line_len);
		input_line += line_len + 1;
	}
	return (input);
}

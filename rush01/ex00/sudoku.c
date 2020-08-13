/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 18:36:05 by dmilan            #+#    #+#             */
/*   Updated: 2020/03/15 20:34:49 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		validate_input(int argc, char **argv);

int		write_field(char **field)
{
	int		i;
	int		j;

	i = -1;
	while (++i < 9)
	{
		j = -1;
		while (++j < 9)
		{
			write(1, &field[i][j], 1);
			if (j != 8)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
	return (1);
}

int		is_possible(char **field, int i, int j, char value)
{
	int iter;
	int iter2;
	int box_x;
	int box_y;

	iter = -1;
	box_y = i / 3 * 3;
	box_x = j / 3 * 3;
	while (++iter < 9)
	{
		if (field[i][iter] == value)
			return (0);
		if (field[iter][j] == value)
			return (0);
	}
	iter = -1;
	while (box_y + ++iter < box_y + 3)
	{
		iter2 = -1;
		while (box_x + ++iter2 < box_x + 3)
			if (field[box_y + iter][box_x + iter2] == value)
				return (0);
	}
	return (1);
}

int		multi_occurence(char **field)
{
	int		i;
	int		j;
	char	c;

	i = -1;
	while (++i < 9)
	{
		j = -1;
		while (++j < 9)
		{
			c = field[i][j];
			field[i][j] = '.';
			if (c != '.')
				if (!is_possible(field, i, j, c))
				{
					field[i][j] = c;
					return (1);
				}
			field[i][j] = c;
		}
	}
	return (0);
}

int		solve_sudoku(char **field, int i, int j, int is_write)
{
	char	value;
	int		solutions;

	solutions = 0;
	if (i == 8 && j == 8 && field[i][j] != '.')
		return (!is_write || write_field(field));
	if (field[i][j] != '.')
		return (solve_sudoku(field, i + (j + 1) / 9, (j + 1) % 9, is_write));
	value = '0';
	while (++value <= '9')
	{
		if (is_possible(field, i, j, value))
		{
			field[i][j] = value;
			if (solutions > 1)
			{
				field[i][j] = '.';
				return (solutions);
			}
			solutions += solve_sudoku(field, i, j, is_write);
		}
		field[i][j] = '.';
	}
	return (solutions);
}

int		main(int argc, char **argv)
{
	int		is_solved;

	is_solved = 0;
	argc -= 1;
	argv += 1;
	if (!validate_input(argc, argv)
		|| multi_occurence(argv)
		|| solve_sudoku(argv, 0, 0, 0) != 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	solve_sudoku(argv, 0, 0, 1);
	return (0);
}

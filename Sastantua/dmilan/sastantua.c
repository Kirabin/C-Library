/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 10:36:54 by dmilan            #+#    #+#             */
/*   Updated: 2020/03/08 20:02:45 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		calc_rows(int size)
{
	int rows;
	int j;

	j = 0;
	rows = 0;
	while (j < size)
		rows += (3 + j++);
	return (rows);
}

int		calc_cols(int rows)
{
	int cols;
	int j;
	int new_tier_row;
	int step_rows;
	int step_cols;

	j = -1;
	cols = 1;
	step_cols = 4;
	step_rows = 3;
	new_tier_row = 2;
	while (++j < rows)
	{
		cols += 2;
		if (j == new_tier_row + 1)
		{
			cols += step_cols / 2 * 2;
			step_cols++;
			step_rows++;
			new_tier_row += step_rows;
		}
	}
	return (cols);
}

void	print_line(int cur_cols, int rows, int size, int j)
{
	int i;
	int cols;

	cols = calc_cols(rows);
	i = -1;
	while (++i < cols)
	{
		if (i < cols / 2 - cur_cols / 2 || i > cols / 2 + cur_cols / 2)
			ft_putchar(' ');
		else if (i == cols / 2 - cur_cols / 2)
			ft_putchar('/');
		else if (i == cols / 2 + cur_cols / 2)
			ft_putchar('\\');
		else if (i == cols / 2 + (size - 3) / 2 && size >= 5
				&& j == rows - (size + 1) / 2)
			ft_putchar('$');
		else if (i >= cols / 2 - (size - 1) / 2
				&& i <= cols / 2 + (size - 1) / 2
				&& j > rows - (size + 1) / 2 * 2)
			ft_putchar('|');
		else if (i > cols / 2 - cur_cols / 2 && i < cols / 2 + cur_cols / 2)
			ft_putchar('*');
	}
	ft_putchar('\n');
}

void	sastantua(int size)
{
	int j;
	int cols_rows[2];
	int step_cols_rows[2];
	int cur_cols;
	int new_tier_row;

	j = -1;
	step_cols_rows[0] = 4;
	step_cols_rows[1] = 3;
	new_tier_row = 2;
	cur_cols = 3;
	cols_rows[1] = calc_rows(size);
	cols_rows[0] = calc_cols(cols_rows[1]);
	while (++j < cols_rows[1])
	{
		print_line(cur_cols, cols_rows[1], size, j);
		cur_cols += 2;
		if (j == new_tier_row)
		{
			cur_cols += step_cols_rows[0]++ / 2 * 2;
			new_tier_row += ++step_cols_rows[1];
		}
	}
}

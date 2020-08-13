/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 10:36:54 by dmilan            #+#    #+#             */
/*   Updated: 2020/03/08 11:35:55 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	sastantua(int size)
{
	int i;
	int j;
	int cols;
	int rows;
	int cur_cols;
	int step_cols;
	int step_rows;
	int new_tier_row;

	i = 0;
	cols = 1;
	rows = 0;
	cur_cols = 3;
	step_cols = 4;
	step_rows = 3;
	new_tier_row = 2;
	while (i < size)
		rows += (3 + i++);
	j = -1;
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
	j = -1;
	step_cols = 4;
	step_rows = 3;
	new_tier_row = 2;
	while (++j < rows)
	{
		i = -1;
		while (++i < cols)
		{
			if (i < cols / 2 - cur_cols / 2 || i > cols / 2 + cur_cols / 2)
				ft_putchar(' ');
			else if (i == cols / 2 - cur_cols / 2)
				ft_putchar('/');
			else if (i == cols / 2 + cur_cols / 2)
				ft_putchar('\\');
			else if (i == cols / 2 + (size - 2) / 2 && size >= 5 && j == rows - (size + 1) / 2)
				ft_putchar('$');
			else if (i >= cols / 2 - (size - 1) / 2 && i <= cols / 2 + (size - 1) / 2 && j > rows - (size + 1) / 2 * 2)
				ft_putchar('|');
			else if (i > cols / 2 - cur_cols / 2 && i < cols / 2 + cur_cols / 2)
				ft_putchar('*');
		}
		cur_cols += 2;
		if (j == new_tier_row)
		{
			cur_cols += step_cols / 2 * 2;
			step_cols++;
			step_rows++;
			new_tier_row += step_rows;
		}
		ft_putchar('\n');
	}
}

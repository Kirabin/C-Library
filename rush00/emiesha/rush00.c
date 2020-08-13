/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 10:22:39 by dmilan            #+#    #+#             */
/*   Updated: 2020/03/08 13:55:37 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	if (y <= 0 || x <= 0)
		return ;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if (i + j == 0 || (j == x - 1 && i == 0)
				|| (i == y - 1 && j == 0) || i + j == x + y - 2)
				ft_putchar('o');
			else if (i == 0 || i == y - 1)
				ft_putchar('-');
			else if (j == 0 || j == x - 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

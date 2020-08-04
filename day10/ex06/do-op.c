/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 17:17:09 by dmilan            #+#    #+#             */
/*   Updated: 2020/08/03 18:52:07 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb / 10 * -1);
		ft_putnbr(nb % 10 * -1);
	}
	else if (nb / 10 == 0)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int		ft_atoi(char *str)
{
	int index;
	int power;
	int res;

	index = 0;
	power = 1;
	res = 0;
	while (*str == '+' || *str == ' ' || *str == '\t' || *str == '\r'
			|| *str == '\n' || *str == '\v' || *str == '\f')
		str++;
	if (*str == '-')
	{
		str++;
		power = -1;
	}
	while (str[index] != '\0' && str[index] >= '0' && str[index] <= '9')
		index++;
	index--;
	while (index >= 0)
	{
		res += power * (str[index--] - '0');
		power *= 10;
	}
	return (res);
}



int		main(int argc, char **argv)
{
	int (*oper)(int, int);

	if (argc != 4)
		return (0);
	if ()
		oper =

	ft_putnbr(ft_atoi("-123420"));
}

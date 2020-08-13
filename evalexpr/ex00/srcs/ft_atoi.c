/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 14:18:36 by dmilan            #+#    #+#             */
/*   Updated: 2020/03/10 16:57:26 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

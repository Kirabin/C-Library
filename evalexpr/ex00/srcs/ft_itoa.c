/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 14:42:33 by dmilan            #+#    #+#             */
/*   Updated: 2020/08/09 10:33:14 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_numlen(int nbr)
{
	int len;

	len = 0;
	if (nbr < 0)
		len++;
	if (nbr == 0)
		return (1);
	while (nbr)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*res;
	int		len;
	int		i;
	int		sign;

	sign = 1;
	if (nbr < 0)
		sign = -1;
	len = ft_numlen(nbr);
	i = len - 1;
	res = malloc(sizeof(char) * (len + 1));
	if (nbr == 0)
		res[0] = '0';
	while (nbr)
	{
		res[i] = nbr % 10 * sign + '0';
		nbr /= 10;
		i--;
	}
	res[len] = '\0';
	if (sign == -1)
		res[0] = '-';
	return (res);
}

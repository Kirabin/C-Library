/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarash <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 12:34:00 by pmarash           #+#    #+#             */
/*   Updated: 2020/08/10 12:34:35 by pmarash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_atoi(char *str)
{
	int res;
	int znak;

	res = 0;
	znak = 1;
	while (*str == '\n' || *str == ' ' || *str == '\t' || *str == '\r'
			|| *str == '\v' || *str == '\f')
		str++;
	while (*str == '+')
		str++;
	while (*str == '-')
	{
		znak = -1;
		str++;
	}
	if (*str < '0' || *str > '9')
		res = 0;
	else
		while (*str >= '0' && *str <= '9')
		{
			res = res * 10 + (*str - '0');
			str++;
		}
	return (res * znak);
}

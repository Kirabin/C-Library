/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 10:28:37 by dmilan            #+#    #+#             */
/*   Updated: 2020/08/10 14:52:03 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putnbr_fd(int fd, int nb)
{
	if (nb < 0)
	{
		ft_putchar_fd(fd, '-');
		if (nb / 10 != 0)
			ft_putnbr_fd(fd, nb / 10 * -1);
		ft_putnbr_fd(fd, nb % 10 * -1);
	}
	else if (nb / 10 == 0)
		ft_putchar_fd(fd, nb + '0');
	else
	{
		ft_putnbr_fd(fd, nb / 10);
		ft_putnbr_fd(fd, nb % 10);
	}
}

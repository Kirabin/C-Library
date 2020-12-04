/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcppn_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <dmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 13:18:58 by dmilan            #+#    #+#             */
/*   Updated: 2020/12/04 17:32:07 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putcppn_fd(char **arr, int n, int fd)
{
	int		i;

	i = 0;
	if (!arr)
		return ;
	while (i < n && arr[i])
	{
		ft_putstr_fd(arr[i], fd);
		ft_putc_fd('\n', fd);
		i++;
	}
}

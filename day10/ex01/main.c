/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 12:36:15 by dmilan            #+#    #+#             */
/*   Updated: 2020/03/16 16:00:41 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

void	ft_putint(int a)
{
	printf("%d\n", a);
}

int		main(void)
{
	int arr[10];
	int i;

	i = -1;
	while (++i < 10)
		arr[i] = i;

	ft_foreach(arr, 10, ft_putint);
}

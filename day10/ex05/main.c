/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 14:44:00 by dmilan            #+#    #+#             */
/*   Updated: 2020/08/04 17:35:21 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_sort(int *tab, int length, int (*f)(int, int));

int		more_than(int a, int b)
{
	if (a > b)
		return (1);
	if (a == b)
		return (0);
	return (-1);
}	

int		main(int argc, char **argv)
{
	int arr[0] = {};
	argc += 0;
	argv += 1;
	printf("%d", ft_is_sort(arr, 0, more_than));
	return (0);
}

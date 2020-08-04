/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 13:59:11 by dmilan            #+#    #+#             */
/*   Updated: 2020/03/16 14:23:06 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int));

int		square(int a)
{
	return a*a;
}

int		main()
{
	int arr[6] = {1, 2, 3, 4, 5, 6};
	int *arr2;
	int i;

	i = -1;
	arr2 = ft_map(arr, 6, &square);
	while (++i < 6)
		printf("%d\n", arr2[i]);
	free(arr2);
	return (0);
}

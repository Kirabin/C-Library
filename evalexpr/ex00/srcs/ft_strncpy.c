/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 11:36:49 by dmilan            #+#    #+#             */
/*   Updated: 2020/08/08 11:38:41 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncpy(char *str, int n)
{
	char	*res;
	int		i;

	i = 0;
	res = malloc(sizeof(char) * (n + 1));
	while (str[i] && i < n)
	{
		res[i] = str[i];
		i++;
	}
	res[n] = '\0';
	return (res);
}

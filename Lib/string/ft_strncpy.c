/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 12:19:30 by dmilan            #+#    #+#             */
/*   Updated: 2020/08/12 12:19:43 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strncpy(char *str, int n)
{
	char	*new_str;
	int		i;

	i = 0;
	new_str = malloc(sizeof(char) * (n + 1));
	while (i < n)
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[n] = '\0';
	return (new_str);
}

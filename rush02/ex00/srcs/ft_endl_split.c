/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_endl_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 17:43:22 by dmilan            #+#    #+#             */
/*   Updated: 2020/08/09 16:57:37 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		count_endl(char *str)
{
	int count;

	count = 0;
	while (*str)
	{
		if (*str == '\n')
			count++;
		str++;
	}
	return (count);
}

int		next_endl(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n' && str[i])
		i++;
	return (i);
}

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

/*
** Splits lines by '\n', makes copies and returns pointer to first line.
*/

char	**ft_endl_split(char *str)
{
	char	**lines;
	int		lines_len;
	int		line_len;
	int		i;

	i = 0;
	lines_len = count_endl(str);
	lines = malloc(sizeof(char *) * (lines_len + 1));
	while (*str)
	{
		line_len = next_endl(str);
		lines[i] = ft_strncpy(str, line_len);
		str += line_len;
		if (*str == '\n')
			str++;
		i++;
	}
	lines[lines_len] = NULL;
	return (lines);
}

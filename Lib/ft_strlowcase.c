/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 13:02:11 by dmilan            #+#    #+#             */
/*   Updated: 2020/03/10 13:03:50 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		if (str[index] <= 'Z' && str[index] >= 'A')
			str[index] = str[index] - 'A' + 'a';
		index++;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 12:55:11 by dmilan            #+#    #+#             */
/*   Updated: 2020/03/10 12:59:34 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		if (str[index] <= 'z' && str[index] >= 'a')
			str[index] = str[index] - 'a' + 'A';
		index++;
	}
	return (str);
}

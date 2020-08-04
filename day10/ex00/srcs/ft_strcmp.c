/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 20:09:57 by dmilan            #+#    #+#             */
/*   Updated: 2020/03/11 20:11:30 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int index;
	int comp_value;

	index = 0;
	while (s1[index] || s2[index])
	{
		comp_value = s1[index] - s2[index];
		if (comp_value)
			return (comp_value);
		index++;
	}
	return (0);
}

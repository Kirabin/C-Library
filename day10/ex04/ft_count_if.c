/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 14:40:59 by dmilan            #+#    #+#             */
/*   Updated: 2020/08/03 16:52:01 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int counter;

	i = -1;
	counter = 0;
	while ((*tab)[++i] != '\0')
	{
		if (f((*tab) + i))
			counter += 1;
	}
	return (counter);
}

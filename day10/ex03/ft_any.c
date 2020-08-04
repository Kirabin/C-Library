/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 14:28:11 by dmilan            #+#    #+#             */
/*   Updated: 2020/08/03 19:15:11 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	int i;

	i = -1;
	while ((*tab)[++i] != '\0')
	{
		if (f((*tab) + i))
			return (1);
	}
	return (0);
}

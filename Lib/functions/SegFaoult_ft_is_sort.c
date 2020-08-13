/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 14:44:00 by dmilan            #+#    #+#             */
/*   Updated: 2020/08/05 12:11:38 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int first_flag;
	int ret;

	i = 0;
	first_flag = 0;
	while (!f(tab[i], tab[i + 1]))  // KO: no check for out_of_len
		i++;
	first_flag = f(tab[i], tab[i + 1]);
	while (++i < length - 1)
	{
		ret = f(tab[i], tab[i + 1]);
		if (ret != 0 && ret * first_flag < 0)
			return (0);
	}
	return (1);
}

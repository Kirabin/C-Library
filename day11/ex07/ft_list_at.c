/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 12:48:22 by dmilan            #+#    #+#             */
/*   Updated: 2020/08/04 13:01:20 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int i;

	i = -1;
	while (++i < nbr)
	{
		if (!begin_list)
			return (0);
		begin_list = begin_list->next;
	}
	return (begin_list);
}

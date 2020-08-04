/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 09:40:44 by dmilan            #+#    #+#             */
/*   Updated: 2020/08/04 11:16:15 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_create_elem(void *data)
{
	t_list *node;

	node = malloc(sizeof(t_list));
	if (node)
	{
		node->data = data;
		node->next = NULL;
	}
	return (node);
}

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *node;
	t_list *new_node;

	node = *begin_list;
	new_node = ft_create_elem(data);
	if (node == NULL)
		*begin_list = new_node;
	else
	{
		while (node->next)
			node = node->next;
		node->next = new_node;
	}
}

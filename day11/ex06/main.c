#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "ft_list.h"


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

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *node;

	node = ft_create_elem(data);
	if (*begin_list == NULL)
	{
		*begin_list = node;
	}
	else
	{
		node->next = *begin_list;
		*begin_list = node;
	}
}

int main()
{
	t_list *list;

	list = NULL;
	ft_list_push_front(&list, "a");
	ft_list_push_front(&list, "b");
	ft_list_push_front(&list, "c");
	ft_list_push_front(&list, "d");
	ft_list_push_front(&list, "e");
	ft_list_push_front(&list, "f");

	ft_list_clear(&list);
	return (0);
}

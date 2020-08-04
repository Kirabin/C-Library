#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "ft_list.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
}

void 	print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->data);
		list = list->next;
	}
	ft_putstr("\n");
}

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


int		is_equal(char *a, char *b)
{
	return  (*a == *b) || (*a == 'f');
}

int main()
{
	t_list *list;
	t_list *list2;

	list = NULL;
	list2 = NULL;
	ft_list_push_front(&list, "a");
	ft_list_push_front(&list, "b");
	ft_list_push_front(&list, "c");
	ft_list_push_front(&list, "d");
	ft_list_push_front(&list, "e");
	ft_list_push_front(&list, "f");
	
	ft_list_push_front(&list2, "1");
	ft_list_push_front(&list2, "2");
	ft_list_push_front(&list2, "3");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "5");
	ft_list_push_front(&list2, "6");

	print_list(list);
	ft_putchar('\n');
	print_list(list2);
	ft_putchar('\n');
	ft_list_merge(&list, list2);
	print_list(list);
	return (0);
}

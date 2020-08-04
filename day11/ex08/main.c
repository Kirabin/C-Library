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

t_list		*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*list;

	i = 0;
	list = NULL;
	while (++i < ac)
		ft_list_push_front(&list, av[i]);
	return (list);
}

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

int main(int argc, char **argv)
{
	t_list *list;

	list = ft_list_push_params(argc, argv);
	print_list(list);
	ft_list_reverse(&list);
	print_list(list);
	return (0);
}

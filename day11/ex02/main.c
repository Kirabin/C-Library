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

	print_list(list);
	return (0);
}

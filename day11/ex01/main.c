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
	ft_list_push_back(&list, "a\n");
	ft_list_push_back(&list, "b\n");
	ft_list_push_back(&list, "c\n");
	ft_list_push_back(&list, "d\n");
	ft_list_push_back(&list, "d\n");
	ft_list_push_back(&list, "d\n");
	ft_list_push_back(&list, "d\n");

	print_list(list);
	return (0);
}

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
		ft_putstr("\n");
		list = list->next;
	}
}

int main(int argc, char **argv)
{
	t_list *list;

	list = ft_list_push_params(argc, argv);
	print_list(list);

	return (0);
}

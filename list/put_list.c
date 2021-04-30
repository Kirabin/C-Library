#include "libft.h"

void	put_list_forward(t_list *list, void (*put)(void *content))
{
	t_list	*start;

	start = list;
	if (!list)
		put_string("list is empty\n");
	else
	{
		while (list)
		{
			put(list->content);
			list = list->next;
			if (list == start)
				break ;
		}
		put_string("\n");
	}
}

void	put_list_backward(t_list *list, void (*put)(void *content))
{
	t_list	*start;

	start = list;
	if (!list)
		put_string("list is empty\n");
	else
	{
		while (list)
		{
			put(list->content);
			list = list->previous;
			if (list == start)
				break ;
		}
		put_string("\n");
	}
}

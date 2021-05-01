#include "libft.h"

void	put_list_forward(t_list *list, void (*put)(void *content, char *end), char *sep, char *end)
{
	t_list	*start;

	start = list;
	if (!list)
		put_string("(null)");
	else
	{
		while (list)
		{
			put(list->content, sep);
			list = list->next;
			if (list == start)
				break ;
		}
	}
	put_string(end);
}

void	put_list_backward(t_list *list, void (*put)(void *content, char *end), char *sep, char *end)
{
	t_list	*start;

	start = list;
	if (!list)
		put_string("(null)");
	else
	{
		while (list)
		{
			put(list->content, sep);
			list = list->previous;
			if (list == start)
				break ;
		}
	}
	put_string(end);
}

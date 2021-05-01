#include "libft.h"

t_list	*copy_list(t_list *list, void *(*dup)(void*))
{
	t_list	*copy;
	t_list	*node;

	copy = list;
	while (list)
	{
		node = new_list(dup(list->content));
		list_add_back(&copy, node);
		list = list->next;
	}
	return (copy);
}

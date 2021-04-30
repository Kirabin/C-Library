#include "libft.h"

t_list	*find_list(t_list *list, void *data_ref,
	bool (*compare)(void *, void *))
{
	t_list	*start;

	start = list;
	while (list)
	{
		if (compare(list->content, data_ref))
			return (list);
		list = list->next;
		if (start == list)
			break ;
	}
	return (NULL);
}

#include "libft.h"

void	sort_list(t_list **list, bool (*compare)(t_list *, t_list *))
{
	t_list		*a;
	t_list		*b;

	a = *list;
	while (a)
	{
		b = a->next;
		while (b)
		{
			if (compare(a, b))
				swap_list_content(a, b);
			b = b->next;
		}
		a = a->next;
	}
}

// Compare (int)a > (int)b
bool	list_compare_int(t_list *a, t_list *b)
{
	if (*(int *)a->content > *(int *)b->content)
		return (true);
	return (false);
}

bool	is_list_sorted(t_list *list, bool (*compare)(t_list *, t_list *))
{
	if (!list || !list->next)
		return (true);
	while (list->next)
	{
		if (compare(list, list->next))
			return (false);
		list = list->next;
	}
	return (true);
}

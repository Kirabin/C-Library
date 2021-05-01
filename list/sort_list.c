#include "libft.h"

// static t_list	*sort_list_by_ascii(t_list *list)
// {
// 	t_list	*new_list;
// 	t_list	*a;
// 	t_list	*b;
// 	t_list	*temp;

// 	new_list = copy_list(list, _strdup);
// 	a = new_list;
// 	while (a)
// 	{
// 		b = new_list;
// 		while (b->next)
// 		{
// 			if (_strcmp(b->content, b->next->content) > 0)
// 				swap_list_content(a, b);
// 			b = b->next;
// 		}
// 		a = a->next;
// 	}
// 	return (new_list);
// }

void	sort_list(t_list **list, bool (*compare)(void *, void *))
{
	t_list		*a;
	t_list		*b;
	int			i;
	int			j;
	int			size;

	i = 0;
	a = *list;
	size = list_size(a);
	while (a && i < size)
	{
		j = 1;
		b = (*list)->next;
		while (b && j < size)
		{
			if (compare(b->previous->content, b->content))
				swap_list_content(b->previous, b);
			b = b->next;
			j++;
		}
		a = a->next;
		i++;
	}
}

// Compare (int)a > (int)b
bool	list_compare_int_more(void *a, void *b)
{
	if (*(int *)a > *(int *)b)
		return (true);
	return (false);
}

// Compare (int)a == (int)b
bool	list_compare_int_equal(void *a, void *b)
{
	if (*(int *)a == *(int *)b)
		return (true);
	return (false);
}

// Compare (int)a < (int)b
bool	list_compare_int_less(void *a, void *b)
{
	if (*(int *)a < *(int *)b)
		return (true);
	return (false);
}

bool	is_list_sorted(t_list *list, bool (*compare)(void *, void *))
{
	t_list	*start;

	if (list)
	{
		start = list;
		list = list->next;
		while (list)
		{
			if (compare(list->previous->content, list->content))
				return (false);
			list = list->next;
			if (start == list)
				break ;
		}
	}
	return (true);
}

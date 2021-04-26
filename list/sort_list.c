#include "libft.h"

void	sort_list(t_list **list, int (*compare)(t_list *, t_list *))
{
	t_list		*a;
	t_list		*b;
	void		*temp;

	a = *list;
	while (a)
	{
		b = a->next;
		while (b)
		{
			if (compare(a, b))
			{
				temp = b->content;
				b->content = b->next->content;
				b->next->content = temp;
			}
			b = b->next;
		}
		a = a->next;
	}
}

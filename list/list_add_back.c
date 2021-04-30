#include "libft.h"

void	list_add_back(t_list **root, t_list *new)
{
	t_list	*end;
	t_list	*start;

	start = *root;
	if (start && new)
	{
		end = start->previous;
		if (end)
		{
			end->next = new;
			new->previous = end;
			new->next = start;
			start->previous = new;
		}
		else
		{
			start->next = new;
			start->previous = new;
			new->next = start;
			new->previous = start;
		}
	}
	else if (new)
		*root = new;
}

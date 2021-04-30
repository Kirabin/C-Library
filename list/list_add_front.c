#include "libft.h"

void	list_add_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		list_add_back(lst, new);
		if ((*lst)->previous)
			*lst = (*lst)->previous;
	}
}

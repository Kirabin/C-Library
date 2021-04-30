#include "libft.h"

int	list_size(t_list *lst)
{
	t_list		*start;
	int			size;

	size = 0;
	if (!lst)
		return (0);
	start = lst;
	while (lst)
	{
		lst = lst->next;
		size++;
		if (lst == start)
			break ;
	}
	return (size);
}

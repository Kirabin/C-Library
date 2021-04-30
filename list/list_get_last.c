#include "libft.h"

t_list	*list_get_last(t_list *lst)
{
	if (lst)
	{
		if (lst->previous)
			return (lst->previous);
		else
			return (lst);
	}
	return (NULL);
}

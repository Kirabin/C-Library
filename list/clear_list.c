#include "libft.h"

void	clear_list(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*temp;

	node = *lst;
	if (!del || !*lst)
		return ;
	while (node)
	{
		temp = node;
		node = node->next;
		free_list(temp, free);
		if (node == *lst)
			break ;
	}
	*lst = NULL;
}

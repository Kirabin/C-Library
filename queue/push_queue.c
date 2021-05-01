#include "libft.h"

void	push_queue(t_queue **root, t_queue *new)
{
	t_queue		*node;

	if (root)
	{
		node = *root;
		if (node)
		{
			while (node->next)
				node = node->next;
			node->next = new;
			new->previous = node;
		}
		else
		{
			*root = new;
		}
	}
}
